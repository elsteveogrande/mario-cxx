#!/usr/bin/env python3

import sys
from typing import *
from conv.chunks import *
from conv.render import *

Gen = Generator[Chunk, None, None]

class Parser:
    def __init__(self, path: str) -> None:
        self.path = path

    def chunk(self, s):
        try:
            return Lit(val=int(s), base=10)
        except:
            pass

        if s.startswith("$"):
            return Lit(val=int(s[1:], 16), base=16)
        if s.startswith("%"):
            return Lit(val=int(s[1:], 2), base=2)

        if s.startswith("#"):
            return Imm(val=self.chunk(s[1:]))
        if s.startswith(">"):
            return HiByte(of=self.chunk(s[1:]))
        if s.startswith("<"):
            return LoByte(of=self.chunk(s[1:]))

        if s.startswith("(") and s.endswith(")"):
            return Paren(expr=self.chunk(s[1:-1]))

        if s in ("a", "x", "y"):
            return Reg(name=s)

        if "+" in s:
            (xa, xb) = [self.chunk(p.strip()) for p in s.split("+")]
            return Plus(a=xa, b=xb)
        if "-" in s:
            (xa, xb) = [self.chunk(p.strip()) for p in s.split("-")]
            return Minus(a=xa, b=xb)
        
        return Ref(Unresolved(s))

    def chunk_line(self, line) -> Gen:
        line = line.strip()
        label = ""
        comment = ""
        if ";" in line:
            (line, comm) = line.split(";", 1)
            line = line.strip()
            comm = comm.strip()
            if not ("-------" in comm):
                comment = comm
        if ":" in line:
            (label, line) = line.split(":")
            label = label.strip()
            line = line.strip()
        if label:
            yield Label(name=label)
        if comment:
            yield Comment(text=comment)
        if not line:
            return
        if "=" in line:
            (name, text) = line.split("=")
            name = name.strip()
            text = text.strip()
            yield Define(name=name, expr=self.chunk(text))
        elif line.startswith("."):
            parts = [p.strip() for p in line.replace(",", " ").split()]
            name = parts.pop(0)
            if name == ".db":
                for p in parts: yield Byte(expr=self.chunk(p))
            elif name == ".dw":
                for p in parts: yield Word(expr=self.chunk(p))
            else:
                yield Directive(name, parts)
        else:
            parts = [p.strip() for p in line.replace(",", " ").split()]
            opcode = parts.pop(0)
            opds = [self.chunk(p) for p in parts]
            yield Insn(name=opcode, opds=opds)

    def chunk_file(self) -> Gen:  # source
        for line in open(self.path, "r"):
            yield from self.chunk_line(line)

    def find_names(self, gen: Gen, names: dict[str, Named]) -> None:  # sink
        for c in gen:
            if isinstance(c, Define) or isinstance(c, Label):
                names[c.name] = c

    def drop_preamble(self, gen: Gen) -> Gen:
        c: Chunk = next(gen)
        while isinstance(c, Comment):
            c = next(gen)
        while c:
            yield c
            c = next(gen, None)  # type: ignore

    def absorb_comments(self, gen: Gen) -> Gen:
        comments: list[Comment] = []
        for c in gen:
            if isinstance(c, Comment):
                comments.append(c)
                continue
            c.comments = comments
            comments = []
            yield c

    def add_defs_block(self, gen: Gen) -> Gen:
        yield DefsBlock()
        yield from gen

    def munge2(self, gen: Gen, ta: Type, tb: Type, func: Any, cond: Any = None) -> Gen:
        if not cond:
            cond = lambda a, b: True
        a: Optional[Chunk] = next(gen, None)
        b: Optional[Chunk] = next(gen, None)
        while a and b:
            if isinstance(a, ta) and isinstance(b, tb) and cond(a, b):
                a = func(a, b)
            else:
                yield a
                a = b
            b = next(gen, None)
        if a: yield a
        if b: yield b

    def absorb(self, gen: Gen, ta: Type, tb: Type) -> Gen:
        yield from self.munge2(gen, ta, tb,
                               func=lambda a, b: a.add(b))
        
    def absorb_defs(self, gen: Gen) -> Gen:
        yield from self.absorb(gen, DefsBlock, Define)

    def replace_2c_bytes(self, gen: Gen) -> Gen:
        """
        Patterns like:
            (label:BlockBufferColli_Head)           BlockBufferColli_Head:
            ['lda', (imm:(lit:0x0))]                    lda #$00       ;set flag to return vertical coordinate
            (byte:(lit:0x2c))                           .db $2c        ;BIT instruction opcode
            (label:BlockBufferColli_Side)           BlockBufferColli_Side:
            ['lda', (imm:(lit:0x1))]                    lda #$01       ;set flag to return horizontal coordinate
            ['ldx', (imm:(lit:0x0))]                    ldx #$00       ;set offset for player object

        become:
            (label:BlockBufferColli_Head)
            ['lda', (imm:(lit:0x0))]
            ['jmp', (ref:(label:BlockBufferColli_Side_Skip))]
            (label:BlockBufferColli_Side)
            ['lda', (imm:(lit:0x1))]
            (label:BlockBufferColli_Side_Skip)
            ['ldx', (imm:(lit:0x0))]
       """
        a: Optional[Chunk] = next(gen, None)
        b: Optional[Chunk] = next(gen, None)
        c: Optional[Chunk] = next(gen, None)
        while a and b and c:
            if isinstance(a, Byte) and str(a) == "(byte:(lit:0x2c))" and isinstance(b, Label) and isinstance(c, Insn):
                skip = Label(b.name + "_Skip")
                yield Insn(name="jmp", opds=[Ref(skip)])
                yield b
                yield c
                a = skip
                b = next(gen, None)
                c = next(gen, None)
            else:
                yield a
                a, b, c = b, c, next(gen, None)            
        if a: yield a
        if b: yield b
        if c: yield c

    def add_jump_switch(self, gen: Gen) -> Gen:
        for c in gen:
            # ['jsr', (ref:(unresolved:JumpEngine))]
            if isinstance(c, Insn) and c.name == "jsr" and "JumpEngine" in str(c):
                yield DispatchBlock()
            else:
                yield c

    def drop_endless_loop(self, gen: Gen) -> Gen:
        """
        (label:EndlessLoop)
        ['jmp', (ref:(unresolved:EndlessLoop))]
        """
        yield from self.munge2(gen, Label, Insn,
                               cond=lambda a, b: b.name == "jmp" and (b.opds and (b.opds[0].of.name == a.name)),
                               func=lambda a, b: Insn(name="end", opds=[]))

    def drop_vectors(self, gen: Gen) -> Gen:
        for x in gen:
            """
            """
            if isinstance(x, Word) and str(x) in set([
                    "(word:(ref:(unresolved:NonMaskableInterrupt)))",
                    "(word:(ref:(unresolved:Start)))",
                    "(word:(lit:0xfff0))"]):
                continue
            else:
                yield x

    def create_data_blocks(self, gen: Gen, dtype: Type) -> Gen:
        yield from self.munge2(gen, Label, dtype,
                               func=lambda a, b: DataBlock(a, comments=a.comments).add(b))

    def absorb_data(self, gen: Gen, dtype: Type) -> Gen:
        yield from self.absorb(gen, DataBlock, dtype)

    def absorb_into_switch(self, gen: Gen) -> Gen:
        yield from self.absorb(gen, DispatchBlock, Word)

    def create_code_blocks(self, gen: Gen) -> Gen:
        yield from self.munge2(gen, Label, Insn,
                               func=lambda a, b: CodeBlock(a, comments=a.comments).add(b))

    def absorb_insns(self, gen: Gen) -> Gen:
        yield from self.absorb(gen, CodeBlock, Insn)

    def resolve_names(self, gen: Gen, names: dict[str, Named]) -> Gen:
        for c in gen:
            yield c.resolve(names)

    def label_targets(self, gen: Gen) -> Gen:
        for c in gen:
            yield c

    def make_functions(self, gen: Gen) -> Gen:
        for c in gen:
            yield c

    def absorb_func_code(self, gen: Gen) -> Gen:
        for c in gen:
            yield c

    def drop_ff_bytes(self, gen: Gen) -> Gen:
        for c in gen:
            if isinstance(c, Byte) and str(c) == "(byte:(lit:0xff))":
                pass
            else:
                yield c

    def create_data_groups(self, gen: Gen) -> Gen:
        for c in gen:
            if isinstance(c, Label):
                yield DataGroup(label=c)
            else:
                yield c

    def drop_jump_engine(self, gen: Gen) -> Gen:
        for c in gen:
            if isinstance(c, CodeBlock) and str(c) == "(codeblock:(label:JumpEngine))":
                pass
            else:
                yield c

    def parse(self, names: dict[str, Named]) -> Gen:
        gen = self.chunk_file()
        self.find_names(gen, names)

        gen = self.chunk_file()
        gen = self.drop_preamble(gen)
        gen = self.absorb_comments(gen)
        gen = self.add_defs_block(gen)
        gen = self.absorb_defs(gen)
        gen = self.replace_2c_bytes(gen)
        gen = self.add_jump_switch(gen)
        gen = self.drop_endless_loop(gen)
        gen = self.drop_vectors(gen)
        gen = self.create_data_blocks(gen, Byte)
        gen = self.create_data_blocks(gen, Word)
        gen = self.absorb_data(gen, Byte)
        gen = self.absorb_data(gen, Word)
        gen = self.absorb_into_switch(gen)
        gen = self.create_code_blocks(gen)
        gen = self.absorb_insns(gen)
        gen = self.resolve_names(gen, names)
        gen = self.label_targets(gen)
        gen = self.make_functions(gen)
        gen = self.absorb_func_code(gen)
        gen = self.drop_ff_bytes(gen)
        gen = self.create_data_groups(gen)
        gen = self.drop_jump_engine(gen)
        yield from gen


def main(args) -> None:
    p = Parser(args[1])
    names: dict[str, Named] = {}
    code: list[CodeBlock] = []
    data: list[DataBlock] = []
    defs: list[DefsBlock] = []
    for x in p.parse(names):
        if   isinstance(x, CodeBlock):  code.append(x)
        elif isinstance(x, DataBlock):  data.append(x)
        elif isinstance(x, DefsBlock):  defs.append(x)
        elif isinstance(x, Directive):  pass
        else:                           raise Exception(str(x))
    assert len(defs) == 1
    Renderer(defs[0], data, code, names).render()

if __name__ == "__main__":
    main(sys.argv)
