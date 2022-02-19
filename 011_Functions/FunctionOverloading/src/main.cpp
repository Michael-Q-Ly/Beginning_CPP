// Section 11
// Function Overloading

#include <iostream>
#include <string>
#include <vector>

// void print( int = 100 ) ;
void print( int ) ;
void print( double = 125.5 ) ;
void print( std::string ) ;
void print( std::string, std::string ) ;
void print( std::vector <std::string> ) ;

int main() {

	print() ;

	print( 100 ) ;									// int
	print( 'A' ) ;									// Character is always promoted to int; should print 65 ASCII ('A')

	print( 123.5 ) ;								// double
	print( 123.3F ) ;								// Float is promoted to double

	print( "C-style string" ) ;							// C-style string is converted to a C++ string

	std::string s{"C++ string"} ;
	print( s ) ; 									// C++ string

	print( "C-style string", s ) ;							// First argument is converted to a C++ string

	std::vector <std::string> three_stooges {"Larry", "Moe", "Curly"} ;
	print( three_stooges ) ;

	std::cout << std::endl ;
	return 0 ;
}
void print( int num ) {
	std::cout << "Printing int: " << num << std::endl ;
}

void print( double num ) {
	std::cout << "Printing double: " << num << std::endl ;
}

void print( std::string s ) {
	std::cout << "Printing string: " << s << std::endl ;
}

void print( std::string s, std::string t ) {
	std::cout << "Printing two strings: " << s << " and " << t <<  std::endl ;
}

void print( std::vector <std::string> v ) {
	std::cout << "Printing vector of strings: " ;
	for ( auto s: v ) {
		std::cout << s + " " ;
	}
	std::cout << std::endl ;
}

