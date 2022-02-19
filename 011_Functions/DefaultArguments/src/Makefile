# File Name	: Makefile
# Purpose	: Build main.cpp default argument example
# Author	: Michael Ly
# Date		: Feb 18, 2022

PROG = defaultArgument
CXX = g++
OBJS = main.o
CXXFLAGS = -g -Wall -Werror -std=c++14

.PHONY: all clean

all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $@ $^

$(OBJS): main.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -rf *.o *.exe

