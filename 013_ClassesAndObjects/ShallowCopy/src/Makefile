# File Name	: Makefile
# Purpose	: Demonstrate shallow copying with the copy constructor
# Author	: Michael Ly
# Date		: Mar 11, 2022

PROG := shallowCopy
CXX = g++
OBJ = main.o
CXXFLAGS = -g -Wall -Werror -std=c++14

.PHONY: all
all: $(PROG)

$(PROG): $(OBJ)
	$(CXX) -o $@ $<

$(OBJ): main.cpp
	$(CXX) $(CXXFLAGs) -c main.cpp

.PHONY: clean
clean:
	rm -rf *.o *.exe
