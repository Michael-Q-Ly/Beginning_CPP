/**
 * File Name	: main.cpp
 * Purpose	: Demonstrate knowledge of pointers and references in section 12
 * Author	: Michael Ly
 * Date		: Feb 20, 2022
 */

#include <iostream>

void print( int const *const array, int const ARRAY_SIZE ) ;
int *apply_all( int const *const array1, size_t const ARRAY1_SIZE, int const *const array2, size_t const ARRAY2_SIZE ) ;
void load_new_array( int const *const array1, size_t const ARRAY_SIZE1, int const *const array2, size_t const ARRAY2_SIZE, int *new_array ) ;

int main() {

	size_t const ARRAY1_SIZE {5} ;
	size_t const ARRAY2_SIZE {3} ;

	int array1[] { 1, 2, 3, 4, 5 } ;
	int array2[] { 10, 20, 30 } ;

	std::cout << "Array 1: " ;
	print( array1, ARRAY1_SIZE ) ;

	std::cout << "Array 2: " ;
	print( array2, ARRAY2_SIZE ) ;

	int *results {nullptr} ;
	size_t constexpr RESULTS_SIZE { ARRAY1_SIZE * ARRAY2_SIZE } ;

	results = apply_all( array1, ARRAY1_SIZE, array2, ARRAY2_SIZE ) ;

	std::cout << "Result : " ;
	print( results, RESULTS_SIZE ) ;

	( void )( ARRAY1_SIZE ) ;
	( void )( ARRAY2_SIZE ) ;
	( void )( array1 ) ;
	( void )( array2 ) ;

	delete [] results ;								// Free results array

	std::cout << std::endl ;
	return 0 ;
}

/**
 * This function gets a reference to an array and its size
 * and then prints every element in the array
 */
void print( int const *const array, int const ARRAY_SIZE ) {
	std::cout << "[ " ;
	for ( auto i{ 0 } ; i < ARRAY_SIZE ; i++ ) {
		// Print each element of the array out
		std::cout << *( array + i ) << " " ;
	}
	std::cout << "]" << std::endl ;
}

/**
 * Allocates new memory for an array the with a size proportional
 * to the two arrays given as arguments. Returns the pointer before
 * popping the original new array off the stack frame
 */
int *apply_all( int const *const array1, size_t const ARRAY1_SIZE, int const *const array2, size_t const ARRAY2_SIZE ) {
	int *new_storage {nullptr} ;
	size_t const NEW_STORAGE_SIZE { ARRAY1_SIZE * ARRAY2_SIZE } ;
	
	new_storage = new int[ NEW_STORAGE_SIZE ] ;

	load_new_array( array1, ARRAY1_SIZE, array2, ARRAY2_SIZE, new_storage ) ;
	return new_storage ;
}

/**
 * Loads each element of the new array with the product of the first
 * array and the second array. The first array is looped through and
 * multiplied with the initial element of the second array, and once
 * all of the first array has been looped through, the index for the
 * second array will increment. The loop continues until each
 * index of both arrays has been addressed and multiplied together.
 */
void load_new_array( int const *const array1, size_t const ARRAY1_SIZE, int const *const array2, size_t const ARRAY2_SIZE, int *new_array ) {
	for ( size_t i{ 0 } ; i < ARRAY2_SIZE ; i++ ) {
		for ( size_t j{ 0 } ; j < ARRAY1_SIZE ; j++ ) {
			*( new_array++ ) = array1[j] * array2[i] ;
		}
	}
}

