#pragma once

#include "base.h"

#include "bus.h"
#include "debug.h"

#include <cstdio>

using JUMP_ENTRY = void(*)();

constexpr byte LO8(word const v) { return (v) & 0xff; }
constexpr byte HI8(word const v) { return (v >> 8) & 0xff; }

#define JMP(name)    return name();
#define BRA(name)    return name();
#define BMI(name)    if (n) { return name(); }
#define BCS(name)    if (c) { return name(); }
#define BEQ(name)    if (z) { return name(); }
#define BPL(name)    if (!n) { return name(); }
#define BCC(name)    if (!c) { return name(); }
#define BNE(name)    if (!z) { return name(); }

#define JSR(name)    name();
#define RTS(name)    return;
#define RTI(name)    return;

struct Mode {
    virtual void write(byte v) = 0;
    virtual byte read() const = 0;
};

struct Imm : Mode {
    byte val;
    /*implicit*/ Imm(byte val) : val(val) {}
    virtual byte read() const { return val; };
    virtual void write(byte) { abort(); }
};

struct Reg final : Mode {
    byte val {0};
    virtual void write(byte v) { val = v; };
    virtual byte read() const { return val; };
    void operator++()     { write(read() + 1); }
    void operator++(int)  { write(read() + 1); }
    void operator--()     { write(read() - 1); }
    void operator--(int)  { write(read() - 1); }
};

extern Reg a;
extern Reg x;
extern Reg y;
extern Reg s;
extern bool n, z, c;

inline byte nz(byte result) {
    n = (result & 0x80);
    z = (result == 0);
    return result;
}

inline byte nzc(word result) {
    c = (result >> 8);
    return nz(result);
}

// TODO: all needed insns
// TODO: embed modes in Insn.render
// TODO: hooks for hw regs

// Implementation of 6502 instructions.
// Not 100% correct.  Some are defined, but are no-ops.
// Others (like zero-page, indirect address modes) are incorrect.
// However these is good enough for mario++.

struct Mem : Mode {
    virtual int addr() const = 0;
    virtual void write(byte v) override { m.set(addr(), v);     }
    virtual byte read()  const override { return m.get(addr()); }
};

struct Abs : Mem {
    word const abs_;
    constexpr explicit Abs(word abs) : abs_(abs) {}
    virtual int addr() const { return abs_; }
};

struct AbsX : Mem {
    word const abs_;
    constexpr explicit AbsX(word abs) : abs_(abs) {}
    virtual int addr() const { return abs_ + x.read(); }
};

struct AbsY : Mem {
    word const abs_;
    constexpr explicit AbsY(word abs) : abs_(abs) {}
    virtual int addr() const { return abs_ + y.read(); }
};

struct Zpg : Mem {
    byte const abs_;
    constexpr explicit Zpg(byte abs) : abs_(abs) {}
    virtual int addr() const { return abs_; }
};

struct ZpgX : Mem {
    byte const abs_;
    constexpr explicit ZpgX(byte abs) : abs_(abs) {}
    virtual int addr() const { return byte(abs_ + x.read()); }
};

struct ZpgY : Mem {
    byte const abs_;
    constexpr explicit ZpgY(byte abs) : abs_(abs) {}
    virtual int addr() const { return byte(abs_ + y.read()); }
};

struct IndY : Abs {
    explicit IndY(word abs) : Abs(abs) {}
    virtual int addr() const override {
        if (diag) {
            fflush(stdout);
        }
        word tmp = 0xff & m.get(abs_);
        tmp |= word(m.get(abs_ + 1)) << 8;
        tmp += y.read();
        return tmp;
    }
};

// https://www.masswerk.at/6502/6502_instruction_set.html

inline void nop() {}
inline void sei() { /* IGNORED */ }
inline void cld() { /* IGNORED */}
inline void clc() { c = 0; }
inline void sec() { c = 1; }

void ld(Mode& dm, Mode& sm);
void ld(Mode& dm, byte v);
void st(Mode& dm, Mode& sm);
void inc(Mode& dm, Mode& sm);
void dec(Mode& dm, Mode& sm);
void adc(Mode& dm, Mode& s1, Mode& s2, bool c);
void sbc(Mode& dm, Mode& s1, Mode& s2, bool c);
void sub(Mode& dm, Mode& sm, bool c);
void cmp(Reg& s1, Mode& s2);
void and_(Mode& dm, Mode& s1, Mode& s2);
void ora(Mode& dm, Mode& s1, Mode& s2);
void eor(Mode& dm, Mode& s1, Mode& s2);
void push(Reg& r);
void pull(Reg& r);
void bit(Mode& sm);
void lsr(Mode& dm, Mode& sm);
void asl(Mode& dm, Mode& sm);
void rol(Mode& dm, Mode& sm);
void ror(Mode& dm, Mode& sm);

inline void inc(Mode& s) { inc(s, s); }
inline void inc()        { inc(a); }
inline void inx()        { inc(x); }
inline void iny()        { inc(y); }

inline void dec(Mode& s) { dec(s, s); }
inline void dec()        { dec(a); }
inline void dex()        { dec(x); }
inline void dey()        { dec(y); }

inline void tax() { ld(x, a); }
inline void tay() { ld(y, a); }
inline void tsx() { ld(x, s); }
inline void txa() { ld(a, x); }
inline void txs() { ld(s, x); }
inline void tya() { ld(a, y); }

inline void pha() { push(a); }
inline void phx() { push(x); }
inline void phy() { push(y); }
inline void pla() { pull(a); }
inline void plx() { pull(x); }
inline void ply() { pull(y); }

extern Imm imm_;
extern Abs abs_;
extern AbsX absX_;
extern AbsY absY_;
extern Zpg zpg_;
extern ZpgX zpgX_;
extern ZpgY zpgY_;
extern IndY indY_;

#define IMM(v)       (*(new (&imm_) Imm(v)))
#define ABS(v)       (*(new (&abs_) Abs(v)))
#define ABSX(v)      (*(new (&absX_) AbsX(v)))
#define ABSY(v)      (*(new (&absY_) AbsY(v)))
#define ZPG(v)       (*(new (&zpg_) Zpg(v)))
#define ZPGX(v)      (*(new (&zpgX_) ZpgX(v)))
#define ZPGY(v)      (*(new (&zpgY_) ZpgY(v)))
#define INDY(v)      (*(new (&indY_) IndY(v)))

inline void lda(Mode& sm) { ld(a, sm); }
inline void ldx(Mode& sm) { ld(x, sm); }
inline void ldy(Mode& sm) { ld(y, sm); }

inline void sta(Mode& sm) { st(sm, a); }
inline void stx(Mode& sm) { st(sm, x); }
inline void sty(Mode& sm) { st(sm, y); }

inline void cmp(Mode& sm) { cmp(a, sm); }
inline void cpx(Mode& sm) { cmp(x, sm); }
inline void cpy(Mode& sm) { cmp(y, sm); }

inline void anda(Mode& sm) { and_(a, a, sm); }
inline void ora(Mode& sm)  { ora(a, a, sm); }
inline void eor(Mode& sm)  { eor(a, a, sm); }

inline void lsr()       { lsr(a, a); }
inline void asl()       { asl(a, a); }
inline void rol()       { rol(a, a); }
inline void ror()       { ror(a, a); }
inline void lsr(Mode& sm) { lsr(sm, sm); }
inline void asl(Mode& sm) { asl(sm, sm); }
inline void rol(Mode& sm) { rol(sm, sm); }
inline void ror(Mode& sm) { ror(sm, sm); }

inline void adc(Mode& sm) { adc(a, a, sm, c); }
inline void sbc(Mode& sm) { sbc(a, a, sm, c); }
