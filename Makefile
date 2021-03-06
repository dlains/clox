P=clox
OBJECTS=chunk.o memory.o debug.o value.o error.o vm.o scanner.o compiler.o object.o
CFLAGS=-g -Wall -Werror -O3 -std=gnu11 -I include
LDLIBS=
CC=gcc

vpath %.c src
vpath %.h include

$(P): $(OBJECTS)

clean:
	rm -f *.o
	rm -f clox
