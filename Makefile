CC = clang++
CCFLAGS = -Og -g1 -Wall -Wextra

SRCS = \
	ui/audio.cc \
	ui/video.cc \
	ui/inputs.cc \
	ui/sdlenv.cc \
	emu/apu.cc \
	emu/bus.cc \
	emu/cpu.cc \
	emu/joy.cc \
	emu/nmi.cc \
	emu/ppu.cc \
	main.cc

OBJS = $(SRCS:.cc=.o)

.PHONY: depend clean

all: mario++

mario++: $(OBJS)
	$(CC) $(CFLAGS) -o mario++ $<

.cc.o:
	$(CC) -o $@ -c $<

clean:
	rm -f mario++ *.o ui/*.o emu/*.o

depend: $(SRCS)
	makedepend $^
