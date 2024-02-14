#include "ppu.h"

#include <cstdio>

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
    line = (line < 261) ? (line + 1) : 0;
    if (line == 241) { callback(); }
}
