# File 		: Makefile
# Brief 	: Compiles interfacesStart
# Author 	: Michael Ly
# Date 		: September 15, 2022

PROG = interfacesStart
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

.PHONY : clean
	:
clean :
	@rm -rf $(PROG) $(OBJS)
