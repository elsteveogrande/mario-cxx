
# mario++

## About

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
