OBJS = tmp/apu.o tmp/base.o tmp/bus.o tmp/cpu.o tmp/debug.o tmp/insns.o tmp/joy.o tmp/main.o tmp/nmi.o tmp/ppu.o tmp/timing.o

mario++: $(OBJS)
	mkdir -p tmp
	scripts/cxx-link $(OBJS)

tmp/%.o: src/%.cc
	mkdir -p tmp
	scripts/cxx-compile $<

clean:
	rm -rf mario++ tmp/
