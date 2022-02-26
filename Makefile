CC=gcc
CFLAGS=-I. -Wall -ansi -pedantic
DEPS = header.h
OBJ = main.o drawPlayfield.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

tetris: main.o $(OBJ) 
	$(CC) -o tetris $@ $^ 
