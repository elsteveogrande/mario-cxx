
# mario++

## About

## Requirements

* LLVM w/ Clang; a new enough version supporting `-std=c++2b`

## Getting started

## TODO

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
