#pragma once

using byte = unsigned char;
using word = unsigned short;

// defined in main.cc
// (stub code to hook the "rom" data to the memory bus)
void preStart();

void Start();
void NonMaskableInterrupt();
