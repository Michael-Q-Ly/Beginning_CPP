# File Name	: Makefile
# Brief		: Compile main.cpp
# Author	: Michael Ly
# Date		: August 13, 2022

PROG = baseClassInitialization
CXX = g++
OBJS = main.o
CXXFLAGS = -g -Wall -Werror -std=c++14

.PHONY: all
all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $@ $^

$(OBJS): main.cpp
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm -rf *.exe *.o
