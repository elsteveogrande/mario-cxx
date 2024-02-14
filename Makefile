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

HEADERS = $(SRCS:.cc=.h)
OBJS = $(SRCS:.cc=.o)

.PHONY: clean

all: mario++

mario++: $(OBJS)
	$(CC) $(CFLAGS) -o mario++ $<

.o: $(HEADERS)
	$(CC) -o $@ -c $<

misc/chrrom.h misc/chrrom.cc: misc/smb1-us.nes
	utils/extract-chr-rom \
		misc/chrrom.h \
		misc/chrrom.cc \
		misc/smb1-us.nes

misc/prgrom.h misc/prgrom.cc: misc/smb1-us.nes
	utils/extract-prg-rom \
		misc/prgrom.h \
		misc/prgrom.cc \
		misc/smb1-us.nes
		
clean:
	rm -f mario++ *.o ui/*.o emu/*.o out/*.o
