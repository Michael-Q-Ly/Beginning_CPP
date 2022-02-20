# File Name	: Makefile
# Purpose	: Build Return Pointer
# Author	: Michael Ly
# Date		: Feb 19, 2022


PROG = returnPointer
CXX = g++
OBJ = main.o
CXXFLAGS = -g -Wall -Werror -std=c++14

.PHONY: all
all: $(PROG)

$(PROG): $(OBJ)
	$(CXX) -o $@ $^

$(OBJ): main.cpp
	$(CXX) $(CXXFLAGS) -c $<

.PHONY:clean
clean:
	rm -rf *.o *.exe

