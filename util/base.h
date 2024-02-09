#pragma once
#include <map>
#include <memory>
#include <cstdio>

using byte = unsigned char;
using word = unsigned short;

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
    explicit Imm(byte val) : val(val) {}
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

inline byte nz(word result) {
    result &= 0xff;
    n = !!(result >> 7);
    z = !!result;
    return byte(result & 0xff);
}

inline byte nzc(word result) {
    c = !!(result >> 8);
    return nz(result);
}

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
    Reg const& reg_;
    Abs(word abs, Reg const& reg) : abs_(abs), reg_(reg) {}
    explicit Abs(word abs) : Abs(abs, dummy) {}
    virtual int addr() const { return abs_; }
};

struct IndY : Abs {
    explicit IndY(word abs) : Abs(abs) {}
    virtual int addr() const override {
        byte ret;
        ret = int(m.get(abs_));
        ret |= int(m.get(abs_ + 1)) << 8;
        ret = m.get(ret);
        return ret + y.read();
    }
};

// https://www.masswerk.at/6502/6502_instruction_set.html

inline void nop() {}
inline void sei() { /* IGNORED */ }
inline void cld() { /* IGNORED */}
inline void clc() { c = 0; }
inline void sec() { c = 1; }

void ld(Mode& d, Mode const& s);
void ld(Mode& d, byte v);
void st(Mode& d, Mode const& s);
void inc(Mode& d, Mode const& s);
void dec(Mode& d, Mode const& s);
void add(Mode& d, Mode const& s1, Mode const& s2, bool c);
void sub(Mode& d, Mode const& s1, Mode const& s2, bool c);
void sub(Mode& d, Mode const& s, bool c);
void cmp(Reg& s1, Mode const& s2);
void and_(Mode& d, Mode const& s1, Mode const& s2);
void ora(Mode& d, Mode const& s1, Mode const& s2);
void eor(Mode& d, Mode const& s1, Mode const& s2);
void push(Reg const& r);
void pull(Reg& r);
void bit(Mode const& s);
void lsr(Mode& d, Mode const& s);
void asl(Mode& d, Mode const& s);
void rol(Mode& d, Mode const& s);
void ror(Mode& d, Mode const& s);

inline void inc()      { inc(a, a); }
inline void inc(Abs s) { inc(s, s); }
inline void inx()      { inc(x, x); }
inline void iny()      { inc(y, y); }

inline void dec()      { dec(a, a); }
inline void dec(Abs s) { dec(s, s); }
inline void dex()      { dec(x, x); }
inline void dey()      { dec(y, y); }

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

inline void lda(Mode const& s) { ld(a, s); }
inline void ldx(Mode const& s) { ld(x, s); }
inline void ldy(Mode const& s) { ld(y, s); }

inline void sta(Mode const& s) { ld(a, s); }
inline void stx(Mode const& s) { ld(x, s); }
inline void sty(Mode const& s) { ld(y, s); }

inline void cmp(Mode const& s) { cmp(a, s); }
inline void cpx(Mode const& s) { cmp(x, s); }
inline void cpy(Mode const& s) { cmp(y, s); }

inline void anda(Mode const& s) { and_(a, a, s); }
inline void ora(Mode const& s)  { ora(a, a, s); }
inline void eor(Mode const& s)  { eor(a, a, s); }

inline void lsr()       { lsr(a, a); }
inline void asl()       { asl(a, a); }
inline void rol()       { rol(a, a); }
inline void ror()       { ror(a, a); }
inline void lsr(Mode const& s) { lsr(const_cast<Mode&>(s), s); }
inline void asl(Mode const& s) { asl(const_cast<Mode&>(s), s); }
inline void rol(Mode const& s) { rol(const_cast<Mode&>(s), s); }
inline void ror(Mode const& s) { ror(const_cast<Mode&>(s), s); }

inline void adc(Mode const& s) { add(a, a, s, c); }
inline void sbc(Mode const& s) { add(a, a, s, c); }
