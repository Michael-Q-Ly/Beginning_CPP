// Section 11
// Inline

#include <iostream>

inline int add_numbers( int a, int b ) ;

int main() {

	int result {} ;
	result = add_numbers( 100, 200 ) ;	// Call
	std::cout << "result = " << result << std::endl ;

	std::cout << std::endl ;
	return 0 ;
}
inline int add_numbers( int a, int b ) {
	return a + b ;
}

