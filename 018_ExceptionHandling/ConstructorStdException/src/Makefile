# File 		: Makefile
# Brief 	: Compile constructorStdException program
# Author 	: Michael Ly
# Date 		: November 6, 2022

PROG = constructorStdException
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:cpp=o)

CXX      = g++
IDIR     = -I../inc
CXXSTD   = -std=c++14
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

.PHONY: clean
clean:
	@rm -rf $(PROG) $(OBJS)
