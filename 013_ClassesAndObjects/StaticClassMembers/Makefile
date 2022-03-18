# File Name	: Makefile
# Purpose	: Builds StaticClassMembers example
# Author	: Michael Ly
# Date		: Mar 16, 2022

PROG := staticClassMembers
CXX = g++
OBJS = main.o Player.o
INCDIR = inc
VPATH = src
CXXFLAGS = -g -Wall -Werror -std=c++14

.PHONY: all
all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $@ $^

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -I$(INCDIR) -c $<

Player.o: Player.cpp
	$(CXX) $(CXXFLAGS) -I$(INCDIR) -c $<

.PHONY: clean
clean:
	rm -rf *.o *.exe
