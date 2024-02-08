from collections import deque
from typing import *

from conv.chunks import *

def parse(s: str) -> Expr:
    try:
        return Lit(val=int(s), base=10)
    except:
        pass

    if s.startswith("$"):
        return Lit(val=int(s[1:], 16), base=16)
    if s.startswith("%"):
        return Lit(val=int(s[1:], 2), base=2)

    if s.startswith("#"):
        return Imm(val=parse(s[1:]))
    if s.startswith(">"):
        return HiByte(of=parse(s[1:]))
    if s.startswith("<"):
        return LoByte(of=parse(s[1:]))

    if s.startswith("(") and s.endswith(")"):
        return Paren(expr=parse(s[1:-1]))

    if s in ("a", "x", "y"):
        return Reg(name=s)

    if "+" in s:
        (xa, xb) = [parse(p.strip()) for p in s.split("+")]
        return Plus(a=xa, b=xb)
    if "-" in s:
        (xa, xb) = [parse(p.strip()) for p in s.split("-")]
        return Minus(a=xa, b=xb)
    
    return Ref(Unresolved(s))


def parse_line(chunks: deque[Chunk], line: str):
    if ";" in line:
        (line, comment) = line.split(";", 1)
        line = line.strip()
        comment = comment.strip()
        if "-------" in comment:
            chunks.append(Separator())
        else:
            chunks.append(Comment(text=comment))

    if "=" in line:
        (name, text) = line.split("=")
        name = name.strip()
        text = text.strip()
        # defines[name] = len(chunks)
        chunks.append(Define(name=name, expr=parse(text)))
        return

    if ":" in line:
        (name, line) = line.split(":")
        name = name.strip()
        line = line.strip()
        # labels[name] = len(chunks)
        chunks.append(Label(name=name))

    if not line:
        return

    if line.startswith("."):
        parts = [p.strip() for p in line.replace(",", " ").split()]
        name = parts.pop(0)
        if name in (".index", ".mem", ".org"):
            return
        if name == ".db":
            for p in parts:
                chunks.append(Byte(expr=parse(p)))
        if name == ".dw":
            for p in parts:
                chunks.append(Word(expr=parse(p)))

        # (ignore other directives)
        return

    parts = [p.strip() for p in line.replace(",", " ").split()]
    opcode = parts.pop(0)
    opds = [parse(p) for p in parts]
    chunks.append(Insn(name=opcode, opds=opds))
