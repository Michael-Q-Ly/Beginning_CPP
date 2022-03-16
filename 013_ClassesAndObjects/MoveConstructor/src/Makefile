# File Name	: Makefile
# Purpose	: Build Move Constructor example
# Author	: Michael Ly
# Date		: Mar 16, 2022

PROG := moveConstructor
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
