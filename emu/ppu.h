#pragma once

#include "../util/base.h"

struct PPURegs : Memory::Bytes {
    // https://www.nesdev.org/wiki/PPU_registers

    // PPUCTRL: VPHB SINN
    // NMI enable (V), PPU master/slave (P), sprite height (H), background tile select (B),
    // sprite tile select (S), increment mode (I), nametable select (NN)
    byte ctrl    {0};

    byte mask    {0};

    // PPUSTATUS: VSO- ----
    // vblank (V), sprite 0 hit (S), sprite overflow (O);
    // read resets write pair for $2005/$2006
    byte status  {0};

    byte oamAddr {0};

    byte oamData {0};

    bool gotFirstScrollByte {false};
    byte scroll  {0};

    bool gotFirstPPUAddrByte {false};
    byte ppuAddr {0};

    byte ppuData {0};

    PPURegs() : ctrl(0), mask(0), status(0), oamAddr(0), oamData(0),
                gotFirstScrollByte(false), scroll(0), gotFirstPPUAddrByte(false), ppuAddr(0), ppuData(0) {}

    virtual byte get(word index) {
        byte ret;
        switch (index) {
            case 0:
                abort();
            case 1:
                abort();
            case 2:
                ret = status;
                status &= 0x7f;  // clear vblank flag after read
                gotFirstScrollByte = false;
                gotFirstPPUAddrByte = false;
                return ret;
            case 3:
                abort();
            case 4:
                abort();
            case 5:
                abort();
            case 6:
                abort();
            case 7:
                abort();
            default:
                abort();
        }
    }

    virtual void set(word index, byte value) {
        switch (index) {
            case 0:
                ctrl = value;
                break;
            case 1:
                abort();
            case 2:
                abort();
            case 3:
                abort();
            case 4:
                abort();
            case 5:
                abort();
            case 6:
                abort();
            case 7:
                abort();
            default:
                abort();
        }
    }
};
