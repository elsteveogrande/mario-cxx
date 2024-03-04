#pragma once

#include "../emu/bus.h"
#include <cstdio>

using byte = unsigned char;
using word = unsigned short;

extern bool diag;

void _debug(char const* func, char const* filename, int line);

// defined in main.cc
// (stub code to hook the "rom" data to the memory bus)
void preStart();

using JUMP_ENTRY = void(*)();

void Start();
void NonMaskableInterrupt();

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

struct Reg : Mode {
    byte val {0};
    virtual void write(byte v) { val = v; };
    virtual byte read() const { return val; };
    void operator++() { write(read() + 1); }
    void operator++(int) { write(read() + 1); }
    void operator--() { write(read() - 1); }
    void operator--(int) { write(read() - 1); }
};

struct A : virtual Reg {};
struct X : virtual Reg {};
struct Y : virtual Reg {};
struct S : virtual Reg {};

// dummy operations
struct D : virtual Reg {
    virtual void write(byte) {};
    virtual byte read() const { return 0; };
};
extern D dummy;

extern A a;
extern X x;
extern Y y;
extern S s;
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

void ld(Mode& d, Mode& s);
void ld(Mode& d, byte v);
void st(Mode& d, Mode& s);
void inc(Mode& d, Mode& s);
void dec(Mode& d, Mode& s);
void adc(Mode& d, Mode& s1, Mode& s2, bool c);
void sbc(Mode& d, Mode& s1, Mode& s2, bool c);
void sub(Mode& d, Mode& s, bool c);
void cmp(Reg& s1, Mode& s2);
void and_(Mode& d, Mode& s1, Mode& s2);
void ora(Mode& d, Mode& s1, Mode& s2);
void eor(Mode& d, Mode& s1, Mode& s2);
void push(Reg& r);
void pull(Reg& r);
void bit(Mode& s);
void lsr(Mode& d, Mode& s);
void asl(Mode& d, Mode& s);
void rol(Mode& d, Mode& s);
void ror(Mode& d, Mode& s);

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

inline void lda(Mode& s) { ld(a, s); }
inline void ldx(Mode& s) { ld(x, s); }
inline void ldy(Mode& s) { ld(y, s); }

inline void sta(Mode& s) { st(s, a); }
inline void stx(Mode& s) { st(s, x); }
inline void sty(Mode& s) { st(s, y); }

inline void cmp(Mode& s) { cmp(a, s); }
inline void cpx(Mode& s) { cmp(x, s); }
inline void cpy(Mode& s) { cmp(y, s); }

inline void anda(Mode& s) { and_(a, a, s); }
inline void ora(Mode& s)  { ora(a, a, s); }
inline void eor(Mode& s)  { eor(a, a, s); }

inline void lsr()       { lsr(a, a); }
inline void asl()       { asl(a, a); }
inline void rol()       { rol(a, a); }
inline void ror()       { ror(a, a); }
inline void lsr(Mode& s) { lsr(s, s); }
inline void asl(Mode& s) { asl(s, s); }
inline void rol(Mode& s) { rol(s, s); }
inline void ror(Mode& s) { ror(s, s); }

inline void adc(Mode& s) { adc(a, a, s, c); }
inline void sbc(Mode& s) { sbc(a, a, s, c); }
