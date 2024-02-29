
import sys
from typing import *

from .chunks import *

class Renderer:
    def __init__(self,
                 defs: DefsBlock,
                 data: list[DataBlock],
                 code: list[CodeBlock],
                 names: dict[str, Named]):
        self.defs = defs
        self.data = data
        self.code = code
        self.names = names
    
    def render(self) -> None:
        prev: Optional[CodeBlock] = None
        for c in self.code:
            if prev and not (isinstance(prev.inner[-1], Insn) and prev.inner[-1].is_terminal()):
                prev.inner.append(Insn(name="jmp", opds=[Ref(c.label)]))
            prev = c

        f = sys.stderr

        def p(c: Union[str, Chunk], proto=False):
            if c is None:  return
            if isinstance(c, Chunk):
                s = c.render(proto=proto)
                if s is None:
                    raise Exception("rendering failed for: " + str(c))
            elif isinstance(c, str):
                s = c
            else:
                raise Exception(str(type(c)))
            print(s, file=f)

        with open("main.h", "w") as h:
            f = h
            p("#pragma once")
            p("#include \"util/base.h\"")
            p("")

            p("")
            p("struct G {")
            offset = 0x8000
            for d in self.data:
                for cm in d.comments:
                    p(cm)
                d.offset = offset
                p(d, proto=True)
                if d.inner:
                    offset += len(d.inner) * (2 if (isinstance(d.inner[0], Word)) else 1)
                else:
                    offset += 1
            p("} __attribute__((__packed__));")
            p("extern G g;")

            p("")
            for df in self.defs.inner:
                assert isinstance(df, Define)
                for cm in df.comments:
                    p(cm)
                p(df)

            p("")
            for c in self.code:
                for cm in c.comments:
                    p(cm)
                p(c, proto=True)

        with open("main.cc", "w") as cc:
            f = cc
            p("#include <cstddef>")
            p("#include \"main.h\"")

            p("")
            p("G g {")
            for d in self.data:
                for cm in d.comments:
                    p(cm)
                p(d)
            p("};")
            p("Memory::ROM gROM((byte*) &g);")

            p("")
            p("void preStart() {                 \n"
            "    m.addRegion(                    \n"
            "        Memory::Region {            \n"
            "            gROM, 0x8000, 0x7fff });\n"
            "}")

            p("")
            for c in self.code:
                print(c)
                for cm in c.comments:
                    p(cm)
                p(c)
