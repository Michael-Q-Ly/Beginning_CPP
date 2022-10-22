/**
 * @file Test.cpp
 * @brief Test class methods and friend functions
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-10-24
 */
#include "Test.hpp"
#include <iostream>

Test::Test( void )
	: data{0} {
		std::cout << "Test constructor ( " << data << " )" << std::endl ;
}

Test::Test( int data )
	: data{data} {
		std::cout << "Test constructor ( " << data << " )" << std::endl ;
}

int Test::get_data( void ) const {
	return data ;
}

Test::~Test( void ) {
	std::cout << "Test destructor ( " << data << " )" << std::endl ;
}

/* ----------------------------------------------------------------------------*/
/**
 * @brief			- Overloarded insertion operator
 *
 * @param os			- Output Stream
 * @param obj			- Test object
 *
 * @return std::ostream		- The Test object as output
 */
/* ------------------------------------------------------------------------------------*/
std::ostream &operator<<( std::ostream &os, Test const &obj ) {
	os.precision( 2 ) ;
	os << std::fixed ;
	os << obj.data ;
	return os ;
}
