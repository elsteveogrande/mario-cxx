#pragma once

#include <atomic>
#include <cstring>
#include <functional>
#include <thread>

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

#include "../util/base.h"
#include "SFML/Graphics/RenderTarget.hpp"

struct Pixel {
    byte r {0x00};
    byte g {0x00};
    byte b {0x00};
    byte a {0xff};
} __attribute__((__packed__));

struct PPU;
struct Sprite;
struct Tile;
struct NameTable;
struct PatternTable;
struct Pattern;

struct Sprite {
    // https://www.nesdev.org/wiki/PPU_OAM
    byte y;         // y-position of top sprite (if 2 tiles high)
    byte index;
    byte attrs;
    byte x;
    void draw(Pixel* pixels, unsigned x, unsigned y, PPU& ppu);
};

struct NameTable;

struct Tile {
    byte index;

    void draw(Pixel* pixels, unsigned x, unsigned y, PPU& ppu);
};

struct TileAttribute {
    byte data;
};

struct NameTable {
    /*
     * A region of 1024 bytes in PPU memory;
     * this would correspond to $2000, $2400, $2800, or $2C00 within PPU RAM.
     * https://www.nesdev.org/wiki/PPU_nametables
     */
    Tile tiles[32][30];
    TileAttribute attributes[64];

    void draw(Pixel* pixels, unsigned x, unsigned y, PPU& ppu) {
        for (int j = 0; j < 30; j++) {
            for (int i = 0; i < 32; i++) {
                tiles[j][i].draw(pixels, x + i * 8, y + j * 8, ppu);
            }
        }
    }
};

struct Pattern {
    /*
     * Two 8x8 groups: 8x8 low bits then 8x8 high bits.
     * https://www.nesdev.org/wiki/PPU_pattern_tables
     */
    byte data[16];
    byte readByte(word addr) {
        assert (addr < 0x0010);
        return data[addr];
    }

    void draw(Pixel* pixels, unsigned w, unsigned x, unsigned y, PPU& ppu);
};

struct PatternTable {
    Pattern patterns[256];
    byte readByte(word addr) {
        assert (addr < 0x1000);
        return patterns[addr >> 4].readByte(addr & 0x000f);
    }
};

struct CharacterROM {
    PatternTable patternTables[2];
    CharacterROM();
    byte readByte(word addr) {
        assert (addr < 0x2000);
        return patternTables[addr >> 12].readByte(addr & 0x0fff);
    }
};

struct PPURegs : Memory::Bytes {
    // https://www.nesdev.org/wiki/PPU_registers

    // PPUCTRL: VPHB SINN
    // NMI enable (V), PPU master/slave (P), sprite height (H), background tile select (B),
    // sprite tile select (S), increment mode (I), nameTable select (NN)
    byte ctrl    {0};

    byte mask    {0};

    // PPUSTATUS: VSO- ----
    // vblank (V), sprite 0 hit (S), sprite overflow (O);
    // read resets write pair for $2005/$2006
    std::atomic<byte> status {0};

    byte oamAddr {0};
    byte oamData {0};
    word scroll  {0};
    word ppuAddr {0};
    byte ppuData {0};

    bool gotFirstByte {false};

    PPU& ppu;

    explicit PPURegs(PPU& ppu) : ppu(ppu) {}

    virtual byte get(word index) override;
    virtual void set(word index, byte value) override;
};

struct Palettes {
    // TODO: use actual Palette objects
    byte data[32];
};

struct PPU {
    sf::RenderWindow& window;
    PPURegs regs;
    uint16_t line {0};
    Sprite sprites[64];
    NameTable nameTables[2];
    Palettes palettes;
    CharacterROM chrROM;

    explicit PPU(sf::RenderWindow& window);
    void nextLine();
    void draw();

    Pattern& lookupPattern(unsigned index) { return chrROM.patternTables[0].patterns[index]; }
};

struct PPUTimer {
    explicit PPUTimer(PPU& ppu);
    ~PPUTimer();
    void run();

    PPU& ppu;
    std::atomic<bool> stopped {false};
    std::thread loopThread;

    // approx 63.6µS
    constexpr static std::chrono::nanoseconds const kLineInterval { 1000000000L / (262 * 60) };
};

