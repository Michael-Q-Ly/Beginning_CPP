# File 		: Makefile
# Brief 	: Compile Section 17 Challenge
# Author 	: Michael Ly
# Date 		: October 22, 2022

PROG = sectionChallenge
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:cpp=o)

CXX = g++
CXXSTD = -std=c++14
IDIR = -I../inc
CXXFLAGS = -g -Wall -Werror $(CXXSTD) $(IDIR)

.PHONY: all
all: $(PROG)

$(PROG): $(OBJS) Makefile
	$(CXX) -o $@ $(OBJS)

$(OBJS): %.o:%.cpp Makefile
	$(CXX) -c $< $(CXXFLAGS)

.PHONY: build
build:
	@bear -- make

.PHONY: run
run:
	@./$(PROG)

.PHONY: clean
clean:
	@rm -rf $(PROG) $(OBJS)
