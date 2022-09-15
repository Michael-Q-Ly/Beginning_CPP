# File 		: Makefile
# Brief 	: Compile pureVirtualFunctions
# Author 	: Michael Ly
# Date 		: September 14, 2022

PROG = pureVirtualFunctions
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:%.cpp=%.o)

CXX      = g++
CXXSTD   = -std=c++14
CXXFLAGS = -g -Wall -Werror $(CXXSTD)

.PHONY : all
all : $(PROG)

$(PROG) : $(OBJS) Makefile
	$(CXX) -o $@ $<

$(OBJS) : $(SRCS) Makefile
	$(CXX) -c $< $(CXXFLAGS)

.PHONY: clean
clean:
	@rm -rf $(PROG) $(OBJS)
