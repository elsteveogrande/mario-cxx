#include "bus.h"
#include "ppu.h"
#include <memory>

Memory::Bus m;

void* Memory::Bus::addRegion(Memory::Region const& reg) {
    baseMap.emplace(reg.base, reg);
    return nullptr;
}

IORegs::IORegs(PPU& ppu) : ppu(ppu) {}

byte IORegs::get(word index) {
    switch (index) {
        case 0x00:
            abort();
        case 0x01:
            abort();
        case 0x02:
            abort();
        case 0x03:
            abort();
        case 0x04:
            abort();
        case 0x05:
            abort();
        case 0x06:
            abort();
        case 0x07:
            abort();
        case 0x08:
            abort();
        case 0x09:
            abort();
        case 0x0a:
            abort();
        case 0x0b:
            abort();
        case 0x0c:
            abort();
        case 0x0d:
            abort();
        case 0x0e:
            abort();
        case 0x0f:
            abort();
        case 0x10:
            abort();
        case 0x11:
            abort();
        case 0x12:
            abort();
        case 0x13:
            abort();
        case 0x14:
            abort();
        case 0x15:
            abort();

        // https://www.nesdev.org/wiki/Controller_reading
        case 0x16: {
            // TODO
            return 0;
        }
        case 0x17: {
            // TODO
            return 0;
        }

        case 0x18:
            abort();
        case 0x19:
            abort();
        case 0x1a:
            abort();
        case 0x1b:
            abort();
        case 0x1c:
            abort();
        case 0x1d:
            abort();
        case 0x1e:
            abort();
        case 0x1f:
            abort();
        default:
            abort();
    }
}

void IORegs::set(word index, byte value) {
    switch (index) {
        case 0x00:
            abort();
        case 0x01:
            abort();
        case 0x02:
            abort();
        case 0x03:
            abort();
        case 0x04:
            abort();
        case 0x05:
            abort();
        case 0x06:
            abort();
        case 0x07:
            abort();
        case 0x08:
            abort();
        case 0x09:
            abort();
        case 0x0a:
            abort();
        case 0x0b:
            abort();
        case 0x0c:
            abort();
        case 0x0d:
            abort();
        case 0x0e:
            abort();
        case 0x0f:
            abort();

        // https://www.nesdev.org/wiki/APU#DMC_($4010%E2%80%93$4013)
        case 0x10:
            break;  // TODO
        case 0x11:
            break;  // TODO
        case 0x12:
            break;  // TODO
        case 0x13:
            break;  // TODO

        // https://www.nesdev.org/wiki/PPU_registers#OAM_DMA_($4014)_%3E_write
        case 0x14: {
            assert (ppu.regs.oamAddr == 0);
            word sd = word(value) << 8;
            for (int i = 0; i < 64; i++) {
                ppu.sprites[i].y = m.get(sd++);
                ppu.sprites[i].index = m.get(sd++);
                ppu.sprites[i].attrs = m.get(sd++);
                ppu.sprites[i].x = m.get(sd++);
            }
            return;
        }

        // https://www.nesdev.org/wiki/APU#Status_($4015)
        case 0x15:
            break;  // TODO

        //https://www.nesdev.org/wiki/Controller_reading
        case 0x16: {
            // TODO
            break;
        }

        case 0x17:
            abort();    // not writable

        case 0x18:
            abort();
        case 0x19:
            abort();
        case 0x1a:
            abort();
        case 0x1b:
            abort();
        case 0x1c:
            abort();
        case 0x1d:
            abort();
        case 0x1e:
            abort();
        case 0x1f:
            abort();
    }
}
