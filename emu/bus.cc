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

        // https://www.nesdev.org/wiki/Controller_reading
 
        case 0x16: {
            auto ret = (joy0 & 0x01);
            joy0 >>= 1;
            return ret;
        }
 
        case 0x17: {
            auto ret = (joy1 & 0x01);
            joy1 >>= 1;
            return ret;
        }

        default:
            printf("!!! ioregs::get %04x\n", index);
            fflush(stdout);
            abort();
    }
}

void IORegs::set(word index, byte value) {
    switch (index) {

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
            auto prevStrobe = strobe;
            strobe = value;
            if ((prevStrobe & 0x1) && !(strobe & 0x01)) {
                // TODO
                joy0 = 0x00;
                joy1 = 0x00;
            }
            break;
        }

        default:
            fflush(stderr);
            fflush(stdout);
            printf("\n\nbad io write: %04d <- %02x\n\n", index, value);
            fflush(stderr);
            fflush(stdout);
            abort();
    }
}
