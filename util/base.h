#pragma once

using byte = unsigned char;
using word = unsigned short;

struct Src;

struct Dest {
};

struct Src {
    virtual constexpr operator byte const () const = 0;
};

struct Imm : Src {
    word val;
    constexpr Imm(word val) : val(val) {}

    virtual constexpr operator byte const () const override { return val; }
};

struct Addr : Dest, Src {
};

extern byte m[];

struct Ref : Addr {
    int const offset;
    Ref(int offset) : offset(offset) {}
    virtual constexpr operator byte const () const { return m[offset]; }
};

struct Label : Dest, Src {
};

struct Reg : Dest, Src {
    byte val {0};
    virtual constexpr operator byte const () const { return val; }
};


// Defined in base.cc
extern Reg a, x, y, s;
extern bool n, z, c;

// [pseudo-]Instructions

#define DATA8(name) \
byte name[]

#define DATA16(name) \
word name[]

byte LO8(word const v) { return (v) & 0xff; }
byte HI8(word const v) { return (v >> 8) & 0xff; }

byte LO8(byte const* name) { return LO8((word) (((size_t) name) - (size_t)(&data))); }
byte HI8(word const* name) { return HI8((word) (((size_t) name) - (size_t)(&data))); }


#define JMP(name)    return name();
#define BRA(name)    return name();
#define JSR(name)    name();
#define BMI(name)    if (n) { return name(); }
#define BCS(name)    if (c) { return name(); }
#define BEQ(name)    if (z) { return name(); }
#define BPL(name)    if (!n) { return name(); }
#define BCC(name)    if (!c) { return name(); }
#define BNE(name)    if (!z) { return name(); }

void assignReg(Reg& r, Src const& k) {
    r.val = (byte) k;
    n = !!(r & 0x80);
    z = !!r;
}

void sei() {}
void cld() {}

void lda(Src const& k) { assignReg(a, k); }
void lda(Src const& k, Reg r) { assignReg(a, Ref(k + r)); }

void ldx(Src const& k) { assignReg(x, k); }
void ldx(Imm const& k) { assignReg(x, Ref(k)); }

void ldy(Src const& k) { assignReg(y, k); }
void ldy(Imm const& k) { assignReg(y, Ref(k)); }

void sta(Imm d) { m[d] = a; }

void txa() { assignReg(a, x); }
void txs() { assignReg(a, s); }

int Start();
int NonMaskableInterrupt();

