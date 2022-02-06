# File Name	: Makefile
# Purpose	: Build FunctionPrototypes
# Author	: Michael Ly
# Date		: Feb 6, 2022

PROG := prototypes
CXX = g++
OBJS = main.o
CXXFLAGS = -g -Wall -Werror -std=c++14

.PHONY: all clean

all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $@ $^

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -rf *.o *.exe

