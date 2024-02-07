import re

from typing import *

class Chunk:
    attrs = ["comments"]
    def __init__(self) -> None:
        self.comments: list["Comment"] = []
    def render(self, labels: dict[str, Any], defines: dict[str, Any], proto=False) -> str:
        raise NotImplementedError(str(type(self)))

class Separator(Chunk):
    attrs = []
    def render(self, labels: dict[str, Any], defines: dict[str, Any], proto=False) -> str:
        return "\n"

class Comment(Chunk):
    attrs = ["text"]
    def __init__(self, text: str) -> None:
        super().__init__()
        assert isinstance(text, str)
        self.text = text
    def render(self, labels: dict[str, Any], defines: dict[str, Any], proto=False) -> str:
        assert isinstance(self.text, str)
        return "// " + self.text

class Expr(Chunk):
    attrs = ["comments"]
    pass

class Op(Expr):
    attrs = Expr.attrs + []
    pass

class Reg(Expr):
    attrs = Expr.attrs + ["name"]
    def __init__(self, name: str) -> None:
        super().__init__()
        self.name = name
    def render(self, labels: dict[str, Any], defines: dict[str, Any], proto=False) -> str:
        return self.name

class Paren(Op):
    attrs = Op.attrs + ["expr"]
    def __init__(self, expr: Expr) -> None:
        super().__init__()
        self.expr = expr
    def render(self, labels: dict[str, Any], defines: dict[str, Any], proto=False) -> str:
        return "(%s)" % (self.expr.render(labels, defines))

class Lit(Expr):
    """
    <class 'conv.chunks.Lit'> comments:[] val:8192 base:16
    """
    attrs = Expr.attrs + ["val", "base"]
    def __init__(self, val: int, base: int) -> None:
        super().__init__()
        self.val = val
        self.base = base
    def render(self, labels: dict[str, Any], defines: dict[str, Any], proto=False) -> str:
        if self.base == 10:
            return str(self.val)
        if self.base == 2:
            return bin(self.val)
        if self.base == 16:
            return hex(self.val)
        assert False

# class Imm(Expr):
#     val: Optional[Expr]
#     def render(self):
#         return "Imm(" + self.val.render() + ")"

class Named(Chunk):
    attrs = Chunk.attrs + ["name"]
    def __init__(self, name: str) -> None:
        super().__init__()
        self.name = name
    def resolve(self, labels: dict[str, Any], defines: dict[str, Any]) -> Union["Define", "Label"]:
        raise

class Unresolved(Named):
    attrs = Named.attrs
    def resolve(self, labels: dict[str, Any], defines: dict[str, Any]) -> Union["Define", "Label"]:
        if self.name in defines:
            return defines[self.name]
        if self.name in labels:
            return labels[self.name]
        raise NameError(self.name)
    def __init__(self, name: str) -> None:
        super().__init__(name)

class Define(Named):
    """
    <class 'conv.chunks.Define'> comments:[<conv.chunks.Comment object at 0x104c5e210>] name:PPU_CTRL_REG1
    <class 'conv.chunks.Comment'> text:DEFINES
    <class 'conv.chunks.Lit'> comments:[] val:8192 base:16
    """
    attrs = Named.attrs + ["expr"]
    def __init__(self, name: str, expr: Expr) -> None:
        super().__init__(name)
        self.expr = expr
    def resolve(self, labels: dict[str, Any], defines: dict[str, Any]) -> Union["Define", "Label"]:
        return self
    def render(self, labels: dict[str, Any], defines: dict[str, Any], proto=False) -> str:
        return "#define %40s %20s" % (self.name, self.expr.render(labels, defines))

class Label(Named):
    attrs = Named.attrs
    def __init__(self, name: str) -> None:
        super().__init__(name)
        self.is_jump_target: bool = False
        self.is_call_target: bool = False
        self.code_block: Optional["CodeBlock"] = None
    def resolve(self, labels: dict[str, Any], defines: dict[str, Any]) -> Union["Define", "Label"]:
        return self
    def render(self, labels: dict[str, Any], defines: dict[str, Any], proto=False) -> str:
        if self.is_jump_target or self.is_call_target:
            return self.name
        return self.name

class Plus(Op):
    attrs = Op.attrs + ["a", "b"]
    def __init__(self, a: Expr, b: Expr) -> None:
        super().__init__()
        self.a = a
        self.b = b
    def render(self, labels: dict[str, Any], defines: dict[str, Any], proto=False) -> str:
        return "((%s) + (%s))" % (self.a.render(labels, defines), self.b.render(labels, defines))

class Minus(Op):
    attrs = Op.attrs + ["a", "b"]
    def __init__(self, a: Expr, b: Expr) -> None:
        super().__init__()
        self.a = a
        self.b = b
    def render(self, labels: dict[str, Any], defines: dict[str, Any], proto=False) -> str:
        return "((%s) - (%s))" % (self.a.render(labels, defines), self.b.render(labels, defines))

class HiByte(Op):
    attrs = Op.attrs + ["of"]
    def __init__(self, of: Expr) -> None:
        super().__init__()
        self.of = of
    def render(self, labels: dict[str, Any], defines: dict[str, Any], proto=False) -> str:
        return "HI8(%s)" % (self.of.render(labels, defines))

class LoByte(Op):
    attrs = Op.attrs + ["of"]
    def __init__(self, of: Expr) -> None:
        super().__init__()
        self.of = of
    def render(self, labels: dict[str, Any], defines: dict[str, Any], proto=False) -> str:
        return "LO8(%s)" % (self.of.render(labels, defines))

class Directive(Chunk):
    attrs = Chunk.attrs + []
    def __init__(self, name: str, parts: list[Expr]) -> None:
        super().__init__()
        self.name = name
        self.parts = parts

class Byte(Chunk):
    attrs = Chunk.attrs + ["expr"]
    def __init__(self, expr: Expr) -> None:
        super().__init__()
        self.expr = expr

class Word(Chunk):
    attrs = Chunk.attrs + ["expr"]
    def __init__(self, expr: Expr) -> None:
        super().__init__()
        self.expr = expr

class Insn(Chunk):
    attrs = Chunk.attrs + ["name", "opds"]
    def __init__(self, name: str, opds: list[Expr]) -> None:
        super().__init__()
        self.name = name
        self.opds = opds
    def is_terminal(self) -> bool:
        return self.name in {"end", "rti", "rts"}
    # def target(self):
    #     assert len(self.opds) == 1
    #     assert isinstance(self.opds[0], Ref)
    #     return self.opds[0].name    
    def render(self, labels: dict[str, Any], defines: dict[str, Any], proto=False) -> str:
        if self.is_terminal():
            return "return 0"
        if self.name == "and":
            opds = ", ".join(x.render(labels, defines) for x in self.opds)
            return "%sa(%s)" % (self.name, opds)
        if self.name in {"jmp", "jsr", "bra", "bcc", "bcs", "bmi", "bpl", "beq", "bne"}:
            assert len(self.opds) == 1
            ref = self.opds[0]
            assert isinstance(ref, Ref)
            named = ref.of
            assert isinstance(named, Named)
            target = named.name
            return "%s(%s)" % (self.name.upper(), target)
        opds = ", ".join(x.render(labels, defines) for x in self.opds)
        # if (self.name == "lda"):  raise Exception(str([type(x) for x in self.opds]))
        return "%s(%s)" % (self.name, opds)

class Block(Chunk):
    attrs = Chunk.attrs + ["inner"]
    def __init__(self) -> None:
        super().__init__()
        self.inner: list[Chunk] = []

class BlockEnd(Chunk):
    attrs = []

class PreambleBlock(Block):
    attrs = Block.attrs + []

# class Ref(Expr):
#     valid_name = re.compile("^[A-Za-z0-9_]+$")
#     def __init__(self, name: str) -> None:
#         if not Ref.valid_name.match(name):
#             raise Exception("bad ref: " + name)
#         self.name = name
#     def render(self, is_label: bool):
#         if is_label:
#             return "offsetof(G, %s)" % (self.name)
#         else:
#             return "K::%s" % (self.name)

class Ref(Expr):
    attrs = Expr.attrs + ["of"]
    def __init__(self, of: Union[Label, Define, Unresolved]) -> None:
        super().__init__()        
        self.of = of
    def render(self, labels: dict[str, Any], defines: dict[str, Any], proto=False) -> str:
        self.of = self.of.resolve(labels, defines)
        if isinstance(self.of, Label):
            return "offsetof(G, %s)" % (self.of.name)
        if isinstance(self.of, Define):
            return self.of.name
        raise
    def __str__(self) -> str:
        return "(Ref:%s)" % (self.of.name)

class CodeBlock(Block):
    attrs = Block.attrs + ["label"]
    def __init__(self, label: Label) -> None:
        super().__init__()
        self.label = label
        self.next = None
    def render(self, labels: dict[str, Any], defines: dict[str, Any], proto=False):
        if (proto):
            return "int %s();" % (self.label.name)
        ret = "int %s() {" % (self.label.name)
        ret += "\n"
        for x in self.inner:
            for c in x.comments:
                ret += "    %s\n" % (c.render(labels, defines))
            ret += "    "
            ret += x.render(labels, defines)
            ret += ";\n"
        ret += "}\n"
        return ret

class DispatchBlock(Block):
    attrs = Block.attrs + ["inner"]
    def render(self, labels: dict[str, Any], defines: dict[str, Any], proto=False) -> str:
        ret = ""
        table_name = "jumptable"
        ret += "static JUMP_ENTRY %s[%d] = {\n" % (table_name, len(self.inner))
        for x in self.inner:
            assert isinstance(x, Ref)
            ret += "        "
            ret += x.of.name
            ret += ",\n"
        ret += "    };\n"
        ret += "    JMP(%s[a])" % (table_name,)
        return ret

class DataBlock(Block):
    attrs = Block.attrs + ["label", "inner"]
    def __init__(self, label: Label) -> None:
        super().__init__()
        self.label = label
    def render(self, labels: dict[str, Any], defines: dict[str, Any], proto=False) -> str:
        # FIXME: comments are broken
        dt = "word" if (self.inner and isinstance(self.inner[0], Word)) else "byte"
        if proto:
            return ("    %s const %s[%d];" % (dt, self.label.name, len(self.inner) or 1))
        elif len(self.inner) > 0:
                x: list[str] = [b.expr.render(labels, defines) for b in self.inner]   # type: ignore
                x = [("%s" % (b)) for b in x]
                xs = ", ".join(x)
                return ("    .%s = {%s}," % (self.label.name, xs))
        else:
            return ("    .%s = {0xee}," % (self.label.name))

class DefsBlock(Block):
    attrs = Block.attrs + ["inner"]
