PROG = string
CPP = g++
OBJS = main.o
CPPFLAGS = -g -Wall -Werror

.PHONY: all clean

all: $(PROG)

$(PROG): $(OBJS)
	$(CPP) -o $@ $^

main.o: main.cpp
	$(CPP) $(CPPFLAGS) -c main.cpp

clean:
	rm -rf *.o *.exe
