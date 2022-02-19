// Section 12
// Dynamic Memory

#include <iostream>

int main() {

	int *int_ptr {nullptr} ;
	int_ptr = new int ;
	std::cout << int_ptr << std::endl ;
	delete int_ptr ;

	size_t size {0} ;
	double *temp_ptr {nullptr} ;

	// Define how much space you want to use in memory
	std::cout << "How many temperatures? " ;
	std::cin  >> size ;
	
	// Allocate that space into memory
	// while (true)							// This will lead to a segfault! Memory overflow from heap
	temp_ptr = new double[size] ;

	std::cout << temp_ptr << std::endl ;

	// Free up the memory
	delete [] temp_ptr ;

	std::cout << std::endl ;
	return 0 ;
}

