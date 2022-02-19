INCDIR = -I.
CC = g++
CFLAGS = -Wall -g

all: main

main: main.o
	$(CC) $(CFLAGS) -o main main.cpp

main.o: main.cpp
	$(CC) -c main.cpp

clean:
	rm -rf *.o main *.exe