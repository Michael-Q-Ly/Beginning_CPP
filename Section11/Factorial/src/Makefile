# File Name	: Makefile
# Purpose	: Build Factorial example
# Author	: Michael Ly
# Date		: Feb 18, 2022


PROG = factorial 
CXX = g++
OBJ = main.o
CXXFLAGS = -g -Wall -Werror -std=c++14

.PHONY: all
all: $(PROG)

$(PROG): $(OBJ)
	$(CXX) -o $@ $^

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

.PHONY:clean
clean:
	rm -rf *.o *.exe

