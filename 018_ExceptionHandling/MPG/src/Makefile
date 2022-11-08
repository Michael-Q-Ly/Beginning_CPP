# File 		: Makefile
# Brief 	: Compile mpg with no exception handling
# Author 	: Michael Ly
# Date 		: October 31, 2022

PROG = mpg
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
	./$(PROG)

.PHONY: clean
clean:
	@rm -rf $(PROG) $(OBJS)
