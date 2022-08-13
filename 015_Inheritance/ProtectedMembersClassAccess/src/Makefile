# File Name	: Makefile
# Brief		: Compile main.cpp
# Author:	: Michael Ly
# Date		: August 6, 2022

PROG = protectedMembersClassAccess
CXX = g++
OBJS = main.o
IDIR = ../inc
CXXFLAGS = -g -Wall -Werror -std=c++14 -I $(IDIR)

.PHONY: all
all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $@ $^

.PHONY: clean
clean:
	rm -rf *.exe *.o
