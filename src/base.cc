#include "base.h"

#include <condition_variable>
#include <cstdio>
#include <mutex>
#include <optional>
#include <thread>

#include "backward.hpp"
#include "bus.h"
#include "main.h"
#include "ppu.h"

namespace backward {
backward::SignalHandling sh;
}

#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Keyboard.hpp>

int main(int, char**) {
    byte ramBytes[0x0800];
    Memory::RAM ram(ramBytes);
    m.addRegion(Memory::Region {ram, 0x0000, 0x07ff});

    std::optional<sf::Event> event;
    sf::RenderWindow window(sf::VideoMode({256, 240}), "mario++");

    // Keep processing window events until window is "ready"
    while (!window.isOpen()) { event = window.pollEvent(); }

    std::mutex lineMutex;
    std::condition_variable lineCond;
    PPU ppu(window);
    PPUTimer ppuTimer(ppu, lineMutex, lineCond);
    m.addRegion(Memory::Region {ppu.regs, 0x2000, 0x0007});

    IORegs ioRegs(ppu);
    m.addRegion(Memory::Region {ioRegs, 0x4000, 0x001f});

    preStart();
    Start();

    window.setSize({256 * 3, 240 * 3});

    std::tuple<byte, byte, byte> prevLoc {0, 0, 0};

    while (window.isOpen()) {
        event = window.pollEvent();
        if (event.has_value()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
                ppuTimer.stopped = true;
                return 0;
            }
            auto* kp = event->getIf<sf::Event::KeyPressed>();
            if (kp) {
                switch (kp->code) {
                    case sf::Keyboard::Key::D:
                        ioRegs.joy0 |= 0x80;
                        break;
                    case sf::Keyboard::Key::A:
                        ioRegs.joy0 |= 0x40;
                        break;
                    case sf::Keyboard::Key::S:
                        ioRegs.joy0 |= 0x20;
                        break;
                    case sf::Keyboard::Key::W:
                        ioRegs.joy0 |= 0x10;
                        break;
                    case sf::Keyboard::Key::RBracket:
                        ioRegs.joy0 |= 0x08;
                        break;
                    case sf::Keyboard::Key::LBracket:
                        ioRegs.joy0 |= 0x04;
                        break;
                    case sf::Keyboard::Key::Comma:
                        ioRegs.joy0 |= 0x02;
                        break;
                    case sf::Keyboard::Key::Period:
                        ioRegs.joy0 |= 0x01;
                        break;
                    default: /* ignore */
                }
            }
            auto* kr = event->getIf<sf::Event::KeyReleased>();
            if (kr) {
                switch (kr->code) {
                    case sf::Keyboard::Key::D:
                        ioRegs.joy0 &= ~0x80;
                        break;
                    case sf::Keyboard::Key::A:
                        ioRegs.joy0 &= ~0x40;
                        break;
                    case sf::Keyboard::Key::S:
                        ioRegs.joy0 &= ~0x20;
                        break;
                    case sf::Keyboard::Key::W:
                        ioRegs.joy0 &= ~0x10;
                        break;
                    case sf::Keyboard::Key::RBracket:
                        ioRegs.joy0 &= ~0x08;
                        break;
                    case sf::Keyboard::Key::LBracket:
                        ioRegs.joy0 &= ~0x04;
                        break;
                    case sf::Keyboard::Key::Comma:
                        ioRegs.joy0 &= ~0x02;
                        break;
                    case sf::Keyboard::Key::Period:
                        ioRegs.joy0 &= ~0x01;
                        break;
                    default: /* ignore */
                }
            }
        }

        // we'll busy-wait for a vblank
        std::this_thread::yield();
        if (ppu.regs.status & 0x80) {
            // if NMI is enabled, invoke it
            if (ppu.regs.ctrl & 0x80) {
                NonMaskableInterrupt();

                auto currLoc = std::tuple(ramBytes[CurrentPageLoc],
                                          ramBytes[CurrentColumnPos],
                                          ramBytes[BlockBufferColumnPos]);

                if (currLoc != prevLoc) {
                    for (int i = 0; i < 13; i++) {
                        int p = MetatileBuffer + i;
                        if (ramBytes[p]) {
                            printf("%02x ", ramBytes[p]);
                        } else {
                            printf("   ");
                        }
                    }
                    printf(": pg=%02x col=%02x bbcol=%d\n",
                           std::get<0>(currLoc), std::get<1>(currLoc),
                           std::get<2>(currLoc));

                    prevLoc = currLoc;
                }
            }
        }

        ppu.draw();
        ppu.window.display();
    }
}
