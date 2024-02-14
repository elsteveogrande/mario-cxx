#pragma once

#include <cstring>
#include <functional>
#include <thread>

#include <SFML/Window.hpp>

#include "../util/base.h"

struct Sprite {
    // https://www.nesdev.org/wiki/PPU_OAM
    byte y;         // y-position of top sprite (if 2 high)
    byte index;     // index number
    byte attrs;
    byte x;
};

struct PPU {
    sf::Window& window;
    uint16_t line {0};
    byte memory[0x4000];        // patterns and attributes
    Sprite sprites[64];

    // initially a no-op; this is replaced in base.cc
    std::function<void()> callback = [] {};

    PPU(sf::Window& window)
            : window(window) {
        memset(memory, 0, sizeof(memory));
    }

    /* called via PPUTimer */
    void nextLine();
};

struct PPUTimer {
    explicit PPUTimer(PPU& ppu);
    ~PPUTimer();
    void run();

    PPU& ppu;
    bool stopped {false};
    std::thread loopThread;

    // approx 63.6µS
    constexpr static std::chrono::nanoseconds const kLineInterval { 1000000000L / (262 * 60) };
};

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
    word scroll  {0};
    word ppuAddr {0};
    byte ppuData {0};

    bool gotFirstByte {false};

    PPU& ppu;

    explicit PPURegs(PPU& ppu) : ppu(ppu) {}

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
                gotFirstByte = false;
                if (ppu.line >= ppu.sprites[0].y) { ret |= 0x40; }
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
                return;

            // https://www.nesdev.org/wiki/PPU_registers#Mask_($2001)_%3E_write
            case 1:
                mask = value;
                return;

            case 2:
                status = value;
                return;

            // https://www.nesdev.org/wiki/PPU_registers#OAM_address_($2003)_%3E_write
            case 3:
                oamAddr = value;
                printf("OAMADDR: %02x\n", oamAddr);
                return;

            case 4:
                abort();

            // https://www.nesdev.org/wiki/PPU_registers#PPUSCROLL
            case 5:
                if (!gotFirstByte) {
                    scroll = value;
                    gotFirstByte = true;
                } else {
                    scroll <<= 8;
                    scroll |= value;
                    scroll &= 0x3fff;
                    gotFirstByte = false;
                    printf("SCROLL: %04x\n", scroll);
                }
                return;

            // https://www.nesdev.org/wiki/PPU_registers#Address_($2006)_%3E%3E_write_x2
            case 6:
                if (!gotFirstByte) {
                    ppuAddr = value;
                    gotFirstByte = true;
                } else {
                    ppuAddr <<= 8;
                    ppuAddr |= value;
                    ppuAddr &= 0x3fff;
                    gotFirstByte = false;
                    printf("PPUADDR: %04x\n", ppuAddr);
                }
                return;

            // https://www.nesdev.org/wiki/PPU_registers#Data_($2007)_%3C%3E_read/write
            case 7:
                ppu.memory[ppuAddr] = value;
                ppuAddr += (ctrl & 0x04) ? 32 : 1;
                return;

            default:
                abort();
        }
    }
};
