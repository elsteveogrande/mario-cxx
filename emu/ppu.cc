#include "ppu.h"
#include "SFML/Graphics/Image.hpp"
#include "SFML/Graphics/Rect.hpp"

#include <cstdio>
#include <fstream>
#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Graphics/Texture.hpp>

Pixel Pixel::colors[64] = {
    /*   0 (00) */ {0x62, 0x62, 0x62, 0xff},
    /*   1 (01) */ {0x00, 0x23, 0x91, 0xff},
    /*   2 (02) */ {0x18, 0x10, 0xa6, 0xff},
    /*   3 (03) */ {0x44, 0x00, 0x99, 0xff},
    /*   4 (04) */ {0x61, 0x00, 0x6d, 0xff},
    /*   5 (05) */ {0x6d, 0x00, 0x2c, 0xff},
    /*   6 (06) */ {0x68, 0x0a, 0x00, 0xff},
    /*   7 (07) */ {0x4d, 0x24, 0x00, 0xff},
    /*   8 (08) */ {0x28, 0x3b, 0x00, 0xff},
    /*   9 (09) */ {0x03, 0x4b, 0x00, 0xff},
    /*  10 (0a) */ {0x00, 0x51, 0x00, 0xff},
    /*  11 (0b) */ {0x00, 0x4b, 0x1b, 0xff},
    /*  12 (0c) */ {0x00, 0x3a, 0x5e, 0xff},
    /*  13 (0d) */ {0x00, 0x00, 0x00, 0xff},
    /*  14 (0e) */ {0x00, 0x00, 0x00, 0xff},
    /*  15 (0f) */ {0x00, 0x00, 0x00, 0xff},

    /*  16 (10) */ {0xab, 0xab, 0xab, 0xff},
    /*  17 (11) */ {0x1e, 0x55, 0xea, 0xff},
    /*  18 (12) */ {0x46, 0x3b, 0xff, 0xff},
    /*  19 (13) */ {0x82, 0x20, 0xf6, 0xff},
    /*  20 (14) */ {0xa9, 0x18, 0xb9, 0xff},
    /*  21 (15) */ {0xba, 0x20, 0x61, 0xff},
    /*  22 (16) */ {0xb3, 0x32, 0x15, 0xff},
    /*  23 (17) */ {0x8d, 0x56, 0x00, 0xff},
    /*  24 (18) */ {0x5c, 0x75, 0x00, 0xff},
    /*  25 (19) */ {0x29, 0x8b, 0x00, 0xff},
    /*  26 (1a) */ {0x07, 0x93, 0x00, 0xff},
    /*  27 (1b) */ {0x00, 0x8b, 0x4a, 0xff},
    /*  28 (1c) */ {0x00, 0x74, 0xa5, 0xff},
    /*  29 (1d) */ {0x00, 0x00, 0x00, 0xff},
    /*  30 (1e) */ {0x00, 0x00, 0x00, 0xff},
    /*  31 (1f) */ {0x00, 0x00, 0x00, 0xff},

    /*  32 (20) */ {0xff, 0xff, 0xff, 0xff},
    /*  33 (21) */ {0x6c, 0xa6, 0xff, 0xff},
    /*  34 (22) */ {0x96, 0x8b, 0xff, 0xff},
    /*  35 (23) */ {0xd4, 0x6f, 0xff, 0xff},
    /*  36 (24) */ {0xfd, 0x66, 0xff, 0xff},
    /*  37 (25) */ {0xff, 0x6f, 0xb2, 0xff},
    /*  38 (26) */ {0xff, 0x82, 0x63, 0xff},
    /*  39 (27) */ {0xe0, 0xa7, 0x0c, 0xff},
    /*  40 (28) */ {0xad, 0xc7, 0x00, 0xff},
    /*  41 (29) */ {0x78, 0xde, 0x00, 0xff},
    /*  42 (2a) */ {0x55, 0xe6, 0x32, 0xff},
    /*  43 (2b) */ {0x3e, 0xde, 0x9a, 0xff},
    /*  44 (2c) */ {0x49, 0xc6, 0xf8, 0xff},
    /*  45 (2d) */ {0x4e, 0x4e, 0x4e, 0xff},
    /*  46 (2e) */ {0x00, 0x00, 0x00, 0xff},
    /*  47 (2f) */ {0x00, 0x00, 0x00, 0xff},

    /*  48 (30) */ {0xff, 0xff, 0xff, 0xff},
    /*  49 (31) */ {0xc4, 0xdb, 0xff, 0xff},
    /*  50 (32) */ {0xd5, 0xd0, 0xff, 0xff},
    /*  51 (33) */ {0xee, 0xc5, 0xff, 0xff},
    /*  52 (34) */ {0xfe, 0xc2, 0xff, 0xff},
    /*  53 (35) */ {0xff, 0xc5, 0xe0, 0xff},
    /*  54 (36) */ {0xff, 0xcd, 0xc0, 0xff},
    /*  55 (37) */ {0xf3, 0xdc, 0x9d, 0xff},
    /*  56 (38) */ {0xde, 0xe8, 0x91, 0xff},
    /*  57 (39) */ {0xc9, 0xf2, 0x99, 0xff},
    /*  58 (3a) */ {0xbb, 0xf5, 0xad, 0xff},
    /*  59 (3b) */ {0xb2, 0xf2, 0xd7, 0xff},
    /*  60 (3c) */ {0xb6, 0xe8, 0xfc, 0xff},
    /*  61 (3d) */ {0xb8, 0xb8, 0xb8, 0xff},
    /*  62 (3e) */ {0x00, 0x00, 0x00, 0xff},
    /*  63 (3f) */ {0x00, 0x00, 0x00, 0xff},
};

void Palettes::writeByte(word offset, byte val) {
    if (offset < 0x10) {
        bkgdPalettes[(offset >> 2) & 0x03].writeByte(offset & 0x03, val);
    } else {
        offset &= 0x0f;
        spritePalettes[(offset >> 2) & 0x03].writeByte(offset & 0x03, val);
    }
}

PPUTimer::PPUTimer(PPU& ppu)
        : ppu(ppu)
        , loopThread([this] {this->run();}) {
}

PPUTimer::~PPUTimer() {
    stopped = true;
    loopThread.join();
}

void PPUTimer::run() {
    while (!stopped) {
        std::this_thread::sleep_for(kLineInterval);
        ppu.nextLine();
    }
}

void PPU::nextLine() {
    line = (line == 261) ? 0 : (line + 1);
    if (line == 32) {
        auto& s0 = sprites[0];
        if (s0.y < 0xef && s0.index == 0xff) {
            regs.status.store(0x40 | regs.status.load());
        }
    } else if (line == 241) {
        // vblank is starting:
        // set vblank flag
        regs.status.store(0x80 | regs.status.load());
    } else if (line == 261) {
        // vblank is ending:
        // clear sprite0 hit
        regs.status.store(~0x40 & (regs.status.load()));
        // clear vblank flag
        regs.status.store(0x80 | regs.status.load());
    }
}

PPU::PPU(sf::RenderWindow& window)
        : window(window)
        , regs(PPURegs(*this)) {
}

CharacterROM::CharacterROM() {
    std::ifstream ifile;
    ifile.open("/Users/steve/code/mario++/misc/smb1-us.nes", std::ios::binary | std::ios::in);
    ifile.seekg(32768 + 16, std::ios::beg);
    char buffer[8192];
    ifile.read(buffer, sizeof(buffer));
    for (word i = 0; i < sizeof(buffer); i++) {
        int p = (i >>  4) & 0xff;
        int t = (i >> 12) & 0x01;
        patternTables[t].patterns[p].data[i & 0x0f] = buffer[i];
    }
}

void PPU::draw() {
    Pixel bkgd[512][240];
    nameTables[0].draw((Pixel*) bkgd, 0, 0, *this);
    nameTables[1].draw((Pixel*) bkgd, 256, 0, *this);

    window.clear(palettes.bkgdPalettes[0].ids[0].get().asColor());
    sf::Image bimg;
    bimg.create(512, 240, (byte*) bkgd);
    sf::Texture btex;
    btex.create(256, 240);
    btex.loadFromImage(bimg, sf::IntRect(regs.scroll >> 8, 0, 256, 240));
    sf::Sprite bspr;
    bspr.setTexture(btex);
    window.draw(bspr);

    Pixel fore[256][240];
    memset(fore, 0, sizeof(fore));
    for (int i = 0; i < 64; i++) {
        auto& s = sprites[i];
        if (s.y < 0xef) {
            // printf("@@@ sprite %2d : x=%02x y=%02x idx=%02x attrs=%02x\n", i, s.x, s.y, s.index, s.attrs);
            sprites[i].draw((Pixel*) fore, *this);
        }
    }

    sf::Image simg;
    simg.create(256, 240, (byte*) fore);
    sf::Texture stex;
    stex.create(256, 240);
    stex.loadFromImage(simg, sf::IntRect(0, 0, 256, 240));
    sf::Sprite sspr;
    sspr.setTexture(stex);
    window.draw(sspr);
}

void NameTable::draw(Pixel* pixels, unsigned x, unsigned y, PPU& ppu) {
    for (int j = 0; j < 30; j++) {
        for (int i = 0; i < 32; i++) {
            byte pid = getPaletteID(i, j);
            tiles[j][i].draw(
                pixels,
                x + i * 8,
                y + j * 8,
                ppu.palettes.bkgdPalettes[pid],
                ppu);
        }
    }
}

void Sprite::draw(Pixel* pixels, PPU& ppu) {
    byte pid = attrs & 0x03;
    auto& pal = ppu.palettes.spritePalettes[pid];
    bool xflip = !!(attrs & 0x40);
    bool yflip = !!(attrs & 0x80);
    ppu.lookupPattern(index).draw(pixels, 256, x, y, pal, xflip, yflip);
}

void Tile::draw(Pixel* pixels, unsigned x, unsigned y, Palette& pal, PPU& ppu) {
    ppu.lookupPattern(0x100 + index).draw(pixels, 512, x, y, pal, false, false);
}

void Pattern::draw(Pixel* pixels, unsigned w, unsigned x, unsigned y, Palette& pal, bool xflip, bool yflip) {
    for (int j = 0; j < 8; j++) {
        byte b1 = data[j + 0];
        byte b2 = data[j + 8];
        for (int i = 0; i < 8; i++) {
            byte v = 0;
            if (b1 & 0x80) { v |= 1; }
            if (b2 & 0x80) { v |= 2; }
            int o = xflip ? 7 - i : i;
            int p = yflip ? 7 - j : j;
            pixels[(y + p) * w + (o + x)] = pal.getColor(v);
            b1 <<= 1;
            b2 <<= 1;
        }
    }
}

byte PPURegs::get(word index) {
    byte ret;
    switch (index) {
        case 2:
            ret = status;
            status &= 0x7f;  // clear vblank flag after read
            gotFirstByte = false;
            break;

        case 7: {
            assert (!gotFirstByte);
            ret = ppuData;
            if (ppuAddr < 0x2000) {
                ppuData = ppu.chrROM.readByte(ppuAddr);
            } else if (ppuAddr >= 0x2000 && ppuAddr < 0x3000) {
                word addr = ppuAddr - 0x2000;
                assert (addr < 0x1000);
                int n = addr >> 10;
                assert (n < 2);
                NameTable& nt = ppu.nameTables[n];
                word index = ppuAddr & 0x3ff;
                if (index < 960) {
                    byte row = index >> 5;
                    assert (row < 30);
                    byte col = index & 0x1f;
                    assert (col < 32);
                    ppuData = nt.tiles[row][col].index;
                } else {
                    ppuData = nt.attributes[index - 960].data;
                }
            } else {
                fprintf(stderr, "!!! cannot read PPU address %04x\n", ppuAddr);
                fflush(stderr);
                abort();
            }
            ppuAddr += (ctrl & 0x04) ? 32 : 1;
            break;
        }
            
        default:
            fprintf(stderr, "!!! index %02x (PPU address %04x)\n", index, ppuAddr);
            fflush(stderr);
            abort();
    }

    // printf("@@@ PPU %04x -> %02x\n", index, ret);
    return ret;
}

void PPURegs::set(word index, byte value) {
    if (diag) {
        printf("@@@ PPU %04x <- %02x\n", index, value);
    }
    switch (index) {
        case 0:
            ctrl = value;
            assert (!(ctrl & 0x40));  // EXT bkgd
            assert (!(ctrl & 0x20));  // 8x16 sprites
            assert (!(ctrl & 0x08));  // sprites use left table (8x8)
            assert (!(ctrl & 0x03));  // base nametable
            return;

        // https://www.nesdev.org/wiki/PPU_registers#Mask_($2001)_%3E_write
        case 1:
            mask = value;
            return;

        // https://www.nesdev.org/wiki/PPU_registers#OAM_address_($2003)_%3E_write
        case 3:
            oamAddr = value;
            return;

        // https://www.nesdev.org/wiki/PPU_registers#PPUSCROLL
        case 5:
            // printf("@@@ SCROLL %02x first=%d (%04x)\n", value, gotFirstByte, scroll); fflush(stdout);
            if (!gotFirstByte) {
                scroll = word(value) << 8;
                gotFirstByte = true;
            } else {
                scroll |= word(value);
                gotFirstByte = false;
            }
            return;

        // https://www.nesdev.org/wiki/PPU_registers#Address_($2006)_%3E%3E_write_x2
        case 6:
            if (!gotFirstByte) {
                ppuAddr = word(value) << 8;
                gotFirstByte = true;
            } else {
                ppuAddr |= word(value);
                ppuAddr &= 0x3fff;
                gotFirstByte = false;
            }
            return;

        // https://www.nesdev.org/wiki/PPU_registers#Data_($2007)_%3C%3E_read/write
        case 7: {
            assert (!gotFirstByte);
            ppuData = value;
            // printf("ppuAddr %04x\n", ppuAddr); fflush(stdout);
            if (ppuAddr >= 0x2000 && ppuAddr < 0x3000) {
                word addr = ppuAddr - 0x2000;
                int n = addr >> 10;
                assert (n < 2);
                NameTable& nt = ppu.nameTables[n];
                word index = ppuAddr & 0x3ff;
                if (index < 960) {
                    byte row = index >> 5;
                    assert (row < 32);
                    byte col = index & 0x1f;
                    assert (col < 32);
                    nt.tiles[row][col].index = value;
                    // printf("@@@ addr %04x (nt=%d row=%d col=%d) data %02x\n", ppuAddr, n, row, col, value);
                } else {
                    nt.attributes[index - 960].data = value;
                }        
            } else if (ppuAddr >= 0x3f00) {
                // https://www.nesdev.org/wiki/PPU_palettes
                word addr = ppuAddr - 0x3f00;
                addr &= 0x1f;  // mirroring at 3f20 and up ?
                if (addr == 0x10 || addr == 0x14 || addr == 0x18 || addr == 0x1c) {
                    // from above url:
                    // "Addresses $3F10/$3F14/$3F18/$3F1C are mirrors of $3F00/$3F04/$3F08/$3F0C.
                    // Note that this goes for writing as well as reading. A symptom of not having
                    // implemented this correctly in an emulator is the sky being black in
                    // Super Mario Bros., which writes the backdrop color through $3F10.
                    addr &= ~0x10;
                }
                ppu.palettes.writeByte(addr, value);
            } else {
                fprintf(stderr, "!!! bad PPU address: %04x", ppuAddr);
                fflush(stderr);
                abort();
            }
            ppuAddr += (ctrl & 0x04) ? 32 : 1;
            return;
        }

        default:
            abort();
    }
}
