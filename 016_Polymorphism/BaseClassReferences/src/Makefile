# File 		: Makefile
# Brief 	: Compile main for baseClassReferences
# Author 	: Michael Ly
# Date 		: September 13, 2022

PROG = baseClassReferences
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:%.cpp=%.o)

CXX = g++
CXXSTD = -std=c++14
CXXFLAGS = -g -Wall -Werror $(CXXSTD)

.PHONY : all
all : $(PROG)

$(PROG) : $(OBJS) Makefile
	$(CXX) -o $@ $<

$(OBJS) : $(SRCS) Makefile
	$(CXX) -c $< $(CXXFLAGS)

.PHONY : clean
clean :
	@rm -rf $(PROG) $(OBJS)
