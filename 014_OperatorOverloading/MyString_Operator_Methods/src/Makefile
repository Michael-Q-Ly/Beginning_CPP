# File Name	: Makefile
# Author	: Michael Ly
# Date		: Apr 14, 2022

PROG = operatorMemberFunctions
CXX = g++
OBJS = main.o MyString.o
IDIR = ../inc
CXXFLAGS = -g -Wall -Werror -std=c++14 -I $(IDIR)

.PHONY: all
all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $@ $^

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $<

MyString.o: MyString.cpp
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm -rf *.o *.exe
