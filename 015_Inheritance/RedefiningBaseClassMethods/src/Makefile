# File Name	: Makefile
# Brief		: Compile baseClassRedefinition program
# Author	: Michael Ly
# Date		: August 16, 2022

PROG = redefiningBaseClassMethods
CXX = g++
OBJS = main.o Account.o Savings_Account.o
IDIR = ../inc
STD = c++14
CXXFLAGS = -g -Wall -Werror -std=$(STD) -I$(IDIR)

.PHONY: all
all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $@ $^

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $<

Account.o: Account.cpp
	$(CXX) $(CXXFLAGS) -c $<

Savings_Account.o: Savings_Account.cpp
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm -rf *.exe *.o
