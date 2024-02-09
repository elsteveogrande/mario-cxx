from collections import deque
from typing import *
import sys

from conv.chunks import *

def _dump(c: Chunk, indent=0):
    assert isinstance(c, Chunk)
    line = ("    " * indent)
    line += str(c)
    print(line, file=sys.stderr)
    if "inner" in type(c).attrs:
        s = c.__getattribute__("inner")
        if isinstance(s, Chunk):
            _dump(s, indent + 1)
        elif isinstance(s, list):
            for cc in s:
                _dump(cc, indent + 1)

def dump(chunks: deque[Chunk]):
    for c in chunks:
        _dump(c, 0)
