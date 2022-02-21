# File Name	: Makefile
# Purpose	: Build Implementing Methods 2 example
# Author	: Michael Ly
# Date		: Feb 21, 2022

PROG = implementingMethods2
CXX = g++
OBJS = main.o Account.o
SRC = main.cpp
INCDIR = ../inc
CXXFLAGS = -g -Wall -Werror -std=c++14 -I$(INCDIR)

.PHONY: all
all: $(PROG) 

$(PROG): $(OBJS)
	$(CXX) -o $@ $^

main.o: $(SRC)
	$(CXX) $(CXXFLAGS) -c $<

Account.o: Account.cpp
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm -rf *.o *.exe

