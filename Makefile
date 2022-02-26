CC=gcc
CFLAGS=-I. -Wall -ansi -pedantic -std=c99
EOPTION = `pkg-config allegro-5 allegro_font-5 allegro_primitives-5 --libs --cflags`
DEPS = header.h
OBJ = main.o allegroInit.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

tetris: main.o $(OBJ) 
	$(CC) -o $@ $^ $(EOPTION)

