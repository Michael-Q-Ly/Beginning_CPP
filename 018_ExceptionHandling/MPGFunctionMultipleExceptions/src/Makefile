# File 		: Makefile
# Brief 	: Compile milesPerGallonFunction program
# Author 	: Michael Ly
# Date 		: November 6, 2022

PROG = milesPerGallonFunctionMultipleExceptions
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:cpp=o)

CXX = g++
CXXSTD = -std=c++14
CXXFLAGS = -g -Wall -Werror $(CXXSTD)

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
