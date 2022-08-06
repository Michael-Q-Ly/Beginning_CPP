# File Name	: Makefile
# Brief		: Compile derivation of first class
# Author	: Michael Ly
# Date		: July 23, 2022

PROG = firstClass
CXX = g++
OBJS = main.o Account.o Savings_Account.o
IDIR = ../inc
CXXFLAGS = -g -Wall -Werror -std=c++14 -I $(IDIR)

.PHONY: all
all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $@ $^

Account.o: Account.cpp
	$(CXX) $(CXXFLAGS) -c $<

Savings_Account.o: Savings_Account.cpp
	$(CXX) $(CXXFLAGS) -c $<

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm -rf *.o *.exe