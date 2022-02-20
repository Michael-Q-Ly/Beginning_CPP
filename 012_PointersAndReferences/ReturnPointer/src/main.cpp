// Section 12
// Return Pointer

#include <iostream>

int *create_array( size_t size, int init_value = 0 ) ;
void display( int const *const array, size_t size ) ;

int main() {

	int *my_array {nullptr} ;
	size_t size ;
	int init_value {} ;

	std::cout << "\nHow many integers would you like to allocate? " ;
	std::cin  >> size ;
	std::cout << "What value would you like them initialized to? " ;
	std::cin  >> init_value ;

	my_array = create_array( size, init_value ) ;
	std::cout << "\n--------------------" << std::endl ;

	display( my_array, size ) ;
	delete [] my_array ;

	std::cout << std::endl ;
	return 0 ;
}

/**
 * This function allocates dynamic memory with a size the user
 * passes in. It then loads the new array with the value the user chose.
 * After that, it returns a pointer, the function ends,
 * and the dynamically allocated memory in this function is lost.
 * We do, however, have a copy of the pointer value (the memory
 * address) that we have sent back to our my_array pointer, though!
 * If we did not have this, we could have a memory leak.
 */
int *create_array( size_t size, int init_value ) {
	int *new_storage {nullptr} ;
	new_storage = new int[size] ;

	for ( size_t i{ 0 } ; i < size ; i++ ) {
		*( new_storage + i ) = init_value ;
	}

	std::cout << std::endl ;
	return new_storage ;
}

void display( int const *const array, size_t size ) {
	for ( size_t i{ 0 } ; i < size ; i++ ) {
		std::cout << array[i] << " " ;
	}
	std::cout << std::endl ;
}

