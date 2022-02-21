# File Name	: Makefile
# Purpose	: Build Section Challenge 12
# Author	: Michael Ly
# Date		: Feb 20, 2022


PROG = sectionChallenge
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

