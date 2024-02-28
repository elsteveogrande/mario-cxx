#!/usr/bin/env python3

import sys
from typing import *
from conv.chunks import *

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
        a: Optional[Chunk] = next(gen, None)
        b: Optional[Chunk] = next(gen, None)
        c: Optional[Chunk] = next(gen, None)
        while a and b and c:
            if isinstance(a, Byte) and (a.expr == Lit(0x2c, 16)) and isinstance(b, Label) and isinstance(c, Insn):
                skip = Label(b.name + "Skip")
                yield Insn(name="jmp", opds=[Ref(skip)])
                a = b
                b = skip
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

    def resolve_rec(self, c: Chunk, names: dict[str, Named]) -> Chunk:
        if isinstance(c, Unresolved):
            return names[c.name]
        if isinstance(c, Chunk):
            for a in c.attrs:
                u = c.__getattribute__(a)
                c.__setattr__(a, self.resolve_rec(u, names))
            return c
        if isinstance(c, list):
            return [self.resolve_rec(x, names) for x in c]
        else:
            return c

    def resolve_defs(self, gen: Gen, names: dict[str, Named]) -> Gen:
        for c in gen:
            yield self.resolve_rec(c, names)

    def label_targets(self, gen: Gen) -> Gen:
        for c in gen:
            yield c

    def make_functions(self, gen: Gen) -> Gen:
        for c in gen:
            yield c

    def absorb_func_code(self, gen: Gen) -> Gen:
        for c in gen:
            yield c

    def parse(self) -> Gen:
        names: dict[str, Named] = {}
        gen = self.chunk_file()
        self.find_names(gen, names)

        gen = self.chunk_file()
        gen = self.drop_preamble(gen)
        gen = self.absorb_comments(gen)
        gen = self.add_defs_block(gen)
        gen = self.absorb_defs(gen)
        gen = self.replace_2c_bytes(gen)
        gen = self.add_jump_switch(gen)
        gen = self.create_data_blocks(gen, Byte)
        gen = self.create_data_blocks(gen, Word)
        gen = self.absorb_data(gen, Byte)
        gen = self.absorb_data(gen, Word)
        gen = self.absorb_into_switch(gen)
        gen = self.create_code_blocks(gen)
        gen = self.absorb_insns(gen)
        gen = self.resolve_defs(gen, names)
        gen = self.label_targets(gen)
        gen = self.make_functions(gen)
        gen = self.absorb_func_code(gen)
        yield from gen


def main(args):
    p = Parser(args[1])
    for x in p.parse():
        print(x)


if __name__ == "__main__":
    main(sys.argv)
