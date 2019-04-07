#Makefile to build in linux

CC=i586-mingw32msvc-g++
TEST_CC=g++

SRCDIR=src
OBJDIR=build

_DEPS=Game.h Board.h Item.h Monster.h Point.h Player.h Point.h Slime.h Unit.h values.h
DEPS=$(patsubst %,$(SRCDIR)/%,$(_DEPS))

_OBJS=main.o Game.o Board.o Monster.o Point.o Slime.o Unit.o
OBJS=$(patsubst %,$(OBJDIR)/%, $(_OBJS))

app.exe: $(OBJS)
	$(CC) -o app.exe $(OBJS)
	
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(DEPS)
	$(CC) -c -o $@ $<
	
#This prevent make from doing something with file named clean
.PHONY: clean