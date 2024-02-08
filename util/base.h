#pragma once
#include <map>
#include <memory>
#include <cstdio>

using byte = unsigned char;
using word = unsigned short;

using JUMP_ENTRY = int(*)();

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

struct Imm : R8 {
    byte const val;
    Imm(byte val) : val(val) {}
    virtual ~Imm() override = default;
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

extern Reg a, x, y, s;
extern bool n, z, c;

struct Memory {
    struct Bytes {
        virtual ~Bytes() = default;
        virtual byte get(word index) const = 0;
        virtual void set(word index, byte value) = 0;
    };

    struct ROM : Bytes {
        virtual ~ROM() = default;
        ROM(byte const* bytes) : bytes_(bytes) {}
        virtual void set(word, byte) override { abort(); }
        virtual byte get(word index) const override { return bytes_[index]; }
    private:
        byte const* bytes_;
    };

    struct RAM : Bytes {
        virtual ~RAM() = default;
        RAM(byte* bytes) : bytes_(bytes) {}
        virtual void set(word index, byte value) override { bytes_[index] = value; }
        virtual byte get(word index) const override { return bytes_[index]; }
    private:
        byte* bytes_;
    };

    struct Region {
        std::shared_ptr<Bytes> bytes;
        word base;
        word mask;
        byte get(word index) const { return bytes->get((index - base) & mask); }
        void set(word index, byte val) { bytes->set((index - base) & mask, val); }
    };

    struct Bus {
        std::map<word, Region> baseMap;
        void* addRegion(Region reg);
        Region& getRegion(word index) { return baseMap.lower_bound(index)->second; }
        byte get(word index) {
            fprintf(stderr, "get [%04x]\n", index);
            return getRegion(index).get(index);
        }
        void set(word index, byte val) {
            fprintf(stderr, "set [%04x] <- %02x\n", index, val);
            getRegion(index).set(index, val);
        }
    };
};

extern Memory::Bus m;

inline void nop() {}
inline void sei() {}
inline void cld() {}

inline void clc() { c = 0; }
inline void sec() { c = 1; }

inline void lda(Imm imm) { a = byte(imm); }
inline void lda(short addr) { a = m.get(addr); }
inline void lda(short addr, Reg r) { a = m.get(addr + r); }
inline void sta(short addr) { m.set(addr, a); }
inline void sta(short addr, Reg r) { m.set(addr + r, a); }

inline void ldx(Imm imm) { x = byte(imm); }
inline void ldx(short addr) { x = m.get(addr); }
inline void ldx(short addr, Reg r) { x = m.get(addr + r); }
inline void stx(short addr) { m.set(addr, x); }
inline void stx(short addr, Reg r) { m.set(addr + r, x); }
inline void inx() { x = x + 1; }
inline void dex() { x = x - 1; }

inline void ldy(Imm imm) { y = byte(imm); }
inline void ldy(short addr) { y = m.get(addr); }
inline void ldy(short addr, Reg r) { y = m.get(addr + r); }
inline void sty(short addr) { m.set(addr, y); }
inline void sty(short addr, Reg r) { m.set(addr + r, y); }
inline void iny() { y = y + 1; }
inline void dey() { y = y - 1; }

inline void txs() { s = x; }
inline void tys() { s = y; }
inline void txa() { a = x; }
inline void tya() { a = y; }
inline void tax() { x = a; }
inline void tay() { y = a; }

inline void inc(short addr) { m.set(addr, m.get(addr) + 1); }
inline void inc(short addr, Reg r) { m.set(addr + r, m.get(addr + r) + 1); }
inline void dec(short addr) { m.set(addr, m.get(addr) - 1); }
inline void dec(short addr, Reg r) { m.set(addr + r, m.get(addr + r) - 1); }

inline void ora(Imm imm) { a = imm | a; }
inline void ora(short addr) { a = m.get(addr) | a; }
inline void ora(short addr, Reg r) { a = m.get(addr + r) | a; }

inline void anda(Imm imm) { a = imm & a; }
inline void anda(short addr) { a = m.get(addr) & a; }
inline void anda(short addr, Reg r) { a = m.get(addr + r) & a; }

inline void eor(Imm imm) { a = imm ^ a; }

inline void lsr() { a = byte(a) >> 1; }
inline void lsr(short addr) { m.set(addr, m.get(addr) >> 1); }
inline void lsr(short addr, Reg r) { m.set(addr + r, m.get(addr + r) >> 1); }
inline void asl() { a = byte(a) << 1; }
inline void asl(short addr) { m.set(addr, m.get(addr) << 1); }
inline void asl(short addr, Reg r) { m.set(addr + r, m.get(addr + r) << 1); }

inline byte ror8(byte z) { return (z << 7) | (z >> 1); }
inline void ror() { a = ror8(byte(a)); }
inline void ror(short addr) { m.set(addr, ror8(m.get(addr))); }
inline void ror(short addr, Reg r) { m.set(addr + r, ror8(m.get(addr + r))); }

inline byte rol8(byte z) { return (z >> 1) | (z >> 7); }
inline void rol() { a = rol8(byte(a)); }
inline void rol(short addr) { m.set(addr, rol8(m.get(addr))); }

inline void sub(Reg& dest, Reg& src, R8 const& arg) {
    dest = byte(src) - byte(arg);
}

inline void add(Imm imm) { a = a + imm; }
inline void adc(Imm imm) { a = a + imm + byte(c); }
inline void adc(short addr) { a = a + m.get(addr) + byte(c); }
inline void adc(short addr, Reg r) { a = a + m.get(addr + r) + byte(c); }

inline void sub(Imm imm) { sub(a, a, imm); }

inline void sbc(Imm imm) { sub(a, a, Imm(imm + byte(c))); }
inline void sbc(short addr) { a = a - m.get(addr) - byte(c); }
inline void sbc(short addr, Reg r) { a = a - m.get(addr + r) - byte(c); }

inline void cmp(Imm imm) { Reg foo; sub(foo, a, imm); }
inline void cmp(short addr) { Reg foo; sub(foo, a, Imm(m.get(addr))); }
inline void cmp(short addr, Reg r) { Reg foo; sub(foo, a, Imm(m.get(addr + r))); }

inline void cpx(Imm imm) { Reg foo; sub(foo, x, imm); }

inline void cpy(Imm imm) { Reg foo; sub(foo, y, imm); }
inline void cpy(short addr) { Reg foo; sub(foo, y, Imm(m.get(addr))); }
inline void cpy(short addr, Reg r) { Reg foo; sub(foo, y, Imm(m.get(addr + r))); }

inline void pha() { s = s - 1; m.set(s, a); }
inline void pla() { a = m.get(s); s = s + 1; }
inline void phx() { s = s - 1; m.set(s, x); }
inline void plx() { x = m.get(s); s = s + 1; }
inline void phy() { s = s - 1; m.set(s, y); }
inline void ply() { y = m.get(s); s = s + 1; }

inline void bit(Imm) { }
inline void bit(long) { }
inline void bit(long, Reg) { }
