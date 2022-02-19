PROG := string
CXX = g++
OBJS = main.o
CPPFLAGS = -g -Wall -Werror

.PHONY: all clean

all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $@ $^

main.o: main.cpp
	$(CXX) $(CPPFLAGS) -c main.cpp

clean:
	rm -rf *.o *.exe
