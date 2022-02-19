# File Name	: Makefile
# Purpose	: Build FunctionDefinition
# Author	: Michael Ly
# Date		: Feb 6, 2022

PROG := definition
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

