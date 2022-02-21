# File Name	: Makefile
# Purpose	: Build Accessing Class Members example
# Author	: Michael Ly
# Date		: Feb 21, 2022

PROG = accessingClassMembers
CXX = g++
OBJ = main.o
SRC = main.cpp
CXXFLAGS = -g -Wall -Werror -std=c++14

.PHONY: all
all: $(PROG)

$(PROG): $(OBJ)
	$(CXX) -o $@ $^

$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm -rf *.o *.exe

