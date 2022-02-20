// Section 12
// Debugger

#include <iostream>

void swap (int *a, int *b ) ;

int main() {

	int i {5} ;
	while ( i > 0 ) {
		std::cout << i << std::endl ;
		i-- ;
	}

	int x {100} ;
	int y {200} ;

	std::cout << "\nx = " << x << std::endl ;
	std::cout << "y = " << y << std::endl ;

	swap( &x, &y ) ;

	std::cout << "\nx = " << x << std::endl ;
	std::cout << "y = " << y << std::endl ;

	std::cout << std::endl ;
	return 0 ;
}

/**
 * This function takes two int arguments
 * aas reference and swaps their values
 */
void swap (int *a, int *b ) {
	int temp = *a ;
	*a = *b ;
	*b = temp ;
}

