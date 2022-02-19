// Section 11
// Scope

#include <iostream>

void local_example( int x ) ;
void global_example( void ) ;
void static_local_example( void ) ;

int num {300} ;							// Global varialble - declared outside any class or function

int main() {

	int num {100} ;						// Local to main
	int num1 {500} ;					// Local to main

	std::cout << "Local num is: " << num << " in main" << std::endl ;

	{ // Creates a new level of scope
		int num {200} ;					// Local to this inner block
		std::cout << "Local num is: " << num << " in inner block in main" << std::endl ;
		std::cout << "Inner block in main can see out - num1 is: " << num1 << std::endl ;
	}

	std::cout << "Local num is: " << num << " in main " << std::endl ;

	local_example( 10 ) ;
	local_example( 20 ) ;

	global_example() ;
	global_example() ;

	static_local_example() ;
	static_local_example() ;
	static_local_example() ;

	std::cout << std::endl ;
	return 0 ;
}

void local_example( int x ) {
	int num {1000} ;					// Local to local_example
	std::cout << "\nLocal num is: " << num << " in local_example - start" << std::endl ;
	num = x ;
	std::cout << "Local num is: " << num << " in local_example - end" << std::endl ;
	// num1 in main is not within scope, so it cannot be used here.
}

void global_example( void ) {
	std::cout << "\nGlobal num is: " << num << " in global_example - start" << std::endl ;
	num *= 2 ;
	std::cout << "Global num is: " << num << " in global_example - end" << std::endl ;
}

void static_local_example( void ) {
	static int num {5000} ;					// Local to static_local_example static - retains its value between calls
	std::cout << "\nLocal static num is: " << num << " in static_local_example - start" << std::endl ;
	num += 1000 ;
	std::cout << "Local static num is: " << num << " in static_local_example - end" << std::endl ;
}

