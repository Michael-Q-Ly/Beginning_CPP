# File Name	: Makefile
# Purpose	: Build Copy constructor example
# Author	: Michael Ly
# Date		: Feb 22, 2022

PROG = copyConstructor
CXX = g++
OBJ = main.o Player.o
SRC = main.cpp
INCDIR = ../inc
CXXFLAGS = -g -Wall -Werror -I$(INCDIR) -std=c++14

.PHONY: all
all: $(PROG)

$(PROG): $(OBJ)
	$(CXX) -o $@ $^

main.o: $(SRC)
	$(CXX) $(CXXFLAGS) -c $<

Player.o: Player.cpp
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm -rf *.o *.exe

