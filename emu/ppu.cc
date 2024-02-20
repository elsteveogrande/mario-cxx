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
    line = (line == 261) ? 0: (line + 1);
    if (line == 30) {
        regs.status |= 0x40;
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
    ifile.open("misc/smb1-us.nes", std::ios::binary | std::ios::in);
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

    window.clear();
    sf::Image img;
    img.create(512, 240, (byte*) bkgd);
    sf::Texture tex;
    tex.create(256, 240);
    tex.loadFromImage(img, sf::IntRect(regs.scroll >> 8, 0, 256, 240));
    sf::Sprite spr;
    spr.setTexture(tex);
    window.draw(spr);
}

void Sprite::draw(Pixel* pixels, unsigned x, unsigned y, PPU& ppu) {
    ppu.lookupPattern(index).draw(pixels, 256, x, y, ppu);
}

void Tile::draw(Pixel* pixels, unsigned x, unsigned y, PPU& ppu) {
    ppu.lookupPattern(index).draw(pixels, 512, x, y, ppu);
}

void Pattern::draw(Pixel* pixels, unsigned w, unsigned x, unsigned y, PPU& ppu) {
    for (int j = 0; j < 8; j++) {
        for (int i = 0; i < 8; i++) {
            byte r, g, b;
            byte v = ((data[j * 8] >> i) & 0x01) ? 0x01 : 0x00;
            v |= ((data[(j * 8) + 8] >> i) & 0x01) ? 0x02 : 0x00;
            switch (v) {
                case 0:
                    r = 0x00; g = 0x00; b = 0x00; break;
                case 1:
                    r = 0x00; g = 0x00; b = 0xff; break;
                case 2:
                    r = 0x00; g = 0xff; b = 0x00; break;
                case 3:
                    r = 0xff; g = 0x00; b = 0x00; break;
            }
            pixels[(y + j) * w + (i + x)] = {r, g, b, 0xff};
        }
    }
}

byte PPURegs::get(word index) {
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
            return ret;
        case 3:
            abort();
        case 4:
            abort();
        case 5:
            abort();
        case 6:
            abort();

        case 7: {
            byte const ret = ppuData;
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
                    assert (row < 32);
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
            return ret;
        }
            
        default:
            abort();
    }
}

void PPURegs::set(word index, byte value) {
    switch (index) {
        case 0:
            ctrl = value;
            return;

        // https://www.nesdev.org/wiki/PPU_registers#Mask_($2001)_%3E_write
        case 1:
            mask = value;
            return;

        case 2:
            abort();

        // https://www.nesdev.org/wiki/PPU_registers#OAM_address_($2003)_%3E_write
        case 3:
            oamAddr = value;
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
                gotFirstByte = false;
            }
            printf("@@@ SCROLL %04x\n", scroll); fflush(stdout);
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
            }
            return;

        // https://www.nesdev.org/wiki/PPU_registers#Data_($2007)_%3C%3E_read/write
        case 7: {
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
                } else {
                    nt.attributes[index - 960].data = value;
                }        
            } else if (ppuAddr >= 0x3f00 && ppuAddr < 0x3f20) {
                // https://www.nesdev.org/wiki/PPU_palettes
                word addr = ppuAddr - 0x3f00;
                if (addr == 0x10 || addr == 0x14 || addr == 0x18 || addr == 0x1c) {
                    // from above url:
                    // "Addresses $3F10/$3F14/$3F18/$3F1C are mirrors of $3F00/$3F04/$3F08/$3F0C.
                    // Note that this goes for writing as well as reading. A symptom of not having
                    // implemented this correctly in an emulator is the sky being black in
                    // Super Mario Bros., which writes the backdrop color through $3F10.
                    addr &= ~0x10;
                }
                ppu.palettes.data[addr] = value;
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
