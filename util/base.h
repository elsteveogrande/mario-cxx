#pragma once

using byte = unsigned char;
using word = unsigned short;

int Start();
int NonMaskableInterrupt();

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

struct R8 {
    virtual ~R8() = default;
    virtual operator byte const& () const = 0;
};

struct I8 : R8 {
    byte const val;
    I8(byte val) : val(val) {}
    virtual ~I8() override = default;
    virtual operator byte const& () const override {
        return val;
    }
};

struct W8 {
    virtual W8& operator=(R8 const& r) = 0;
    virtual ~W8() = default;
};

struct Reg : R8, W8 {
    byte val;
    Reg() : val(0) {}
    Reg(byte val) : val(val) {}
    virtual ~Reg() override = default;
    virtual operator byte const& () const override;
    virtual Reg& operator=(R8 const& r) override;
};

extern byte m[0x10000];
extern Reg a, x, y, s;
extern bool n, z, c;

inline void nop() {}
inline void sei() {}
inline void cld() {}

inline void clc() { c = 0; }
inline void sec() { c = 1; }

inline void lda(I8 imm) { a = byte(imm); }
inline void lda(short addr) { a = m[addr]; }
inline void lda(short addr, Reg r) { a = m[addr + r]; }
inline void sta(short addr) { m[addr] = a; }
inline void sta(short addr, Reg r) { m[addr + r] = a; }

inline void ldx(I8 imm) { x = byte(imm); }
inline void ldx(short addr) { x = m[addr]; }
inline void ldx(short addr, Reg r) { x = m[addr + r]; }
inline void stx(short addr) { m[addr] = x; }
inline void stx(short addr, Reg r) { m[addr + r] = x; }
inline void inx() { x = x + 1; }
inline void dex() { x = x - 1; }

inline void ldy(I8 imm) { y = byte(imm); }
inline void ldy(short addr) { y = m[addr]; }
inline void ldy(short addr, Reg r) { y = m[addr + r]; }
inline void sty(short addr) { m[addr] = y; }
inline void sty(short addr, Reg r) { m[addr + r] = y; }
inline void iny() { y = y + 1; }
inline void dey() { y = y - 1; }

inline void txs() { s = x; }
inline void tys() { s = y; }
inline void txa() { a = x; }
inline void tya() { a = y; }
inline void tax() { x = a; }
inline void tay() { y = a; }

inline void inc(short addr) { m[addr] = m[addr] + 1; }
inline void inc(short addr, Reg r) { m[addr + r] = m[addr + r] + 1; }
inline void dec(short addr) { m[addr] = m[addr] - 1; }
inline void dec(short addr, Reg r) { m[addr + r] = m[addr + r] - 1; }

inline void ora(I8 imm) { a = imm | a; }
inline void ora(short addr) { a = m[addr] | a; }
inline void ora(short addr, Reg r) { a = m[addr + r] | a; }

inline void anda(I8 imm) { a = imm & a; }
inline void anda(short addr) { a = m[addr] & a; }
inline void anda(short addr, Reg r) { a = m[addr + r] & a; }

inline void eor(I8 imm) { a = imm ^ a; }

inline void lsr() { a = byte(a) >> 1; }
inline void lsr(short addr) { m[addr] = m[addr] >> 1; }
inline void lsr(short addr, Reg r) { m[addr + r] = m[addr + r] >> 1; }
inline void asl() { a = byte(a) << 1; }
inline void asl(short addr) { m[addr] = m[addr] << 1; }
inline void asl(short addr, Reg r) { m[addr + r] = m[addr + r] << 1; }

inline byte ror8(byte z) { return (z << 7) | (z >> 1); }
inline void ror() { a = ror8(byte(a)); }
inline void ror(short addr) { m[addr] = ror8(m[addr]); }
inline void ror(short addr, Reg r) { m[addr + r] = ror8(m[addr + r]); }

inline byte rol8(byte z) { return (z >> 1) | (z >> 7); }
inline void rol() { a = rol8(byte(a)); }
inline void rol(short addr) { m[addr] = rol8(m[addr]); }

inline void sub(Reg& dest, Reg& src, R8 const& arg) {
    dest = byte(src) - byte(arg);
}

inline void add(I8 imm) { a = a + imm; }
inline void adc(I8 imm) { a = a + imm + byte(c); }
inline void adc(short addr) { a = a + m[addr] + byte(c); }
inline void adc(short addr, Reg r) { a = a + m[addr + r] + byte(c); }

inline void sub(I8 imm) { sub(a, a, imm); }

inline void sbc(I8 imm) { sub(a, a, I8(imm + byte(c))); }
inline void sbc(short addr) { a = a - m[addr] - byte(c); }
inline void sbc(short addr, Reg r) { a = a - m[addr + r] - byte(c); }

inline void cmp(I8 imm) { Reg foo; sub(foo, a, imm); }
inline void cmp(short addr) { Reg foo; sub(foo, a, I8(m[addr])); }
inline void cmp(short addr, Reg r) { Reg foo; sub(foo, a, I8(m[addr + r])); }

inline void cpx(I8 imm) { Reg foo; sub(foo, x, imm); }

inline void cpy(I8 imm) { Reg foo; sub(foo, y, imm); }
inline void cpy(short addr) { Reg foo; sub(foo, y, I8(m[addr])); }
inline void cpy(short addr, Reg r) { Reg foo; sub(foo, y, I8(m[addr + r])); }

inline void pha() { s = s - 1; m[s] = a; }
inline void pla() { a = m[s]; s = s + 1; }
inline void phx() { s = s - 1; m[s] = x; }
inline void plx() { x = m[s]; s = s + 1; }
inline void phy() { s = s - 1; m[s] = y; }
inline void ply() { y = m[s]; s = s + 1; }

inline void bit(I8 imm8) { }
inline void bit(long addr) { }
inline void bit(long addr, Reg r) { }

