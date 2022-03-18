# File Name	: Makefile
# Author	: Michael Ly
# Date		: Mar 17, 2022
# Description	: Build Section 13 Challenge

PROG := movieChallenge
CXX = g++
OBJS = main.o Movie.o Movies.o
INCDIR = inc
VPATH = src
CXXFLAGS = -g -Wall -Werror -I$(INCDIR) -std=c++14

.PHONY: all
all: $(PROG)

$(PROG): $(OBJS)
	$(CXX) -o $@ $^

main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $<

Movie.o: Movie.cpp
	$(CXX) $(CXXFLAGS) -c $<

Movies.o: Movies.cpp
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: clean
clean:
	rm -rf *.o *.exe
