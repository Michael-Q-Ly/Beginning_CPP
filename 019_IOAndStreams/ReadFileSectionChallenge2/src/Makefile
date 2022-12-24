# File 		: Makefile
# Brief 	: Compile readFileSectionChallenge2
# Author 	: Michael Ly
# Date 		: December 18, 2022

PROG = readFileSectionChallenge2
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:cpp=o)

CXX      = g++
CXXSTD   = -std=c++14
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
	@./$(PROG) *.txt

.PHONY: clean
clean:
	@rm -f $(PROG) $(OBJS)
