#!/usr/bin/env python3

from collections import deque
from dataclasses import dataclass
from typing import *
import re
import sys

class Chunk:
    pass

@dataclass
class Separator(Chunk):
    pass

@dataclass
class Comment(Chunk):
    text: str

class Expr(Chunk):
    pass

class Resolvable:
    def __init__(self):
        self.addr: Optional[int] = None

@dataclass
class Paren(Expr):
    expr: Expr

@dataclass
class Reg(Expr):
    name: str

class Const(Expr):
    def __init__(self, s: str, base: int = 10):
        self.val = int(s, base)
        self.base = base
    def __repr__(self):  return str(self)
    def __str__(self):
        if self.base == 10:
            return str(self.val)
        if self.base == 2:
            return bin(self.val)
        if self.base == 16:
            return hex(self.val)

@dataclass
class Define(Chunk):
    name: str
    expr: Expr

@dataclass
class Label(Chunk, Resolvable):
    name: str
    is_jump_target: bool = False
    is_call_target: bool = False

valid_ref_name = re.compile("^[A-Za-z0-9_]+$")
@dataclass
class Ref(Chunk):
    name: str
    def __init__(self, name):
        self.name = name
        if not valid_ref_name.match(name):
            raise Exception("bad ref: " + name)

@dataclass
class Addr(Expr):
    expr: Expr

@dataclass
class Plus(Chunk):
    a: Expr
    b: Expr

@dataclass
class Minus(Chunk):
    a: Expr
    b: Expr

@dataclass
class HiByte(Expr):
    of: Expr

@dataclass
class LoByte(Expr):
    of: Expr

@dataclass
class Minus(Chunk):
    a: Expr
    b: Expr
    
@dataclass
class Directive(Chunk):
    name: str
    parts: list[Expr]

@dataclass
class Byte(Chunk):
    expr: Expr

@dataclass
class Word(Chunk):
    expr: Expr

@dataclass
class Insn(Chunk):
    name: str
    opds: list[Expr]

@dataclass
class CodeBlockBegin(Chunk):
    pass

@dataclass
class BlockEnd(Chunk):
    pass

chunks: deque[Chunk] = deque()

def parse(s: str) -> Expr:
    try:
        return Const(s, 10)
    except:
        pass

    if s.startswith("$"):
        return Const(s[1:], 16)
    if s.startswith("%"):
        return Const(s[1:], 2)

    if s.startswith("#"):
        return parse(s[1:])
    if s.startswith(">"):
        return HiByte(parse(s[1:]))
    if s.startswith("<"):
        return LoByte(parse(s[1:]))

    if s.startswith("(") and s.endswith(")"):
        return Paren(parse(s[1:-1]))

    if s in ("a", "x", "y"):
        return Reg(s)

    if "+" in s:
        s = [parse(p.strip()) for p in s.split("+")]
        (a, b) = s
        return Plus(a, b)
    if "-" in s:
        s = [parse(p.strip()) for p in s.split("-")]
        (a, b) = s
        return Minus(a, b)
    
    return Ref(s)

with open(sys.argv[1]) as txt:
    for line in txt:
        line = line.strip()

        if ";" in line:
            (line, comment) = line.split(";", 1)
            line = line.strip()
            comment = comment.strip()
            if "-------" in comment:
                chunks.append(Separator())
            else:
                chunks.append(Comment(comment))

        if "=" in line:
            (name, text) = line.split("=")
            name = name.strip()
            text = text.strip()
            # defines[name] = len(chunks)
            chunks.append(Define(name, parse(text)))
            continue

        if ":" in line:
            (name, line) = line.split(":")
            name = name.strip()
            line = line.strip()
            # labels[name] = len(chunks)
            chunks.append(Label(name))

        if not line:
            continue

        if line.startswith("."):
            parts = [p.strip() for p in line.replace(",", " ").split()]
            name = parts.pop(0)
            if name in (".index", ".mem", ".org"):
                continue
            if name == ".db":
                for p in parts:
                    chunks.append(Byte(parse(p)))
            if name == ".dw":
                for p in parts:
                    chunks.append(Word(parse(p)))

            # (ignore other directives)
            continue

        parts = [p.strip() for p in line.replace(",", " ").split()]
        opcode = parts.pop(0)
        opds = [parse(p) for p in parts]
        chunks.append(Insn(opcode, opds))

for i in range(len(chunks)):
    """
    Here we're looking for occurrences of: (copied from smbdis.asm)

        QuestionBlockRow_High:                              ;; [A]
            lda #$03    ;start on the fourth row            ;; [B]
            .db $2c     ;BIT instruction opcode             ;; [C]

        QuestionBlockRow_Low:                               ;; [D]
            lda #$07             ;start on the eighth row   ;; [E]
            pha                  ;(more logic follows)      ;; [F]

    The intent for the BIT instruction (C) is to do nothing but "eat" the next
    instruction (D) (the other LDA following it).

    The above results in this token stream:

    [ 1] Label(name='QuestionBlockRow_High', ...)
    [ 2] Comment(text='start on the fourth row')
    [ 3] Insn(name='lda', opds=[0x3])
    [ 4] Comment(text='BIT instruction opcode')
    [ 5] Byte(expr=0x2c)
    [ 6] Label(name='QuestionBlockRow_Low', ...)
    [ 7] Comment(text='start on the eighth row')
    [ 8] Insn(name='lda', opds=[0x7])
    [ 9] Comment(text='save whatever row to the stack for now')
    [10] Insn(name='pha', opds=[])

    We want to replace the `BIT` hack (#4-#5) with a short-jump to a new
    label, which will be added just after the `Insn` that follows it (#8):

    [ 1] Label(name='QuestionBlockRow_High', ...)
    [ 2] Comment(text='start on the fourth row')
    [ 3] Insn(name='lda', opds=[0x3])
    [**] Insn(name='bra', opds=[Ref(name='TMP_LABEL'))]
    [ 6] Label(name='QuestionBlockRow_Low', ...)
    [ 7] Comment(text='start on the eighth row')
    [ 8] Insn(name='lda', opds=[0x7])
    [**] Label(name='TMP_LABEL')
    [ 9] Comment(text='save whatever row to the stack for now')
    [10] Insn(name='pha', opds=[])
    
    """

    # Identify such bit hacks: it's a "Byte" (0x2c) preceded by a comment
    # like "BIT instruction opcode".  Not 100% foolproof but works for this project.
    c = chunks[i]
    if isinstance(c, Byte) and isinstance(c.expr, Const) and c.expr.val == 0x2c:
        b = chunks[i - 1]
        if isinstance(b, Comment) and "BIT" in b.text:
            # [B] Comment(text='BIT instruction opcode')
            # [C] Byte(expr=0x2c)
            # =>
            # [B'] Comment(text='Replace \'BIT instruction opcode\' hack:')
            # [C'] Insn(name='bra', opds=[Ref(NEWLABEL)])
            tmp_name = "_bit_hack_%d" % i
            chunks[i - 1] = Comment("Replace '%s' hack:" % (b.text))
            chunks[i] = Insn(name='bra', opds=[Ref(name=tmp_name)])
            j = i + 1
            while not isinstance(chunks[j], Insn):
                j += 1
            j += 1
            chunks.insert(j, Label(name=tmp_name))

# Done modifying instructions/data in the stream, so now
# we can link label/define names with offsets in the stream
labels: dict[str, Label] = {}
defines: dict[str, Define] = {}
for i in range(len(chunks)):
    c = chunks[i]
    if isinstance(c, Label):
        labels[c.name] = c
    if isinstance(c, Define):
        defines[c.name] = c

# Find jump/branch, and JSR targets, so we can start marking off "blocks"
for c in chunks:
    if isinstance(c, Insn):
        if c.name in ("jmp", "bpl", "bmi", "bcs", "bcc", "beq", "bne"):
            (target,) = c.opds
            if isinstance(target, Ref):
                labels[target.name].is_jump_target = True
        elif c.name == "jsr":
            (target,) = c.opds
            assert isinstance(target, Ref)
            labels[target.name].is_call_target = True

pass



# Transform "JumpEngine" tables into label blocks, and replace
# the "jsr JumpEngine" accordingly
# TODO

# Convert ".dw"'s and ".db"'s into DataBlocks
# TODO

# Find code blocks' start positions
i = 0
while i < len(chunks):
    c = chunks[i]
    if isinstance(c, Label) and (
            c.is_call_target
            or c.name in ("Start", "NonMaskableInterrupt")):
        chunks.insert(j, CodeBlockBegin())
        i += 1
    i += 1

# Shuffle blocks slightly so that they include comments above them
# TODO

for c in chunks:
    print(c)
