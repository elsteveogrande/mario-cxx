#include "base.h"
#include <memory>

Reg::operator byte const& () const {
    return val;
}

Reg& Reg::operator=(R8 const& r8) {
    val = byte(r8);
    return *this;
}

Memory::Bus m;

void* Memory::Bus::addRegion(Memory::Region reg) {
    baseMap[reg.base] = reg;
    return nullptr;
}

Reg a, x, y, s;
bool n, z, c;

int main() {
    byte ramBytes[0x0800];
    m.addRegion(Memory::Region { std::make_shared<Memory::RAM>(ramBytes), 0x0000, 0x07ff });
    Start();
    return c;
}
