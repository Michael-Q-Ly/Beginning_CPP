// Section 12
// Passing Pointers 2

#include <iostream>
#include <string>
#include <vector>

void swap( int *a, int *b ) ;

int main() {

	int x {100} ;
	int y {200} ;
	std::cout << "\nx: " << x << std::endl ;
	std::cout << "\ny: " << y << std::endl ;

	swap( &x, &y ) ;

	std::cout << "\nx: " << x << std::endl ;
	std::cout << "\ny: " << y << std::endl ;

	std::cout << std::endl ;
	return 0 ;
}

void swap( int *a, int *b ) {
	int temp = *a ;
	*a = *b ;
	*b = temp ;
}

