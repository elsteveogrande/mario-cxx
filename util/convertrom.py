#!/usr/bin/env python3.12

from collections import deque
from typing import *
import sys

from conv.chunks import *
from conv.parse import *
from conv.dump import *

chunks: deque[Chunk] = deque()
with open(sys.argv[1]) as txt:
    for line in txt:
        parse_line(chunks, line)

while isinstance(chunks[0], Comment):
    del chunks[0]

for i in range(len(chunks)):
    # Identify such bit hacks: it's a "Byte" (0x2c) preceded by a comment
    # like "BIT instruction opcode".  Not 100% foolproof but works for this project.
    c = chunks[i]
    if isinstance(c, Byte) and c.expr == Lit(0x2c, 16):
        b = chunks[i - 1]
        if isinstance(b, Comment) and "BIT" in b.text:
            # [B] Comment(text='BIT instruction opcode')
            # [C] Byte(expr=0x2c)
            # =>
            # [B'] Comment(text='Replace \'BIT instruction opcode\' hack:')
            # [C'] Insn(name='bra', opds=[Ref(NEWLABEL)])
            tmp_name = "_bit_hack_%d" % i
            chunks[i - 1] = Comment(text="Replace '%s' hack:" % (b.text))
            chunks[i] = Insn(name='bra', opds=[Ref(Label(tmp_name))])
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
        assert c.name
        labels[c.name] = c
    if isinstance(c, Define):
        assert c.name
        defines[c.name] = c

def pattern(i, types: list[Type]) -> bool:
    for j in range(len(types)):
        if not isinstance(chunks[i + j], types[j]):
            return False
    return True

# Absorb comments into their respective things
i = 0
cmts: list[Comment] = []
while i < len(chunks):
    ch = chunks[i]
    if isinstance(ch, Comment):
        cmts.append(ch)
        del chunks[i]
        continue
    elif cmts:
        chunks[i].comments += cmts
        cmts = []
        continue
    i += 1

# Remove "EndlessLoop" part, within Start:
#     EndlessLoop: jmp EndlessLoop ;endless loop, need I say more?
# On the real 6502 this will hang the CPU here forever, with activity
# taking place only in NMIs.  On our virtual CPU we'll simply be
# "done" with the Start code (NMIs will of course invoked periodically).
i = 0
while i < len(chunks):
    if pattern(i, [Label, Insn]) and chunks[i].name == "EndlessLoop":  # type: ignore[attr-defined]
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
    else:
        i += 1

# Transform "JumpEngine" tables
i = 0
while i < len(chunks):
    if pattern(i, [Insn]) and chunks[i].name == 'jsr' and "JumpEngine" in str(chunks[i].opds[0]):  # type: ignore[attr-defined]
        # replace "jsr JumpEngine"
        jsr = chunks[i]
        dbk = DispatchBlock()
        chunks[i] = dbk
        dbk.comments += jsr.comments
        while pattern(i, [DispatchBlock, Word]):    # absorb ".dw" 's into that
            w = chunks[i + 1]
            assert isinstance(w, Word)
            target = w.expr
            assert isinstance(target, Ref)
            assert isinstance(target.of.name, str)
            del chunks[i + 1]
            dbk.inner.append(target)
            labels[target.of.name].is_call_target = True
    i += 1

# Extract defines into a DefineBlock (only 1 will be produced)
defs = DefsBlock()
i = 0
while i < len(chunks):
    if pattern(i, [Define]):
        defs.inner.append(chunks[i])
        del chunks[i]
    else:
        i += 1

chunks.insert(0, defs)

# Convert ".dw"'s and ".db"'s into DataBlocks:

i = 0
while i < len(chunks):
    if pattern(i, [Label, Byte]):
        # replace label with a new block
        label = chunks[i]
        assert isinstance(label, Label)
        db = DataBlock(label)
        chunks[i] = db
        while pattern(i, [DataBlock, Byte]):
            db.inner.append(chunks[i + 1])
            del chunks[i + 1]
        continue
    if pattern(i, [Label, Word]):
        # replace label with a new block
        label = chunks[i]
        assert isinstance(label, Label)
        db = DataBlock(label)
        chunks[i] = DataBlock(label)
        chunks[i] = db
        while pattern(i, [DataBlock, Word]):
            db.inner.append(chunks[i + 1])
            del chunks[i + 1]
        continue
    i += 1

i = 0
while i < len(chunks):
    if pattern(i, [Label, DataBlock]):
        label = chunks[i]
        assert isinstance(label, Label)
        chunks[i] = DataBlock(label=label)
    i += 1

# Find code blocks' start positions

i = 0
while i < len(chunks):
    ch = chunks[i]
    if isinstance(ch, Label):
        chunks[i] = CodeBlock(label=ch)
        chunks[i].comments = ch.comments
        ch.comments = []
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
    assert isinstance(c, CodeBlock)
    d = chunks[i + 1]
    assert isinstance(d, Label)
    c.label = d
    c.label.code_block = c
    del chunks[i + 1]

i = 0
while i < len(chunks):
    cb = chunks[i]
    if not isinstance(cb, CodeBlock):
        i += 1
        continue
    cbnext = chunks[i + 1]
    if type(cbnext) not in (Insn, DispatchBlock):
        i += 1
        continue
    cb.inner.append(cbnext)
    del chunks[i + 1]


# ######################################
# ######################################
# ######################################
# ######################################
# ######################################
# ######################################


all_blocks: list[Block] = [c for c in chunks if isinstance(c, Block)]
code_blocks: list[CodeBlock] = [b for b in all_blocks if isinstance(b, CodeBlock)]
data_blocks: list[DataBlock] = [b for b in all_blocks if isinstance(b, DataBlock)]

i = 0
del labels["JumpEngine"]
while i < len(code_blocks):
    cb = code_blocks[i]
    if cb.label.name == "JumpEngine":
        del code_blocks[i]
        break
    i += 1

# # Identify code blocks: call targets, and jump/branch targets
# code_map: dict[str, CodeBlock] = dict((cb.label.name, cb) for cb in code_blocks)
# func_map: dict[str, CodeBlock] = {}
# jump_map: dict[str, CodeBlock] = {}
# cb = code_map["Start"]
# func_map[cb.label.name] = cb
# cb = code_map["NonMaskableInterrupt"]
# func_map[cb.label.name] = cb
# func_graph: dict[str, set[str]] = {}

# print(func_map.keys())
# print(jump_map.keys())
# raise

labels["Start"].is_call_target = True
labels["NonMaskableInterrupt"].is_call_target = True
for c in chunks:
    if isinstance(c, Insn):
        if c.name in ("jmp", "bra", "bpl", "bmi", "bcs", "bcc", "beq", "bne"):
            (target,) = c.opds
            if isinstance(target, Ref):
                labels[target.of.name].is_jump_target = True
        elif c.name == "jsr":
            (target,) = c.opds
            assert isinstance(target, Ref)
            labels[target.of.name].is_call_target = True

prev: Optional[CodeBlock] = None
for c in code_blocks:
    if prev and not (isinstance(prev.inner[-1], DispatchBlock)
                     or (isinstance(prev.inner[-1], Insn) and prev.inner[-1].is_terminal())):
        prev.inner.append(Insn(name="jmp", opds=[Ref(c.label)]))
    prev = c

f = sys.stderr

def p(c: Union[str, Chunk], proto=False):
    if isinstance(c, Chunk):
        s = c.render(labels, defines, proto=proto)
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
    offset = 32768
    for d in data_blocks:
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
    for d in defs.inner:
        assert isinstance(d, Define)
        for cm in d.comments:
            p(cm)
        p(d)

    p("")
    for c in code_blocks:
        for cm in c.comments:
            p(cm)
        p(c, proto=True)


with open("main.cc", "w") as cc:
    f = cc
    p("#include <cstddef>")
    p("#include \"main.h\"")

    p("")
    p("G g {")
    for d in data_blocks:
        for cm in d.comments:
            p(cm)
        p(d)
    p("};")
    p("Memory::ROM gROM((byte*) &g);")

    p("")
    p("void preStart() {                   \n"
      "    m.addRegion(                    \n"
      "        Memory::Region {            \n"
      "            gROM, 0x8000, 0x7fff });\n"
      "}")

    p("")
    for c in code_blocks:
        for cm in c.comments:
            p(cm)
        p(c)
