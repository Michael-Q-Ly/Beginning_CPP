# File Name	: Makefile
# Purpose	: Build Challenge Question 1
# Author	: Michael Ly
# Date		: Feb 4, 2022

PROG := challenge
CXX = g++
OBJS := main.o
CXXFLAGS = -g -Wall -Werror

.PHONY: all clean

all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $@ $^

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

clean:
	rm -rf *.o *.exe

