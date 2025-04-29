
# mario++

## About

This is an almost-100% mechanical conversion of Super Mario Bros.'s 6502 instructions
to C++ operations, along with some emulation glue, so we can display it and receive controller presses.

It's clearly not perfect; obvious PPU emulation bugs exist:

https://github.com/user-attachments/assets/8e13f415-88c5-441a-921f-abbf1fdcbc23

But it's a start toward having something working that will be refactored.
My plan is to gradually migrate the "raw" 6502 operations into **pure** C++ logic,
including structures, classes, and so on.  Ultimately I want to have a play area
larger than 256 pixels wide; to have enemies and other objects and their behaviors encapsulated
into proper classes; and so on.

Each conversion step will be a documented PR doing such encapsulation, with the project
being "completed" when there are no remaining (or, at least, no more *interesting*) original 6502 instructions, and when I hit the targets set for myself (wider screen, left-scroll, new enemies, new levels).  Or until I get tired of this.  :)

I thought it would be fun to see what happens when you go to the "minus world" at the end of 1-2.  Perhaps someday when this is refactored and data are better organized into proper `structs` and so on, this would trigger an ASAN or MSAN error, i.e., detect the condition when an errant read occurs like the game does when trying to access the "blank" world (which is actually "world 36").

[![mario++.minusworld.mp4](https://github.com/elsteveogrande/mario-cxx/raw/refs/heads/main/misc/mario++.minusworld.png)](https://github.com/elsteveogrande/mario-cxx/raw/refs/heads/main/misc/mario++.minusworld.mp4)



## Requirements

* LLVM w/ Clang; a new enough version supporting `-std=c++23`
* `sfml` graphics library: on OSX, run `brew install sfml`
* and finally `make`.

## Getting started

Make sure you have a new-ish LLVM/Clang and SFML,
and just run `make`.

## TODOs

### Emulation TODOs

* refactor emu classes, they're a mess
* some known bugs in PPU emulation: sprite priority and scrolling

### C++-generator TODOs

* have functions contain code blocks with their own labels,
  and not "branching" to another function altogether (just `goto` that label)
* identify memory (RAM locations in `0x0000`-`0x07ff`,
  ROM within `0x8000`-`0xffff`) which are used by only one function,
  and make them `static` within those functions (as opposed to the
  giant `G` structure in `main.h`/`.cc`)

## Thanks

Thanks to `doppelganger` who reverse engineered and commented the entire assembly listing of the game.
https://gist.github.com/1wErt3r/4048722

Also thanks to `bombela` for `backward.hpp`, which has been invaluable in debugging efforts.
https://github.com/bombela/backward-cpp
