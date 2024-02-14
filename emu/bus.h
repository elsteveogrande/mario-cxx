#pragma once

#include <cassert>
#include <map>
#include <memory>
#include <thread>

using byte = unsigned char;
using word = unsigned short;

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
        std::shared_ptr<Bytes> bytes;
        word base;
        word mask;
        byte get(word index) const { return bytes->get((index - base) & mask); }
        void set(word index, byte val) { bytes->set((index - base) & mask, val); }
    };

    struct Bus {
        std::map<word, Region> baseMap;
        void* addRegion(Region reg);

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
            // std::this_thread::sleep_for(std::chrono::milliseconds(1));
            byte ret = getRegion(index).get(index);
            fprintf(stderr, "get [%04x] -> %02x\n", index, ret);
            return ret;
        }

        void set(word index, byte val) {
            // std::this_thread::sleep_for(std::chrono::milliseconds(1));
            fprintf(stderr, "set [%04x] <- %02x\n", index, val);
            getRegion(index).set(index, val);
        }
    };
};

struct PPU;
struct PPURegs;

struct IORegs : Memory::Bytes {
    IORegs(PPU& ppu, std::shared_ptr<PPURegs> ppuRegs);

    virtual byte get(word index);
    virtual void set(word index, byte value);

    PPU& ppu;
    std::shared_ptr<PPURegs> ppuRegs;
};

extern Memory::Bus m;
