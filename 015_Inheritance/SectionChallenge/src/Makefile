# @file Makefile
# @Synopsis  Compiles Inheritance section challenge program
# @author Michael Ly (Michael-Q-Ly@github.com)
# @version 0.0.0
# @date 2022-08-25

PROG = sectionChallenge
CXX = g++
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:cpp=o)
IDIR = ../inc
CXXSTD=c++14
CXXFLAGS = -g -Wall -Werror -std=$(CXXSTD) -I$(IDIR)

.PHONY: all
all: $(PROG)

$(PROG) : $(OBJS) Makefile
	$(CXX) -o $@ $(OBJS)

$(OBJS) : %.o: %.cpp Makefile
	$(CXX) -c $< $(CXXFLAGS)

.PHONY: clean
clean:
	@rm -rf $(PROG) $(OBJS)
