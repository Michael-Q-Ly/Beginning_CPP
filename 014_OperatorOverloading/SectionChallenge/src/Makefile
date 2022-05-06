# File Name		: Makefile
# Author		: Michael Ly
# Date			: May 5, 2022
# Brief			: Compile Section 14 challenge - operator overloading

PROG = operatorOverloading
CXX = g++
OBJS = main.o MyString.o
IDIR = ../inc
CXXFLAGS = -g -Wall -Werror -std=c++14 -I $(IDIR)

.PHONY: all
all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $@ $^

MyString.o: MyString.cpp
	$(CXX) $(CXXFLAGS) -c $<

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm -rf *.o *.exe
