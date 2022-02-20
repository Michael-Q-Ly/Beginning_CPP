// Section 12
// Passing Pointers 1

#include <iostream>

void double_data( int *int_ptr ) ;

int main() {

	int value{10} ;
	int *int_ptr {nullptr} ;

	// Get the initial value and then pass the address to be used as a pointer in a function
	std::cout << "Value: " << value << std::endl ;
	double_data( &value ) ;
	std::cout << "Value: " << value << std::endl ;

	// Assign the pointer to the address of value and then pass by reference
	std::cout << "\n--------------------" << std::endl ;
	int_ptr = &value ;
	double_data( int_ptr ) ;
	std::cout << "Value: " << value << std::endl ;

	std::cout << std::endl ;
	return 0 ;
}

void double_data( int *int_ptr ) {
	*int_ptr *= 2 ;
}

