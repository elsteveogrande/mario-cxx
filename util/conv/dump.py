from collections import deque
from typing import *
import sys

from conv.chunks import *

def _dump(c: Chunk, indent=0):
    assert isinstance(c, Chunk)
    line = ("    " * indent)
    line += str(type(c))
    for a in type(c).attrs:
        s = c.__getattribute__(a)
        if not isinstance(s, Chunk):
            line += " "
            line += a
            line += ":"
            line += str(s)
    print(line, file=sys.stderr)
    for a in type(c).attrs:
        s = c.__getattribute__(a)
        if isinstance(s, Chunk):
            _dump(s, indent + 1)
        elif isinstance(s, list):
            for cc in s:
                _dump(cc, indent + 1)

def dump(chunks: deque[Chunk]):
    for c in chunks:
        _dump(c, 0)
