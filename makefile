CC = gcc
#CFLAGS=-W -Wall -ansi -pedantic -std=c99
CFLAGS = -std=c99

all: ep2

ep2: string.o main.o
	$(CC) -o ep2 string.o main.o -lm $(CFLAGS)
main.o: main.c
	$(CC) -c main.c $(CFLAGS)
string.o: string.c
	$(CC) -c string.c $(CFLAGS)
clean:
		rm -rf *.o *~
mrproper: clean
		rm -rf ep2
