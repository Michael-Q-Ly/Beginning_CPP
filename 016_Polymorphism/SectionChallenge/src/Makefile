# File Name 	: Makefile
# Brief 	: Compile Section 16 Challenge
# Author 	: Michael Ly
# Date 		: September 15, 2022

PROG = sectionChallenge
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:cpp=o)

CXX = g++
IDIR = ../inc
CXXSTD=c++14
CXXFLAGS = -g -Wall -Werror -std=$(CXXSTD) -I$(IDIR)

.PHONY: all
all: $(PROG)

$(PROG) : $(OBJS) Makefile
	$(CXX) -o $@ $(OBJS)

$(OBJS) : %.o:%.cpp Makefile
	$(CXX) -c $< $(CXXFLAGS)

.PHONY: clean
clean:
	@rm -rf $(PROG) $(OBJS)
