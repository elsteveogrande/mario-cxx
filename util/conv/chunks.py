import re

from typing import *

class Chunk:
    attrs = ["comments"]
    def __init__(self, comments: Optional[list["Comment"]] = None) -> None:
        self.comments: list["Comment"] = comments or []
    def render(self, proto=False) -> str:
        raise NotImplementedError(str(type(self)))
    def resolve(self, names: dict[str, "Named"]) -> "Chunk":
        raise NotImplementedError(str(type(self)))

class Comment(Chunk):
    attrs = ["text"]
    def __init__(self, text: str) -> None:
        super().__init__()
        assert isinstance(text, str)
        self.text = text
    def render(self, proto=False) -> str:
        assert isinstance(self.text, str)
        return "// " + self.text
    def __str__(self):  return "(comment:%s)" % (self.text[:50])
    def __repr__(self): return str(self)

class Expr(Chunk):
    attrs = ["comments"]
    pass

class Op(Expr):
    attrs = Expr.attrs + []
    pass

class Reg(Expr):
    attrs = Expr.attrs + ["name"]
    def __init__(self, name: str, **kwargs) -> None:
        super().__init__(**kwargs)
        self.name = name
    def render(self, proto=False) -> str:
        return self.name
    def __str__(self):  return "(reg:%s)" % (self.name)
    def __repr__(self): return str(self)
    def resolve(self, names: dict[str, "Named"]) -> Chunk:
        return self

class Paren(Op):
    attrs = Op.attrs + ["expr"]
    def __init__(self, expr: Expr, **kwargs) -> None:
        super().__init__(**kwargs)
        self.expr = expr
    def render(self, proto=False) -> str:
        return "(%s)" % (self.expr.render())
    def __str__(self):  return "(paren:(%s))" % (self.expr)
    def __repr__(self): return str(self)
    def resolve(self, names: dict[str, "Named"]) -> Chunk:
        self.expr = self.expr.resolve(names)  # type: ignore
        return self

class Lit(Expr):
    """
    <class 'conv.chunks.Lit'> comments:[] val:8192 base:16
    """
    attrs = Expr.attrs + ["val", "base"]
    def __init__(self, val: int, base: int, **kwargs) -> None:
        super().__init__(**kwargs)
        self.val = val
        self.base = base
    def render(self, proto=False) -> str:
        if self.base == 10:
            return str(self.val)
        if self.base == 2:
            return bin(self.val)
        if self.base == 16:
            return hex(self.val)
        assert False
    def __str__(self):  return "(lit:%s)" % (self.render())
    def __repr__(self): return str(self)
    def resolve(self, names: dict[str, "Named"]) -> Chunk:
        return self

class Imm(Expr):
    def __init__(self, val: Expr, **kwargs) -> None:
        super().__init__(**kwargs)
        self.val = val
    def render(self, proto=False):
        return "IMM(" + self.val.render() + ")"
    def __str__(self):  return "(imm:%s)" % (self.val)
    def __repr__(self): return str(self)
    def resolve(self, names: dict[str, "Named"]) -> Chunk:
        self.val = self.val.resolve(names)  # type: ignore
        return self

class Named(Chunk):
    attrs = Chunk.attrs + ["name"]
    def __init__(self, name: str, **kwargs) -> None:
        super().__init__(**kwargs)
        self.name = name

class Unresolved(Named):
    attrs = Named.attrs
    def __init__(self, name: str, **kwargs) -> None:
        super().__init__(name, **kwargs)
    def __str__(self):  return "(unresolved:%s)" % (self.name)
    def __repr__(self): return str(self)
    def resolve(self, names: dict[str, "Named"]) -> Chunk:
        ret = names[self.name]
        assert not isinstance(ret, Unresolved)
        return ret

class Define(Named):
    attrs = Named.attrs + ["expr"]
    def __init__(self, name: str, expr: Expr, **kwargs) -> None:
        super().__init__(name, **kwargs)
        self.expr = expr
    def render(self, proto=False) -> str:
        return "#define %40s %20s" % (self.name, self.expr.render())
    def __str__(self):  return "(define:%s=%s)" % (self.name, self.expr)
    def __repr__(self): return str(self)
    def resolve(self, names: dict[str, "Named"]) -> Chunk:
        self.expr = self.expr.resolve(names)  # type: ignore
        return self

class Label(Named):
    attrs = Named.attrs
    def __init__(self, name: str, **kwargs) -> None:
        super().__init__(name, **kwargs)
        self.is_jump_target: bool = False
        self.is_call_target: bool = False
        self.code_block: Optional["CodeBlock"] = None
    def __hash__(self):   return hash(self.name)
    def __eq__(self, x):  return self.name == x.name
    def render(self, proto=False) -> str:
        return self.name
    def __str__(self):  return "(label:%s)" % (self.name)
    def __repr__(self): return str(self)
    def resolve(self, names: dict[str, "Named"]) -> Chunk:
        return self

class Plus(Op):
    attrs = Op.attrs + ["a", "b"]
    def __init__(self, a: Expr, b: Expr, **kwargs) -> None:
        super().__init__(**kwargs)
        self.a = a
        self.b = b
    def render(self, proto=False) -> str:
        return "((%s) + (%s))" % (self.a.render(), self.b.render())
    def __str__(self):  return "(plus:(%s),(%s))" % (self.a, self.b)
    def __repr__(self): return str(self)
    def resolve(self, names: dict[str, "Named"]) -> Chunk:
        self.a = self.a.resolve(names)  # type: ignore
        self.b = self.b.resolve(names)  # type: ignore
        return self

class Minus(Op):
    attrs = Op.attrs + ["a", "b"]
    def __init__(self, a: Expr, b: Expr, **kwargs) -> None:
        super().__init__(**kwargs)
        self.a = a
        self.b = b
    def render(self, proto=False) -> str:
        return "((%s) - (%s))" % (self.a.render(), self.b.render())
    def __str__(self):  return "(minus:(%s),(%s))" % (self.a, self.b)
    def __repr__(self): return str(self)
    def resolve(self, names: dict[str, "Named"]) -> Chunk:
        self.a = self.a.resolve(names)  # type: ignore
        self.b = self.b.resolve(names)  # type: ignore
        return self

class HiByte(Op):
    attrs = Op.attrs + ["of"]
    def __init__(self, of: Expr, **kwargs) -> None:
        super().__init__(**kwargs)
        self.of = of
    def render(self, proto=False) -> str:
        return "HI8(%s)" % (self.of.render())
    def __str__(self):  return "(hi:%s)" % (self.of)
    def __repr__(self): return str(self)
    def resolve(self, names: dict[str, "Named"]) -> Chunk:
        self.of = self.of.resolve(names)  # type: ignore
        return self

class LoByte(Op):
    attrs = Op.attrs + ["of"]
    def __init__(self, of: Expr, **kwargs) -> None:
        super().__init__(**kwargs)
        self.of = of
    def render(self, proto=False) -> str:
        return "LO8(%s)" % (self.of.render())
    def __str__(self):  return "(lo:%s)" % (self.of)
    def __repr__(self): return str(self)
    def resolve(self, names: dict[str, "Named"]) -> Chunk:
        self.of = self.of.resolve(names)  # type: ignore
        return self

class Directive(Chunk):
    attrs = Chunk.attrs + []
    def __init__(self, name: str, parts: list[Expr], **kwargs) -> None:
        super().__init__(**kwargs)
        self.name = name
        self.parts = parts
    def __str__(self):  return "(%s)" % ([self.name] + self.parts)
    def __repr__(self): return str(self)
    def resolve(self, names: dict[str, "Named"]) -> Chunk:
        return self

class Byte(Chunk):
    attrs = Chunk.attrs + ["expr"]
    def __init__(self, expr: Expr, **kwargs) -> None:
        super().__init__(**kwargs)
        self.expr = expr
    def __str__(self):  return "(byte:%s)" % (self.expr)
    def __repr__(self): return str(self)
    def resolve(self, names: dict[str, "Named"]) -> Chunk:
        self.expr = self.expr.resolve(names)  # type: ignore
        return self

class Word(Chunk):
    attrs = Chunk.attrs + ["expr"]
    def __init__(self, expr: Expr, **kwargs) -> None:
        super().__init__(**kwargs)
        self.expr = expr
    def __str__(self):  return "(word:%s)" % (self.expr)
    def __repr__(self): return str(self)
    def resolve(self, names: dict[str, "Named"]) -> Chunk:
        self.expr = self.expr.resolve(names)  # type: ignore
        return self

class Insn(Chunk):
    attrs = Chunk.attrs + ["name", "opds"]
    def __init__(self, name: str, opds: list[Expr], **kwargs) -> None:
        super().__init__(**kwargs)
        self.name = name
        self.opds = opds
    def is_terminal(self) -> bool:
        return self.name in {"end", "rti", "rts"}

    def resolve(self, names: dict[str, "Named"]) -> Chunk:
        self.opds = [o.resolve(names) for o in self.opds]  # type: ignore
        return self

    def __str__(self):  return str([self.name] + self.opds)
    def __repr__(self): return str(self)

    def render(self, proto=False) -> str:
        if self.is_terminal():
            return "return"
        if self.name in {"jmp", "jsr", "bra", "bcc", "bcs", "bmi", "bpl", "beq", "bne"}:
            assert len(self.opds) == 1
            ref = self.opds[0]
            if not isinstance(ref, Ref):
                raise Exception(str((type(ref), ref, self.name)))
            named = ref.of
            assert isinstance(named, Named)
            target = named.name
            return "%s(%s)" % (self.name.upper(), target)
        n = self.name
        if n == "and":  n = "anda"
        return "%s(%s)" % (n, self.render_opds())

    def render_opds(self) -> str:
        os: list[Expr] = self.opds
        if len(os) == 0:
            return ""   # resulting in empty parens, no function args in C++-lang
        ts = [type(o) for o in os]
        rs = [o.render() for o in os]
        if ts == [Imm]:
            return os[0].render()
        if ts == [Ref]:
            return "ABS(%s)" % tuple(rs)
        if ts == [Ref, Reg]:
            return "ABS%s(%s)" % (rs[1].upper(), rs[0])
        if ts == [Lit]:
            return "ABS(%s)" % tuple(rs)
        if ts == [Lit, Reg]:
            return "ABS%s(%s)" % (rs[1].upper(), rs[0])
        if ts == [Plus]:
            return "ABS(%s)" % tuple(rs)
        if ts == [Plus, Reg]:
            return "ABS%s(%s)" % (rs[1].upper(), rs[0])
        if ts == [Minus]:
            return "ABS(%s)" % tuple(rs)
        if ts == [Minus, Reg]:
            return "ABS%s(%s)" % (rs[1].upper(), rs[0])
        if ts == [Paren, Reg] and rs[1] == "y":
            return "INDY(%s)" % (rs[0],)
        print("##########")
        print(ts)
        print(rs)
        print("##########")
        raise Exception()

class Block(Chunk):
    attrs = Chunk.attrs + ["inner"]
    def __init__(self, **kwargs) -> None:
        super().__init__(**kwargs)
        self.inner: list[Chunk] = []
    def add(self, x: Chunk) -> "Block":
        self.inner.append(x)
        return self
    def resolve(self, names: dict[str, Named]) -> Chunk:
        for i in range(len(self.inner)):
            self.inner[i] = self.inner[i].resolve(names)
        return self

class Ref(Expr):
    attrs = Expr.attrs + ["of"]
    def __init__(self, of: Union[Label, Define], **kwargs) -> None:
        super().__init__(**kwargs)        
        self.of = of
    def render(self, proto=False) -> str:
        if isinstance(self.of, Label):
            return "0x8000+offsetof(G, %s)" % (self.of.name)
        if isinstance(self.of, Define):
            return self.of.name
        raise Exception(str(self.of))
    def __str__(self):  return "(ref:%s)" % (self.of)
    def __repr__(self): return str(self)
    def resolve(self, names: dict[str, "Named"]) -> Chunk:
        self.of = self.of.resolve(names)  # type: ignore
        assert (isinstance(self.of, Label) or
                isinstance(self.of, Define))
        return self

class CodeBlock(Block):
    attrs = Block.attrs + ["label"]
    def __init__(self, label: Label, **kwargs) -> None:
        super().__init__(**kwargs)
        self.label = label
        self.next: Optional[CodeBlock] = None
    def __hash__(self):   return hash(self.label)
    def __eq__(self, x):  return self.label == x.label
    def render(self, proto=False):
        if (proto):
            return "void %s();" % (self.label.name)
        ret = ""
        ret += "void %s() {\n" % (self.label.name)
        ret += "    _debug(\"%s\", __FILE__, __LINE__);\n" % (self.label.name)
        for x in self.inner:
            for c in x.comments:
                ret += "    %s\n" % (c.render())
            ret += "    "
            ret += x.render()
            ret += ";\n"
        ret += "}"
        return ret
    def __str__(self):  return "(codeblock:%s)" % (self.label)
    def __repr__(self): return str(self)

class DispatchBlock(Block, Insn):
    attrs = list(set(Block.attrs + Insn.attrs + ["inner"]))
    def __init__(self, **kwargs) -> None:
        super().__init__(name="dispatch", opds=[])
    def render(self, proto=False, **kwargs) -> str:
        ret = ""
        table_name = "jumptable"
        ret += "static JUMP_ENTRY %s[%d] = {\n" % (table_name, len(self.inner))
        for x in self.inner:
            if not isinstance(x, Word):
                raise Exception("not a Ref: " + str(x))
            ret += "        "
            ret += x.expr.of.name  # type: ignore
            ret += ",\n"
        ret += "    };\n"
        ret += "    JMP(%s[a.read()])" % (table_name,)
        return ret
    def __str__(self):  return "(dispatch:%s)" % (list(str(x) for x in self.inner))
    def __repr__(self): return str(self)
    def is_terminal(self) -> bool:  return True

class DataBlock(Block):
    attrs = Block.attrs + ["label", "inner"]
    def __init__(self, label: Label, **kwargs) -> None:
        super().__init__(**kwargs)
        self.label = label
        self.offset = -1
    def render(self, proto=False) -> str:
        dt = "word" if (self.inner and isinstance(self.inner[0], Word)) else "byte"
        if proto:
            return ("    /* %04x (%5d) */ %s const %s[%d];" % (self.offset, self.offset, dt, self.label.name, len(self.inner) or 1))
        elif len(self.inner) > 0:
            ret = ""
            ret += "\n    /* %04x (%5d) */\n" % (self.offset, self.offset)
            for c in self.comments:
                ret += "    %s\n" % (c.render())
            ret += "    .%s = {" % (self.label.name)
            for b in self.inner:
                for c in b.comments:
                    ret += "\n    %s\n    " % (c.render())
                ret += b.expr.render() + ", "  # type: ignore
            ret += "},"
            return ret
        else:
            return ("\n    /* %04x (%5d) */\n    .%s = {}," % (self.offset, self.offset, self.label.name))
    def __str__(self):  return "(datablock:%s [%d])" % (self.label, len(self.inner))
    def __repr__(self): return str(self)

class DefsBlock(Block):
    attrs = Block.attrs + ["inner"]

class DataGroup(DataBlock):
    attrs = DataBlock.attrs
    def __str__(self):  return "(datagroup:%s [%d])" % (self.label, len(self.inner))
    def __repr__(self): return str(self)
