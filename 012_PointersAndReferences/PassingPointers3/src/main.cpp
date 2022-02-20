// Section 12
// Passing Pointers 3

#include <iostream>
#include <string>
#include <vector>

int const SCORES_SENTINEL = -1 ;

void display( std::vector <std::string> const *const v ) ;
void display( int *array, int sentintel ) ;

int main() {

	std::cout << "--------------------" << std::endl ;
	std::vector <std::string> stooges { "Larry", "Moe", "Curly" } ;
	display( &stooges ) ;

	std::cout << "\n--------------------" << std::endl ;
	int scores[] { 100, 98, 97, 79, 85, SCORES_SENTINEL } ;
	display( scores, SCORES_SENTINEL ) ;

	std::cout << std::endl ;
	return 0 ;
}

void display( std::vector <std::string> const *const v ) {
//	( *v ).at( 0 ) = "Funny" ;						// Can't do; const data
	for ( auto str : *v ) {
		std::cout << str << " " ;
	}
	std::cout << std::endl ;

//	v = nullptr ;								// Can't do; const pointer
}

void display( int *array, int sentinel ) {
	while ( *array != sentinel ) {
		std::cout << *array++ << " " ;
	}
	std::cout << std::endl ;
}

