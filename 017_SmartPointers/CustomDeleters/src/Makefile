# File 		: Makefile
# Brief 	: Compile customDeleters
# Author 	: Michael Ly
# Date 		: September 25, 2022

PROG = customDeleters
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:cpp=o)

CXX      = g++
CXXSTD   = -std=c++14
CXXFLAGS = -g -Wall -Werror $(CXXSTD)

.PHONY : all
all : $(PROG)

$(PROG) : $(OBJS) Makefile
	$(CXX) -o $@ $(OBJS)

$(OBJS) : %.o:%.cpp Makefile
	$(CXX) -c $< $(CXXFLAGS)

.PHONY : clean
clean :
	@rm -rf $(PROG) $(OBJS)
