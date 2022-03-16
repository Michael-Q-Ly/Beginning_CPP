# File Name	: Makefile
# Purpose	: Build DeepCopy example
# Author	: Michael Ly
# Date		: Mar 15, 2022

PROG := deepCopy
CXX = g++
OBJ = main.o
CXXFLAGS = -g -Wall -Werror -std=c++14

.PHONY: all
all: $(PROG)

$(PROG): $(OBJ)
	$(CXX) -o $@ $^

$(OBJ): main.cpp
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm -rf *.o *.exe
