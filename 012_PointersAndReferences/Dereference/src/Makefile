# File Name	: Makefile
# Purpose	: Build Dereference
# Author	: Michael Ly
# Date		: Feb 18, 2022


PROG = dereference 
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

