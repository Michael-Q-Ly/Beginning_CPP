PROG = main
CC = g++
OBJS = main.o
CPPFLAGS = -g -Wall -Werror

.PHONY: all clean

all: $(PROG)

$(PROG): $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o: main.cpp
	$(CC) $(CPPFLAGS) -c main.cpp

clean:
	rm -rf *.o *.exe
