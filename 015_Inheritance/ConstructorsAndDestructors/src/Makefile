# File Name	: Makefile
# Brief		: Compile main.cpp
# Author	: Michael Ly
# Date		: August 13, 2022

PROG = constructorsAndDestructors
CXX = g++
OBJS = main.o
IDIR = ../inc
CXXFLAGS = -g -Wall -Werror -std=c++14 -I $(IDIR)

.PHONY: all
all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $@ $^

$(OBJS): main.cpp
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm -rf *.exe *.o
