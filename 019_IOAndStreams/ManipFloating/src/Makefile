# File 		: Makefile
# Brief 	: Compile manipFloating
# Author 	: Michael Ly
# Date 		: November 10, 2022

PROG = manipFloating
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

.PHONY: run
run:
	@./$(PROG)

.PHONY: clean
clean:
	@rm -f $(PROG) $(OBJS)
