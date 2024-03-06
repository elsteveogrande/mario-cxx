#include "debug.h"
#include "insns.h"

#include <cstring>

bool diag = false;

void _debug(char const* func, char const* filename, int line) {
    static char const* lastFile = nullptr;
    static int lastLine = -1;
    if (!diag) { return; }
    if (filename == lastFile && line == lastLine) { return; }

    if (!strcmp(func, "DecTimersLoop")) { return; }
    if (!strcmp(func, "SkipExpTimer")) { return; }
    if (!strcmp(func, "InitByteLoop")) { return; }
    if (!strcmp(func, "InitByte")) { return; }
    if (!strcmp(func, "SkipByte")) { return; }
    if (!strcmp(func, "MiscLoop")) { return; }
    if (!strcmp(func, "MiscLoopBack")) { return; }
    if (!strcmp(func, "NextSprOffset")) { return; }
    if (!strcmp(func, "StrSprOffset")) { return; }
    if (!strcmp(func, "ShuffleLoop")) { return; }

    lastFile = filename;
    lastLine = line;
    printf(
        "%10s:%5d [%30s] a:%02x x:%02x y:%02x n:%d z:%d c:%d\n",
        filename, line, func, a.read(), x.read(), y.read(), n, z, c);
}
