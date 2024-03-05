#include "base.h"
#include <condition_variable>
#include <cstdio>
#include <cstring>
#include <iostream>

#include "../emu/ppu.h"

#include "SFML/Window/Keyboard.hpp"
#include "backward.hpp"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Window/Event.hpp>
#include <mutex>
#include <thread>

#include "../main.h"

bool diag = false;

void _debug(char const* func, char const* filename, int line) {
    static char const* lastFile = nullptr;
    static int lastLine = -1;
    if (!diag) { return; }
    if (filename == lastFile && line == lastLine) { return; }

    if (!strcmp(func, "DecTimersLoop")) { return; }
    if (!strcmp(func, "SkipExpTimer")) { return; }
    if (!strcmp(func, "InitByteLoop")) { return; }
    if (!strcmp(func, "InitByte")) { return; }
    if (!strcmp(func, "SkipByte")) { return; }
    if (!strcmp(func, "MiscLoop")) { return; }
    if (!strcmp(func, "MiscLoopBack")) { return; }
    if (!strcmp(func, "NextSprOffset")) { return; }
    if (!strcmp(func, "StrSprOffset")) { return; }
    if (!strcmp(func, "ShuffleLoop")) { return; }

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
Zpg zpg_(0);
ZpgX zpgX_(0);
ZpgY zpgY_(0);
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
    n = opd >> 7;
    z = !(a.read() & opd);
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

struct CPU {
    PPU& ppu;
    word pc;
    std::ostream* ofile = nullptr;

    explicit CPU(PPU& ppu) : ppu(ppu) {}

    void nmi() {
        php();
        push16(pc);
        pc = get16(0xfffa);
    }

    void push16(word z) {
        push8((z >> 8) & 0xff);
        push8(z & 0xff);
    }

    void push8(byte z) {
        s--;
        word sp = 0x0100 + s.read();
        m.set(sp, z);
        // printf("### %04x <- %02x\n", sp, z);
    }

    word pop16() {
        word ret = word(pop8());
        ret |= (word(pop8()) << 8);
        return ret;
    }

    byte pop8() {
        word sp = 0x0100 + s.read();
        byte ret = m.get(sp);
        ++s;
        return ret;
    }

    void php() {
        push8((byte(n) << 2) | (byte(z) << 1) | (byte(c) << 0));
    }

    void plp() {
        byte b = pop8();
        n = (b & 0x04);
        z = (b & 0x02);
        c = (b & 0x01);
    }

    byte get8(word z) { return m.get(z); }
    void set8(word z, byte v) { return m.set(z, v); }
    word get16(word z) { return word(get8(z)) | (word(get8(z + 1)) << 8); }
    void set16(word z, word v) { set8(z, v); set8(z + 1, v >> 8); }

    void call(word addr) {
        push16(pc - 1);
        push16(0x5555);
        pc = addr;
    }
};

int main() {
    byte ramBytes[0x0800];
    Memory::RAM ram(ramBytes);
    m.addRegion(Memory::Region {ram, 0x0000, 0x07ff });

    sf::Event event;
    sf::RenderWindow window(sf::VideoMode(256, 240), "mario++");
    while (!window.isOpen()) { window.pollEvent(event); }

    std::mutex lineMutex;
    std::condition_variable lineCond;
    PPU ppu(window);
    PPUTimer ppuTimer(ppu, lineMutex, lineCond);
    m.addRegion(Memory::Region {ppu.regs, 0x2000, 0x0007 });

    IORegs ioRegs(ppu);
    m.addRegion(Memory::Region {ioRegs, 0x4000, 0x001f });

    preStart();
    Start();

    window.setSize({256 * 3, 240 * 3});

    std::tuple<byte, byte, byte> prevLoc {0, 0, 0};

    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
                ppuTimer.stopped = true;
                return 0;
            }
            if (event.type == sf::Event::KeyPressed) {
                switch (event.key.code) {
                    case sf::Keyboard::Key::D:          ioRegs.joy0 |= 0x80; break;
                    case sf::Keyboard::Key::A:          ioRegs.joy0 |= 0x40; break;
                    case sf::Keyboard::Key::S:          ioRegs.joy0 |= 0x20; break;
                    case sf::Keyboard::Key::W:          ioRegs.joy0 |= 0x10; break;
                    case sf::Keyboard::Key::RBracket:   ioRegs.joy0 |= 0x08; break;
                    case sf::Keyboard::Key::LBracket:   ioRegs.joy0 |= 0x04; break;
                    case sf::Keyboard::Key::Comma:      ioRegs.joy0 |= 0x02; break;
                    case sf::Keyboard::Key::Period:     ioRegs.joy0 |= 0x01; break;
                    default: /* ignore */
                }
            }
            if (event.type == sf::Event::KeyReleased) {
                switch (event.key.code) {
                    case sf::Keyboard::Key::D:          ioRegs.joy0 &= ~0x80; break;
                    case sf::Keyboard::Key::A:          ioRegs.joy0 &= ~0x40; break;
                    case sf::Keyboard::Key::S:          ioRegs.joy0 &= ~0x20; break;
                    case sf::Keyboard::Key::W:          ioRegs.joy0 &= ~0x10; break;
                    case sf::Keyboard::Key::RBracket:   ioRegs.joy0 &= ~0x08; break;
                    case sf::Keyboard::Key::LBracket:   ioRegs.joy0 &= ~0x04; break;
                    case sf::Keyboard::Key::Comma:      ioRegs.joy0 &= ~0x02; break;
                    case sf::Keyboard::Key::Period:     ioRegs.joy0 &= ~0x01; break;
                    default: /* ignore */
                }
            }
        }

        // we'll busy-wait for a vblank
        std::this_thread::yield();
        if (ppu.regs.status & 0x80) {
            // if NMI is enabled, invoke it
            if (ppu.regs.ctrl & 0x80) {

                NonMaskableInterrupt();

                auto currLoc = std::tuple(
                    ramBytes[CurrentPageLoc],
                    ramBytes[CurrentColumnPos],
                    ramBytes[BlockBufferColumnPos]);

                if (currLoc != prevLoc) {
                    for (int i = 0; i < 13; i++) {
                        int p = MetatileBuffer + i;
                        if (ramBytes[p]) {
                            printf("%02x ", ramBytes[p]);
                        } else {
                            printf("   ");
                        }
                    }
                    printf(
                        ": pg=%02x col=%02x bbcol=%d\n",
                        std::get<0>(currLoc),
                        std::get<1>(currLoc),
                        std::get<2>(currLoc));

                    prevLoc = currLoc;
                }
            }
        }

        ppu.draw();
        ppu.window.display();
    }
}
