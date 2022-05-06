# File Name		: Makefile
# Author		: Michael Ly
# Date			: Apr 11, 2022
# Description		: Build of basic operator overloading program

PROG = startingPoint
CXX = g++
OBJS = main.o MyString.o
IDIR = ../inc
CXXFLAGS = -g -Wall -Werror -I$(IDIR)

.PHONY: all
all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $@ $^

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp

MyString.o: MyString.cpp
	$(CXX) $(CXXFLAGS) -c MyString.cpp

.PHONY: clean
clean:
	rm -rf *.o *exe
