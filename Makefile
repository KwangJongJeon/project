#Makefile to build in linux

CC=i586-mingw32msvc-g++

SRCDIR=src
OBJDIR=build

_DEPS=Game.h
DEPS=$(patsubst %,$(SRCDIR)/%,$(_DEPS))

_OBJS=main.o Game.o
OBJS=$(patsubst %,$(OBJDIR)/%, $(_OBJS))

app.exe: $(OBJS)
	$(CC) -o app.exe $(OBJS)
	
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(DEPS)
	$(CC) -c -o $@ $<
	
.PHONY: clean