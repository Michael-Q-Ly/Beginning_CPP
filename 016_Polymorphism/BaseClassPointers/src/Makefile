# File Name 	: Makefile
# Synopsis 	: Compile main
# Author 	: Michael Ly
# Date 		: September 7, 2022

PROG = baseClassPointers
CXX = g++
SRC = $(wildcard *.cpp)
OBJ = $(SRC:cpp=o)
CXXSTD = -std=c++14
CXXFLAGS = -g -Wall -Werror $(CXXSTD)

.PHONY : all
all: $(PROG)

$(PROG) : $(OBJ) Makefile
	$(CXX) -o $@ $(OBJ)

$(OBJ) : %.o: %.cpp Makefile
	$(CXX) -c $< $(CXXFLAGS)

.PHONY : clean
clean:
	@rm -rf $(PROG) $(OBJ)
