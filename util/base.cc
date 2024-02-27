#include "base.h"
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iostream>
#include <memory>

#include "../emu/ppu.h"

#include "backward.hpp"
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Window/Event.hpp>

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

void TEST_HACKS() {
    Reg u, v, w;

    v.write(0x44);
    w.write(0xaa);
    adc(u, v, w, 0);
    assert (u.read() == 0xee);
    assert (n);
    assert (!z);
    assert (!c);

    v.write(0x44);
    w.write(0xaa);
    adc(u, v, w, 1);
    assert (u.read() == 0xef);
    assert (n);
    assert (!z);
    assert (!c);

    v.write(0x55);
    w.write(0x11);
    sbc(u, v, w, 1);
    assert (u.read() == 0x44);
    assert (!n);
    assert (!z);
    assert (c);

    v.write(0x55);
    w.write(0x11);
    sbc(u, v, w, 0);
    assert (u.read() == 0x43);
    assert (!n);
    assert (!z);
    assert (c);

    v.write(0x50);
    w.write(0xe0);
    sbc(u, v, w, 1);
    assert (u.read() == 0x70);
    assert (!n);
    assert (!z);
    assert (!c);

    v.write(0x50);
    w.write(0xe0);
    cmp(v, w);
    assert (!n);
    assert (!z);
    assert (!c);
    
    v.write(0xe0);
    w.write(0x50);
    cmp(v, w);
    assert (n);
    assert (!z);
    assert (c);

    m.set(0x0124, 0xdd);
    m.set(0x0125, 0xee);
    x.write(0x01);
    lda(ABSX(0x0123));
    assert(a.read() == 0xdd);
    y.write(0x02);
    lda(ABSY(0x0123));
    assert(a.read() == 0xee);

    m.set(0x0050, 0x23);
    m.set(0x0051, 0x01);
    lda(INDY(0x0050));
    assert(a.read() == 0xee);
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
        push16(pc);
        push16(0x5555);
        pc = addr;
    }

    bool interp() {
        static byte sizes[256] = {
            1, 2, 0, 0, 0, 2, 2, 0,
            1, 2, 1, 0, 0, 3, 3, 0,
            2, 2, 0, 0, 0, 2, 2, 0,
            1, 3, 0, 0, 0, 3, 3, 0,
            3, 2, 0, 0, 2, 2, 2, 0,
            1, 2, 1, 0, 3, 3, 3, 0,
            2, 2, 0, 0, 0, 2, 2, 0,
            1, 3, 0, 0, 0, 3, 3, 0,
            1, 2, 0, 0, 0, 2, 2, 0,
            1, 2, 1, 0, 3, 3, 3, 0,
            2, 2, 0, 0, 0, 2, 2, 0,
            1, 3, 0, 0, 0, 3, 3, 0,
            1, 2, 0, 0, 0, 2, 2, 0,
            1, 2, 1, 0, 3, 3, 3, 0,
            2, 2, 0, 0, 0, 2, 2, 0,
            1, 3, 0, 0, 0, 3, 3, 0,
            0, 2, 0, 0, 2, 2, 2, 0,
            1, 0, 1, 0, 3, 3, 3, 0,
            2, 2, 0, 0, 2, 2, 2, 0,
            1, 3, 1, 0, 0, 3, 0, 0,
            2, 2, 2, 0, 2, 2, 2, 0,
            1, 2, 1, 0, 3, 3, 3, 0,
            2, 2, 0, 0, 2, 2, 2, 0,
            1, 3, 1, 0, 3, 3, 3, 0,
            2, 2, 0, 0, 2, 2, 2, 0,
            1, 2, 1, 0, 3, 3, 3, 0,
            2, 2, 0, 0, 0, 2, 2, 0,
            1, 3, 0, 0, 0, 3, 3, 0,
            2, 2, 0, 0, 2, 2, 2, 0,
            1, 2, 1, 0, 3, 3, 3, 0,
            2, 2, 0, 0, 0, 2, 2, 0,
            1, 3, 0, 0, 0, 3, 3, 0
        };
        static std::string names[256] = {
            "BRK","ORA(ind,X)","","","","ORAzpg","ASLzpg","",
            "PHP","ORA#","ASLA","","","ORAabs","ASLabs","",
            "BPLrel","ORA(ind),Y","","","","ORAzpg,X","ASLzpg,X","",
            "CLC","ORAabs,Y","","","","ORAabs,X","ASLabs,X","",
            "JSRabs","AND(ind,X)","","","BITzpg","ANDzpg","ROLzpg","",
            "PLP","AND#","ROLA","","BITabs","ANDabs","ROLabs","",
            "BMIrel","AND(ind),Y","","","","ANDzpg,X","ROLzpg,X","",
            "SEC","ANDabs,Y","","","","ANDabs,X","ROLabs,X","",
            "RTI","EOR(ind,X)","","","","EORzpg","LSRzpg","",
            "PHA","EOR#","LSRA","","JMPabs","EORabs","LSRabs","",
            "BVCrel","EOR(ind),Y","","","","EORzpg,X","LSRzpg,X","",
            "CLI","EORabs,Y","","","","EORabs,X","LSRabs,X","",
            "RTS","ADC(ind,X)","","","","ADCzpg","RORzpg","",
            "PLA","ADC#","RORA","","JMP(ind)","ADCabs","RORabs","",
            "BVSrel","ADC(ind),Y","","","","ADCzpg,X","RORzpg,X","",
            "SEI","ADCabs,Y","","","","ADCabs,X","RORabs,X","",
            "","STA(ind,X)","","","STYzpg","STAzpg","STXzpg","",
            "DEY","","TXA","","STYabs","STAabs","STXabs","",
            "BCCrel","STA(ind),Y","","","STYzpg,X","STAzpg,X","STXzpg,Y","",
            "TYA","STAabs,Y","TXS","","","STAabs,X","","",
            "LDY#","LDA(ind,X)","LDX#","","LDYzpg","LDAzpg","LDXzpg","",
            "TAY","LDA#","TAX","","LDYabs","LDAabs","LDXabs","",
            "BCSrel","LDA(ind),Y","","","LDYzpg,X","LDAzpg,X","LDXzpg,Y","",
            "CLV","LDAabs,Y","TSX","","LDYabs,X","LDAabs,X","LDXabs,Y","",
            "CPY#","CMP(ind,X)","","","CPYzpg","CMPzpg","DECzpg","",
            "INY","CMP#","DEX","","CPYabs","CMPabs","DECabs","",
            "BNErel","CMP(ind),Y","","","","CMPzpg,X","DECzpg,X","",
            "CLD","CMPabs,Y","","","","CMPabs,X","DECabs,X","",
            "CPX#","SBC(ind,X)","","","CPXzpg","SBCzpg","INCzpg","",
            "INX","SBC#","NOP","","CPXabs","SBCabs","INCabs","",
            "BEQrel","SBC(ind),Y","","","","SBCzpg,X","INCzpg,X","",
            "SED","SBCabs,Y","","","","SBCabs,X","INCabs,X",""
        };

        auto _diag = diag;
        diag = false;
        auto pc_ = pc;
        byte opcode = m.get(pc);
        byte size = sizes[opcode];
        auto& name = names[opcode];
        word opd = 0;
        switch (size) {
            case 1: break;
            case 2: opd = get8(pc + 1); break;
            case 3: opd = get16(pc + 1); break;
            default: {
                printf("\n\n!!! opcode=%02x pc=%04x\n\n", m.get(pc), pc);
                fflush(stdout);
                abort();
            }
        }
        diag = _diag;

        if (ofile) {
            (*ofile) << "pc:" << std::hex << std::setw(4) << pc
                    << " op:" << std::hex << std::setw(2) << word(opcode)
                    << " opd:" << std::hex << std::setw(4) << opd
                    << " " << std::setw(20) << name
                    << " n:" << std::hex << std::setw(1) << n
                    << " z:" << std::hex << std::setw(1) << z
                    << " c:" << std::hex << std::setw(1) << c
                    << " a:" << std::hex << std::setw(2) << word(a.read())
                    << " x:" << std::hex << std::setw(2) << word(x.read())
                    << " y:" << std::hex << std::setw(2) << word(y.read())
                    << std::endl;
        }

        // the "jmp infiniteLoop" instruction in `Start`
        if (opcode == 0x4c && pc == opd) {
            return false;
        }
        // the "reti" instruction from `NonMaskableInterrupt`
        if (opcode == 0x40) {
            return false;
        }
        if (opcode == 0x60) {
            pc = pop16();
            if (pc == 0x5555) {
                return false;
            }
            ++pc;
            return true;
        }

        pc += size;

        switch (opcode) {
            case 0x05:       ora(ABS(opd));                         break;
            case 0x06:       asl(ABS(opd));                         break;
            case 0x09:       ora(IMM(opd));                         break;
            case 0x0a:       asl();                                         break;
            case 0x0d:       ora(ABS(opd));                         break;
            case 0x0e:       asl(ABS(opd));                         break;

            case 0x10:       if (!n) { pc += int16_t(int8_t(opd)); }        break;
            case 0x18:       clc();                                         break;

            case 0x20:       push16(pc - 1); pc = opd;                   break;
            case 0x24:       bit(ABS(opd));                         break;
            case 0x26:       rol(ABS(opd));                         break;
            case 0x29:       anda(IMM(opd));                        break;
            case 0x2a:       rol();                                         break;
            case 0x2c:       bit(ABS(opd));                         break;
            case 0x2d:       anda(ABS(opd));                        break;
            case 0x2e:       rol(ABS(opd));                         break;

            case 0x30:       if (n) { pc += int16_t(int8_t(opd)); }        break;
            case 0x38:       sec();                                        break;
            case 0x39:       anda(ABSY(opd));                      break;
            case 0x3d:       anda(ABSX(opd));                      break;

            case 0x45:       eor(ABS(opd));                        break;
            case 0x46:       lsr(ABS(opd));                        break;
            case 0x48:       pha();                                        break;
            case 0x49:       eor(IMM(opd));                        break;
            case 0x4a:       lsr();                                        break;
            case 0x4c:       pc = opd;                                     break;
            case 0x4e:       lsr(ABS(opd));                        break;

            case 0x65:       adc(ABS(opd));                        break;
            case 0x68:       pla();                                        break;
            case 0x69:       adc(IMM(opd));                        break;
            case 0x6a:       ror();                                        break;
            case 0x6c:       pc = get16(opd);                           break;
            case 0x6d:       adc(ABS(opd));                        break;

            case 0x75:       adc(ABSX(opd));                       break;
            case 0x79:       adc(ABSY(opd));                       break;
            case 0x7d:       adc(ABSX(opd));                       break;
            case 0x7e:       ror(ABSX(opd));                       break;

            case 0x84:       sty(ABS(opd));                        break;
            case 0x85:       sta(ABS(opd));                        break;
            case 0x86:       stx(ABS(opd));                        break;
            case 0x8c:       sty(ABS(opd));                        break;
            case 0x8d:       sta(ABS(opd));                        break;
            case 0x8e:       stx(ABS(opd));                        break;
            case 0x88:       dey();                                        break;
            case 0x8a:       txa();                                        break;

            case 0x90:       if (!c) { pc += int16_t(int8_t(opd)); }       break;
            case 0x91:       sta(INDY(opd));                       break;
            case 0x95:       sta(ABSX(opd));                       break;
            case 0x98:       tya();                                        break;
            case 0x99:       sta(ABSY(opd));                       break;
            case 0x9a:       txs();                                        break;
            case 0x9d:       sta(ABSX(opd));                       break;

            case 0xa0:       ldy(IMM(opd));                        break;
            case 0xa2:       ldx(IMM(opd));                        break;
            case 0xa4:       ldy(ABS(opd));                        break;
            case 0xa5:       lda(ABS(opd));                        break;
            case 0xa6:       ldx(ABS(opd));                        break;
            case 0xa8:       tay();                                        break;
            case 0xa9:       lda(IMM(opd));                        break;
            case 0xaa:       tax();                                        break;
            case 0xac:       ldy(ABS(opd));                        break;
            case 0xad:       lda(ABS(opd));                        break;
            case 0xae:       ldx(ABS(opd));                        break;

            case 0xb0:       if (c) { pc += int16_t(int8_t(opd)); }        break;
            case 0xb1:       lda(INDY(opd));                       break;
            case 0xb5:       lda(ABSX(opd));                       break;
            case 0xb9:       lda(ABSY(opd));                       break;
            case 0xbc:       ldy(ABSX(opd));                       break;
            case 0xbd:       lda(ABSX(opd));                       break;
            case 0xbe:       ldx(ABSY(opd));                       break;

            case 0xc0:       cpy(IMM(opd));                        break;
            case 0xc5:       cmp(ABS(opd));                        break;
            case 0xc6:       dec(ABS(opd));                        break;
            case 0xc8:       iny();                                        break;
            case 0xc9:       cmp(IMM(opd));                        break;
            case 0xca:       dex();                                         break;
            case 0xcd:       cmp(ABS(opd));                        break;
            case 0xce:       dec(ABS(opd));                         break;

            case 0xd0:       if (!z) { pc += int16_t(int8_t(opd)); }        break;
            case 0xd5:       cmp(ABSX(opd));                        break;
            case 0xd9:       cmp(ABSY(opd));                        break;
            case 0xdd:       cmp(ABSX(opd));                        break;
            case 0xde:       dec(ABSX(opd));                        break;

            case 0xe0:       cpx(IMM(opd));                        break;
            case 0xe6:       inc(ABS(opd));                        break;
            case 0xe8:       inx();                                        break;
            case 0xe9:       sbc(IMM(opd));                        break;
            case 0xec:       cpx(ABS(opd));                        break;
            case 0xed:       sbc(ABS(opd));                        break;
            case 0xee:       inc(ABS(opd));                        break;

            case 0xf0:       if (z) { pc += int16_t(int8_t(opd)); }        break;
            case 0xf5:       sbc(ABSX(opd));                       break;
            case 0xf9:       sbc(ABSY(opd));                       break;
            case 0xfd:       sbc(ABSX(opd));                       break;

            // ignored:
            case 0x78:                // sei
            case 0xd8:                // cld
                break;

            // not handled:
            default:
                printf("!!! pc %04x: opcode %02x opd %04d\n", pc_, opcode, opd);
                fflush(stdout);
                abort();
        }
        return true;
    }
};

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

    // TEST_HACKS();

    // preStart();
    // Start();

    // ramBytes[WorldNumber] = 0;
    // ramBytes[AreaNumber] = 0;
    // LoadAreaPointer();
    // InitializeArea();
    // diag = true;
    // for (int i = 0; i < 1; i++) {
    //     AreaParserCore();
    //     for (int i = 0; i < 13; i++) {
    //         int p = 0x6a1 + i;
    //         printf("%02x ", ramBytes[p]);
    //     }
    //     printf("\n");
    //     IncrementColumnPos();
    // }

    // printf("@@@@@@@@@@@@@@@\n");

    std::ifstream ifile;
    ifile.open("misc/smb1-us.nes", std::ios::binary | std::ios::in);
    ifile.seekg(16, std::ios::beg);
    byte romBytes[32768];
    ifile.read((char*) romBytes, sizeof(romBytes));
    Memory::RAM rom(romBytes);
    m.baseMap.erase(0x8000);
    m.addRegion(Memory::Region {rom, 0x8000, 0x7fff });

    CPU cpu(ppu);
    diag = false;
    cpu.ofile = &std::cout;
    cpu.pc = 0x8000;
    while (cpu.interp()) {}

    ramBytes[WorldNumber] = 0;
    ramBytes[AreaNumber] = 0;

    // //https://6502disassembly.com/nes-smb/SuperMarioBros.html
    // cpu.call(0x9c03);  // LoadAreaPointer
    // while (cpu.interp()) {}
    // cpu.call(0x8fe4);  // InitializeArea
    // while (cpu.interp()) {}
    // for (int i = 0; i < 48; i++) {
    //     cpu.call(0x93fc); //AreaParserCore();
    //     while (cpu.interp()) {}
    //     for (int i = 0; i < 13; i++) {
    //         int p = 0x6a1 + i;
    //         printf("%02x ", ramBytes[p]);
    //     }
    //     printf("\n");
    //     cpu.call(0x92db); // IncrementColumnPos();
    //     while (cpu.interp()) {}
    // }

    // fflush(stdout);
    // return 0;


    window.setSize({256 * 3, 240 * 3});

    int frame = 0;

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

                // NonMaskableInterrupt();

                {
                    // std::ofstream ofile;
                    // char filename[100];
                    // snprintf(filename, sizeof(filename), "traces/%06d", frame);
                    // ofile.open(filename, std::ios::trunc);
                    // cpu.ofile = &ofile;
                    cpu.nmi();
                    while (cpu.interp()) {}
                    // cpu.ofile = nullptr;
                }

                ++frame;
                // if (frame == 90) { return 0; }

            }
        } else {
            std::this_thread::yield();
        }

        // printf("@@@ SCROLL %04x\n", ppu.regs.scroll);
        ppu.draw();
        ppu.window.display();
    }
}
