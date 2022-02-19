# File Name	: Makefile
# Purpose	: Build Dynamic Memory 
# Author	: Michael Ly
# Date		: Feb 18, 2022


PROG = dynamicMemory 
CXX = g++
#CXX = x86_64-w64-mingw32-g++			# Hoped to use DrMemory memory check tool
OBJ = main.o
CXXFLAGS = -g -Wall -Werror -std=c++14

.PHONY: all
all: $(PROG)

$(PROG): $(OBJ)
	$(CXX) -o $@ $^

$(OBJ): main.cpp
	$(CXX) $(CXXFLAGS) -c $<

.PHONY: drmemory
drmemory:
	x86_64-w64-mingw32-g++ -o $(PROG) main.cpp
	@printf "Checking for memory leaks...\n\n"
	@drmemory.exe -check_leaks -count_leaks -show_reachable -brief -leaks_only $(PROG)	# '@' silences the command in the CLI
	
.PHONY:clean
clean:
	rm -rf *.o *.exe

