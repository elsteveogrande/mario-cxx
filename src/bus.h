#pragma once

#include <cassert>
#include <map>
#include <thread>

using byte = unsigned char;
using word = unsigned short;
extern bool diag;

struct Memory {
    struct Bytes {
        virtual ~Bytes() = default;
        virtual byte get(word index) = 0;
        virtual void set(word index, byte value) = 0;
    };

    struct ROM : Bytes {
        virtual ~ROM() = default;
        ROM(byte const* bytes) : bytes_(bytes) {}
        virtual void set(word, byte) override { abort(); }
        virtual byte get(word index) override { return bytes_[index]; }
    private:
        byte const* bytes_;
    };

    struct RAM : Bytes {
        virtual ~RAM() = default;
        RAM(byte* bytes) : bytes_(bytes) {}
        virtual void set(word index, byte value) override { bytes_[index] = value; }
        virtual byte get(word index) override { return bytes_[index]; }
    private:
        byte* bytes_;
    };

    struct Region {
        Bytes& bytes;
        word base;
        word mask;

        byte get(word index) const {
            return bytes.get((index - base) & mask);
        }
        
        void set(word index, byte val) {
            bytes.set((index - base) & mask, val);
        }

        Region(Bytes& bytes, word base, word mask)
                : bytes(bytes), base(base), mask(mask) {}
        
        Region(Region const& rhs)
                : bytes(rhs.bytes), base(rhs.base), mask(rhs.mask) {}

        Region& operator=(Region const& rhs) {
            new (this) Region(rhs);
            return *this;
        }
    };

    struct Bus {
        std::map<word, Region> baseMap;

        void* addRegion(Region const& reg);

        Region& getRegion(word index) {
            Region* ret = nullptr;
            auto it = baseMap.begin();
            while (it != baseMap.end()) {
                if (it->second.base <= index) {
                    ret = &(it->second);
                    ++it;
                } else {
                    break;
                }
            }
            assert(ret);
            return *ret;
        }

        byte get(word index) {
            auto& reg = getRegion(index);
            byte ret = reg.get(index & reg.mask);
            if (diag) {
                printf("get [%04x] -> %02x\n", index, ret);
            }
            return ret;
        }

        void set(word index, byte val) {
            if (diag) {
                printf("set [%04x] <- %02x\n", index, val);
            }
            auto& reg = getRegion(index);
            reg.set(index & reg.mask, val);
        }
    };
};

struct PPU;

struct IORegs : Memory::Bytes {
    PPU& ppu;
    byte strobe {0};
    byte joy0 {0};
    byte joy1 {0};
    byte joy0ShiftReg;
    byte joy1ShiftReg;

    explicit IORegs(PPU& ppu);

    virtual byte get(word index) override;
    virtual void set(word index, byte value) override;
};

extern Memory::Bus m;
