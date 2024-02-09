#include "base.h"
#include <memory>

#include "backward.hpp"

Memory::Bus m;

void* Memory::Bus::addRegion(Memory::Region reg) {
    baseMap[reg.base] = reg;
    return nullptr;
}

void ld(Mode& d, Mode const& s) {
    d.write(nz(s.read()));
}

void ld(Mode& d, byte v) {
    Imm s(v);
    ld(d, s);
}

void st(Mode& d, Mode const& s) {
    d.write(s.read());
}

void inc(Mode& d, Mode const& s) {
    ld(d, s.read() + 1);
}

void dec(Mode& d, Mode const& s) {
    ld(d, s.read() - 1);
}

void add(Mode& d, Mode const& s1, Mode const& s2, bool c) {
    word tmp = word(s1.read()) + word(s2.read()) + word(c);
    d.write(nzc(tmp));
}

void sub(Mode& d, Mode const& s1, Mode const& s2, bool c) {
    word tmp = word(s1.read()) - word(s2.read()) - word(c);
    d.write(nzc(tmp));
}

void sub(Mode& d, Mode const& s, bool c) {
    sub(d, s, s, c);
}

void cmp(Reg& s1, Mode const& s2) {
    sub(dummy, s1, s2, 0);
}

void and_(Mode& d, Mode const& s1, Mode const& s2) {
    d.write(nz(s1.read() & s2.read()));
}

void ora(Mode& d, Mode const& s1, Mode const& s2) {
    d.write(nz(s1.read() | s2.read()));
}

void eor(Mode& d, Mode const& s1, Mode const& s2) {
    d.write(nz(s1.read() ^ s2.read()));
}

void push(Reg const& r) {
    --s;
    Abs sp(0x100 + s.read());
    st(sp, r);
}

void pull(Reg& r) {
    Abs sp(0x100 + s.read());
    ld(r, sp);
    ++s;
}

void lsr(Mode& d, Mode const& s) {
    word tmp = s.read();
    c = (tmp & 1);
    d.write(nz(tmp >> 1));
}

void asl(Mode& d, Mode const& s) {
    word tmp = s.read();
    tmp <<= 1;
    d.write(nzc(tmp));
}

void rol(Mode& d, Mode const& s) {
    word tmp = s.read();
    tmp <<= 1;
    tmp |= c;
    d.write(nzc(tmp));
}

void ror(Mode& d, Mode const& s) {
    word tmp = (c ? 0x0100 : 0x0000);
    tmp |= s.read();
    c = (tmp & 1);
    d.write(nz(tmp >> 1));
}

void bit(Mode const& s) {
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
    m.addRegion(
        Memory::Region {
            std::make_shared<Memory::RAM>(ramBytes), 0x0000, 0x07ff });

    preStart();
    Start();

    return c;
}
