# File 		: Makefile
# Brief 	: Compile uniquePointer example
# Author 	: Michael Ly
# Date 		: September 23, 2022

PROG = sharedPointers
SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

CXX = g++
IDIR = -I../inc
CXXSTD = -std=c++14
CXXFLAGS = -g -Wall -Werror $(CXXSTD) $(IDIR)

.PHONY : all
all : $(PROG)

$(PROG) : $(OBJS) Makefile
	$(CXX) -o $@ $(OBJS)

$(OBJS) : %.o:%.cpp Makefile
	$(CXX) -c $< $(CXXFLAGS)

.PHONY : clean
clean :
	@rm -rf $(PROG) $(OBJS)
