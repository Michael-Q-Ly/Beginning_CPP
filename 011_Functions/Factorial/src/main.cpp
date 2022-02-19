// Section 11
// Recursion - Factorial

#include <iostream>

unsigned long long factorial( unsigned long long n ) ;

int main() {

	std:: cout << factorial( 3 ) << std::endl ;		// 6
	std:: cout << factorial( 8 ) << std::endl ;		// 40320
	std:: cout << factorial( 12 ) << std::endl ;		// 479001600
	std:: cout << factorial( 20 ) << std::endl ;		// 2432902008176640000

	std::cout << std::endl ;
	return 0 ;
}

unsigned long long factorial( unsigned long long n ) {
	if ( !n ) {
		return 1 ;					// Base case
	}
	return n * factorial( n-1 ) ;				// Recursive case
}

