#!/usr/bin/env python3

from collections import deque
from dataclasses import dataclass, field
from typing import *
import re
import sys

@dataclass
class Chunk:
    comments: list[str] = field(default_factory=lambda: [])

@dataclass
class Separator(Chunk):
    pass

@dataclass
class Comment(Chunk):
    text: str = None

class Expr(Chunk):
    pass

@dataclass
class Paren(Expr):
    expr: Expr = None

    def render(self):
        return "(%s)" % (self.expr.render())

@dataclass
class Reg(Expr):
    name: str = None
    def render(self):
        return self.name

class Imm(Expr):
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
    
    def render(self):
        return str(self)

@dataclass
class Define(Chunk):
    name: str = None
    expr: Expr = None

@dataclass
class Label(Chunk):
    name: str = None
    is_jump_target: bool = False
    is_call_target: bool = False
    code_block: Optional["CodeBlock"] = None

    def render(self):
        if self.is_jump_target or self.is_call_target:
            return self.name
        return self.name

valid_ref_name = re.compile("^[A-Za-z0-9_]+$")
@dataclass
class Ref(Chunk):
    name: str = None
    def __init__(self, name):
        self.name = name
        self.comments = []
        if not valid_ref_name.match(name):
            raise Exception("bad ref: " + name)

    def render(self):
        if self.name in labels:
            return "offsetof(G, %s)" % (self.name)
        else:
            return "K::%s" % (self.name)

@dataclass
class Plus(Chunk):
    a: Expr = None
    b: Expr = None

    def render(self):
        return "((%s) + (%s))" % (self.a.render(), self.b.render())

@dataclass
class Minus(Chunk):
    a: Expr = None
    b: Expr = None

    def render(self):
        return "((%s) - (%s))" % (self.a.render(), self.b.render())

@dataclass
class HiByte(Expr):
    of: Expr = None
    def render(self):
        return "HI8(%s)" % (self.of.render())

@dataclass
class LoByte(Expr):
    of: Expr = None
    def render(self):
        return "LO8(%s)" % (self.of.render())

@dataclass
class Directive(Chunk):
    name: str = None
    parts: list[Expr] = None

@dataclass
class Byte(Chunk):
    expr: Expr = None

@dataclass
class Word(Chunk):
    expr: Expr = None

@dataclass
class Insn(Chunk):
    name: str = None
    opds: list[Expr] = None

    def target(self):
        assert len(self.opds) == 1
        assert isinstance(self.opds[0], Ref)
        return self.opds[0].name
    
    def dst(self):
        return str(self.opds)

    def src(self):
        return str(self.opds)

    def srcdst(self):
        return str(self.opds)

    def render(self):
        if self.name == "end":
            return "return 0"
        if self.name == "and":
            opds = ", ".join(x.render() for x in self.opds)
            return "%sa(%s)" % (self.name, opds)
        if self.name in {"jmp", "jsr", "bra", "bcc", "bcs", "bmi", "bpl", "beq", "bne"}:
            assert len(self.opds) == 1
            target = self.opds[0].name
            return "%s(%s)" % (self.name.upper(), target)

        opds = ", ".join(x.render() for x in self.opds)
        return "%s(%s)" % (self.name, opds)

@dataclass
class Block(Chunk):
    inner: list[Chunk] = None

@dataclass
class BlockEnd(Chunk):
    pass

@dataclass
class PreambleBlock(Block):
    pass

@dataclass
class CodeBlock(Block):
    label: Optional[Label] = None
    next: Optional["CodeBlock"] = None

    def render(self, proto=False):
        if (proto):
            return "int %s();" % (self.label.name)
        ret = "int %s() {" % (self.label.name)
        ret += "\n"
        for x in self.inner:
            for c in x.comments:
                ret += "    // %s\n" % (c)
            ret += "    "
            ret += x.render()
            ret += ";\n"
        ret += "}\n"
        return ret

@dataclass
class DispatchBlock(Block):
    pass

@dataclass
class DataBlock(Block):
    label: Label = None
    def render(self, proto=False):
        assert len(self.inner) > 0
        dt = "byte" if isinstance(self.inner[0], Byte) else "word"
        x = [b.expr.render() for b in self.inner]
        x = [("%s" % (b)) for b in x]
        x = ", ".join(x)
        if proto:
            return ("    %s const %s[%d];" % (dt, self.label.name, len(self.inner)))
        return ("    {%s}," % (x))

@dataclass
class DefsBlock(Block):
    pass

chunks: deque[Chunk] = deque()

def parse(s: str) -> Expr:
    try:
        return Imm(s, 10)
    except:
        pass

    if s.startswith("$"):
        return Imm(s[1:], 16)
    if s.startswith("%"):
        return Imm(s[1:], 2)

    if s.startswith("#"):
        return parse(s[1:])
    if s.startswith(">"):
        return HiByte(of=parse(s[1:]))
    if s.startswith("<"):
        return LoByte(of=parse(s[1:]))

    if s.startswith("(") and s.endswith(")"):
        return Paren(expr=parse(s[1:-1]))

    if s in ("a", "x", "y"):
        return Reg(name=s)

    if "+" in s:
        s = [parse(p.strip()) for p in s.split("+")]
        (a, b) = s
        return Plus(a=a, b=b)
    if "-" in s:
        s = [parse(p.strip()) for p in s.split("-")]
        (a, b) = s
        return Minus(a=a, b=b)
    
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
                chunks.append(Comment(text=comment))

        if "=" in line:
            (name, text) = line.split("=")
            name = name.strip()
            text = text.strip()
            # defines[name] = len(chunks)
            chunks.append(Define(name=name, expr=parse(text)))
            continue

        if ":" in line:
            (name, line) = line.split(":")
            name = name.strip()
            line = line.strip()
            # labels[name] = len(chunks)
            chunks.append(Label(name=name))

        if not line:
            continue

        if line.startswith("."):
            parts = [p.strip() for p in line.replace(",", " ").split()]
            name = parts.pop(0)
            if name in (".index", ".mem", ".org"):
                continue
            if name == ".db":
                for p in parts:
                    chunks.append(Byte(expr=parse(p)))
            if name == ".dw":
                for p in parts:
                    chunks.append(Word(expr=parse(p)))

            # (ignore other directives)
            continue

        parts = [p.strip() for p in line.replace(",", " ").split()]
        opcode = parts.pop(0)
        opds = [parse(p) for p in parts]
        chunks.append(Insn(name=opcode, opds=opds))

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
    if isinstance(c, Byte) and isinstance(c.expr, Imm) and c.expr.val == 0x2c:
        b = chunks[i - 1]
        if isinstance(b, Comment) and "BIT" in b.text:
            # [B] Comment(text='BIT instruction opcode')
            # [C] Byte(expr=0x2c)
            # =>
            # [B'] Comment(text='Replace \'BIT instruction opcode\' hack:')
            # [C'] Insn(name='bra', opds=[Ref(NEWLABEL)])
            tmp_name = "_bit_hack_%d" % i
            chunks[i - 1] = Comment(text="Replace '%s' hack:" % (b.text))
            chunks[i] = Insn(name='bra', opds=[Ref(name=tmp_name)])
            j = i + 1
            while not isinstance(chunks[j], Insn):
                j += 1
            j += 1
            chunks.insert(j, Label(name=tmp_name))

labels: dict[str, Label] = {}
defines: dict[str, Define] = {}
for i in range(len(chunks)):
    c = chunks[i]
    if isinstance(c, Label):
        labels[c.name] = c
    if isinstance(c, Define):
        defines[c.name] = c

def pattern(i, types: list[Type]) -> bool:
    for j in range(len(types)):
        if not isinstance(chunks[i + j], types[j]):
            return False
    return True

# Extract first comments into a PreambleBlock (only 1 will be produced)
pre = PreambleBlock(inner=[])
chunks.insert(0, pre)
while pattern(0, [PreambleBlock, Comment]):
    pre.inner.append(chunks[1])
    del chunks[1]

# Absorb comments into their respective things
i = 0
cmts: list[str] = []
while i < len(chunks):
    if pattern(i, [Comment]):
        cmts.append(chunks[i].text)
        del chunks[i]
    elif (not pattern(i, [Separator])) and cmts:
        chunks[i].comments += cmts
        cmts = []
    i += 1

# Remove "EndlessLoop" part, within Start:
#     EndlessLoop: jmp EndlessLoop ;endless loop, need I say more?
# On the real 6502 this will hang the CPU here forever, with activity
# taking place only in NMIs.  On our virtual CPU we'll simply be
# "done" with the Start code (NMIs are will of course invoked periodically).
i = 0
while i < len(chunks):
    if pattern(i, [Label, Insn]) and chunks[i].name == "EndlessLoop":
        # Replace these two chunks with just one
        del chunks[i]
        chunks[i] = Insn(name="end", opds=[])
        break  # there's only one such instance of this
    else:
        i += 1

# Remove other stray comments; simplify the rest of the code below
i = 0
while i < len(chunks):
    if pattern(i, [Comment]):
        del chunks[i]
    elif pattern(i, [Separator]):
        del chunks[i]
    else:
        i += 1

# Transform "JumpEngine" tables
i = 0
while i < len(chunks):
    if pattern(i, [Insn]) and chunks[i].name == 'jsr' and chunks[i].opds[0].name == 'JumpEngine':
        chunks[i] = DispatchBlock(inner=[])         # replace "jsr JumpEngine"
        while pattern(i, [DispatchBlock, Word]):    # absorb ".dw" 's into that
            target = chunks[i + 1].expr
            del chunks[i + 1]
            chunks[i].inner.append(target)
            labels[target.name].is_call_target = True
    i += 1

# Drop "JumpEngine" routine
i = 0
while i < len(chunks):
    if pattern(i, [Label, Insn]) and chunks[i].name == 'JumpEngine':
        while pattern(i, [Label, Insn]) and chunks[i].name == 'JumpEngine':
            del chunks[i + 1]
        del chunks[i]
        break
    i += 1

# Find jump/branch, and JSR targets, so we can start marking off "blocks"
labels["Start"].is_jump_target = True
labels["NonMaskableInterrupt"].is_call_target = True
for c in chunks:
    if isinstance(c, Insn):
        if c.name in ("jmp", "bra", "bpl", "bmi", "bcs", "bcc", "beq", "bne"):
            (target,) = c.opds
            if isinstance(target, Ref):
                labels[target.name].is_jump_target = True
        elif c.name == "jsr":
            (target,) = c.opds
            assert isinstance(target, Ref)
            labels[target.name].is_call_target = True

# Extract defines into a DefineBlock (only 1 will be produced)
defs = DefsBlock(inner=[])
i = 0
while i < len(chunks):
    if pattern(i, [Define]):
        defs.inner.append(chunks[i])
        del chunks[i]
    else:
        i += 1

chunks.insert(1, defs)

# Convert ".dw"'s and ".db"'s into DataBlocks
i = 0
while i < len(chunks):
    if pattern(i, [Label, Byte]):
        # replace label with a new block
        label = chunks[i]
        chunks[i] = DataBlock(label=label, inner=[])
        while pattern(i, [DataBlock, Byte]):
            chunks[i].inner.append(chunks[i + 1])
            del chunks[i + 1]
        continue
    if pattern(i, [Label, Word]):
        # replace label with a new block
        label = chunks[i]
        chunks[i] = DataBlock(label=label, inner=[])
        while pattern(i, [DataBlock, Word]):
            chunks[i].inner.append(chunks[i + 1])
            del chunks[i + 1]
        continue
    i += 1

# i = 0
# while i < len(chunks):
#     print((i, str(chunks[i])))
#     i += 1
# raise

i = 0
while i < len(chunks):
    if pattern(i, [Label, DataBlock]):
        label = chunks[i]
        chunks[i] = DataBlock(label=label, inner=[Byte(expr=Imm("0"))])
    i += 1

# Find code blocks' start positions
i = 0
while i < len(chunks):
    if pattern(i, [Label]):
        label = chunks[i]
        chunks[i] = CodeBlock(label=label, inner=[])
    i += 1

# Some subroutines just flow into the next subroutine just after it.
# In C++ these will become functions, but functions can't just flow
# from one into the next.  Find these and issue calls to the latter
# function (and return after the call).

i = 0
while i < len(chunks):
    if pattern(i - 1, [Insn, CodeBlock, Label]):
        b = chunks[i - 1]
        c = chunks[i]
        d = chunks[i + 1]
        if d.is_call_target:
            if b.name not in {"rti", "rts", "bra", "jmp"}:
                chunks.insert(i, Insn(name="jmp", opds=[Ref(name=d.name)]))
    i += 1

# At this point, CodeBlocks are defined and added to their locations in the stream,
# but they are still in-line with their instructions (i.e. their insns are not
# grouped within the code blocks' `inner` lists).
    
i = 0
while i < len(chunks):
    if not pattern(i, [CodeBlock, Label]):
        i += 1
        continue
    c = chunks[i]
    c.label = chunks[i + 1]
    c.label.code_block = c
    del chunks[i + 1]

i = 0
while i < len(chunks):
    if not (pattern(i, [CodeBlock, Label]) or pattern(i, [CodeBlock, Insn])):
        i += 1
        continue
    c = chunks[i]
    c.inner.append(chunks[i + 1])
    del chunks[i + 1]

all_blocks: list[Block] = [c for c in chunks if isinstance(c, Block)]
pre_block: PreambleBlock = all_blocks[0]
defs_block: DefsBlock = all_blocks[1]
code_blocks: list[CodeBlock] = [b for b in all_blocks if isinstance(b, CodeBlock)]
data_blocks: list[DataBlock] = [b for b in all_blocks if isinstance(b, DataBlock)]

prev: Optional[CodeBlock] = None
for c in code_blocks:
    if prev:
        prev.inner.append(Insn(name="jmp", opds=[Ref(c.label.name)]))
    prev = c

f = sys.stderr

def p(*args):
    print(*args, file=f)

with open("main.h", "w") as h:
    f = h
    p("#pragma once")
    p("#include \"util/base.h\"")
    p()

    p()
    p("struct G {")
    p("    byte space[32768];")
    for d in data_blocks:
        p(d.render(proto=True))
    p("} __attribute__((__packed__));")
    p("extern G g;")

    p()
    p("struct K {")
    for d in defs_block.inner:
        if ((isinstance(d.expr, Imm) and d.expr.val >= 0x100) or
            ("offsetof" in d.expr.render())):
            p("    static constexpr word const %s = word(%s);" % (d.name, d.expr.render()))
        else:
            p("    static constexpr byte const %s = byte(%s);" % (d.name, d.expr.render()))
    p("};")


with open("main.cc", "w") as cc:
    f = cc
    p("#include <cstddef>")
    p("#include \"main.h\"")

    p()
    p("G g {")
    p("    {},  // space is zeroed")
    for d in data_blocks:
        p(d.render())
    p("};")


# for d in data_blocks:
#     print(d.render())

# for c in code_blocks:
#     print(c.render(proto=True))

# for c in code_blocks:
#     for comment in c.comments:
#         print(c.render())
#     print(c.render())
