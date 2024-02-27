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

    sf::Color asColor() const { return {r, g, b, a}; }

    static Pixel colors[64];

    static Pixel get(int v) {
        assert (v <= 0x3f);
        return colors[v];
    }
} __attribute__((__packed__));

struct PPU;
struct Sprite;
struct Tile;
struct NameTable;
struct PatternTable;
struct Pattern;

struct ColorID {
    byte id;
    Pixel get() {
        assert (id <= 0x3f);
        return Pixel::colors[id & 0x3f];
    }
} __attribute__((__packed__));

struct Palette {
    // idx 0 is unused (represents background color; maps to 0x3f00 instead)
    ColorID ids[4] {{0}, {0}, {0}, {0}};
    void writeByte(word offset, byte val) { ids[offset] = {val}; }

    Pixel getColor(byte v) {
        if (v == 0) {
            return {0, 0, 0, 0};
        } else {
            return ids[v].get();
        }
    }
} __attribute__((__packed__));

struct Sprite {
    // https://www.nesdev.org/wiki/PPU_OAM
    byte y;         // y-position of top sprite (if 2 tiles high)
    byte index;
    byte attrs;
    byte x;
    void draw(Pixel* pixels, PPU& ppu);
};

struct NameTable;

struct Tile {
    byte index;

    void draw(Pixel* pixels, unsigned x, unsigned y, Palette& pal, PPU& ppu);
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

    byte getPaletteID(byte i, byte j) {
        byte gx = i >> 2;
        byte gy = j >> 2;
        auto& ta = attributes[gy * 8 + gx];
        i = (i >> 1) & 0x01;
        j = (j >> 1) & 0x01;
        if (i == 0 && j == 0) { return (ta.data >> 0) & 0x03; }
        if (i == 1 && j == 0) { return (ta.data >> 2) & 0x03; }
        if (i == 0 && j == 1) { return (ta.data >> 4) & 0x03; }
        if (i == 1 && j == 1) { return (ta.data >> 6) & 0x03; }
        abort();
    }

    void draw(Pixel* pixels, unsigned x, unsigned y, PPU& ppu);
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

    void draw(Pixel* pixels, unsigned w, unsigned x, unsigned y, Palette& pal, bool xflip, bool yflip);
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
    Palette bkgdPalettes[4];
    Palette spritePalettes[4];
    void writeByte(word offset, byte val);
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

    Pattern& lookupPattern(unsigned index) {
        // printf("pattern %03x :", index);
        auto& ret = chrROM.patternTables[index >> 8].patterns[index & 0xff];
        // for (int i = 0; i < 16; i++) { printf(" %02x", ret.data[i]); }
        // printf("\n");
        // fflush(stdout);
        return ret;
    }
};

struct PPUTimer {
    explicit PPUTimer(PPU& ppu);
    ~PPUTimer();
    void run();

    PPU& ppu;
    std::atomic<bool> stopped {false};
    std::thread loopThread;

    // approx 63.6µS
    constexpr static std::chrono::nanoseconds const kLineInterval { long(0.8 * (1000000000.0 / (262 * 60))) };
};

