#include "base.h"
#include <cstdio>
#include <memory>

#include "../emu/ppu.h"

#include "backward.hpp"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Window/Event.hpp>

void _debug(char const* func, char const* filename, int line) {
    static char const* lastFile = nullptr;
    static int lastLine = -1;
    if (filename == lastFile && line == lastLine) { return; }
    lastFile = filename;
    lastLine = line;
    printf(
        "%10s:%5d [%30s] a:%02x x:%02x y:%02x n:%d z:%d c:%d\n",
        filename, line, func, a.read(), x.read(), y.read(), n, z, c);
}

Imm imm_(0);
Abs abs_(0);
AbsX absX_(0);
AbsY absY_(0);
IndY indY_(0);

void ld(Mode& d, Mode& s) {
    d.write(nz(s.read()));
}

void ld(Mode& d, byte v) {
    Imm s(v);
    ld(d, s);
}

void st(Mode& d, Mode& s) {
    d.write(s.read());
}

void inc(Mode& d, Mode& s) {
    ld(d, s.read() + 1);
}

void dec(Mode& d, Mode& s) {
    ld(d, s.read() - 1);
}

void adc(Mode& d, Mode& s1, Mode& s2, bool cc) {
    word tmp = word(s1.read()) + word(s2.read()) + word(cc);
    d.write(nzc(tmp));
}

void sbc(Mode& d, Mode& s1, Mode& s2, bool cc) {
    // https://www.masswerk.at/6502/6502_instruction_set.html#arithmetic
    word tmp = word(s1.read()) - word(s2.read()) - word(!cc);
    d.write(nzc(tmp));
    c = !c;
}

void cmp(Reg& s1, Mode& s2) {
    sbc(dummy, s1, s2, 1);
}

void and_(Mode& d, Mode& s1, Mode& s2) {
    d.write(nz(s1.read() & s2.read()));
}

void ora(Mode& d, Mode& s1, Mode& s2) {
    d.write(nz(s1.read() | s2.read()));
}

void eor(Mode& d, Mode& s1, Mode& s2) {
    d.write(nz(s1.read() ^ s2.read()));
}

void push(Reg& r) {
    --s;
    Abs sp(0x100 + s.read());
    st(sp, r);
}

void pull(Reg& r) {
    Abs sp(0x100 + s.read());
    ld(r, sp);
    ++s;
}

void lsr(Mode& d, Mode& s) {
    word tmp = s.read();
    c = (tmp & 1);
    d.write(nz(tmp >> 1));
}

void asl(Mode& d, Mode& s) {
    word tmp = s.read();
    tmp <<= 1;
    d.write(nzc(tmp));
}

void rol(Mode& d, Mode& s) {
    word tmp = s.read();
    tmp <<= 1;
    tmp |= c;
    d.write(nzc(tmp));
}

void ror(Mode& d, Mode& s) {
    word tmp = (c ? 0x0100 : 0x0000);
    tmp |= s.read();
    c = (tmp & 1);
    d.write(nz(tmp >> 1));
}

void bit(Mode& s) {
    /*
        https://www.masswerk.at/6502/6502_instruction_set.html#BIT
        Test Bits in Memory with Accumulator

        bits 7 and 6 of operand are transfered to bit 7 and 6 of SR (N,V);
        the zero-flag is set according to the result of the operand AND
        the accumulator (set, if the result is zero, unset otherwise).
        This allows a quick check of a few bits at once without affecting
        any of the registers, other than the status register (SR).

        A AND M, M7 -> N, M6 -> V           N	Z	C	I	D	V
                                            M7	+	-	-	-	M6
    */
    word opd = s.read();
    word tmp = a.read() & opd;
    z = !!tmp;
    n = !!(opd & 0x80);
}

A a;
X x;
Y y;
S s;
D dummy;
bool n, z, c;

namespace backward {
backward::SignalHandling sh;
}

int main() {
    byte ramBytes[0x0800];
    Memory::RAM ram(ramBytes);
    m.addRegion(Memory::Region {ram, 0x0000, 0x07ff });

    sf::Event event;
    sf::RenderWindow window(sf::VideoMode(256, 240), "mario++");
    while (!window.isOpen()) { window.pollEvent(event); }

    PPU ppu(window);
    PPUTimer ppuTimer(ppu);
    m.addRegion(Memory::Region {ppu.regs, 0x2000, 0x0007 });

    IORegs ioRegs(ppu);
    m.addRegion(Memory::Region {ioRegs, 0x4000, 0x001f });

    preStart();
    Start();

    window.setSize({256 * 3, 240 * 3});

    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
                ppuTimer.stopped = true;
                return 0;
            }
        }

        // we'll busy-wait for a vblank
        if (ppu.regs.status & 0x80) {
            // if NMI is enabled, invoke it
            if (ppu.regs.ctrl & 0x80) {
                NonMaskableInterrupt();
            }
        } else {
            std::this_thread::yield();
        }

        // printf("@@@ SCROLL %04x\n", ppu.regs.scroll);
        ppu.draw();
        ppu.window.display();
    }
}
