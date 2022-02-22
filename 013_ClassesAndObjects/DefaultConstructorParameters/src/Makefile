# File Name	: Makefile
# Purpose	: Build Default Constructor Parameters example
# Author	: Michael Ly
# Date		: Feb 21, 2022

PROG = defaultConstructorParameters
CXX = g++
OBJ = main.o
SRC = main.cpp
INCDIR = .
CXXFLAGS = -g -Wall -Werror -I$(INCDIR) -std=c++14

.PHONY: all
all: $(PROG)

$(PROG): $(OBJ)
	$(CXX) -o $@ $^

$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm -rf *.o *.exe

