#include "base.h"

Reg::operator byte const& () const {
    return val;
}

Reg& Reg::operator=(R8 const& r8) {
    val = byte(r8);
    return *this;
}

byte m[0x10000];
Reg a, x, y, s;
bool n, z, c;

int main() {
    Start();
    return c;
}
