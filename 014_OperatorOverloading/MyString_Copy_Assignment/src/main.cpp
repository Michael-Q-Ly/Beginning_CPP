/**
 * @file main.cpp
 * @author Michael Ly	(github.com/Michael-Q-Ly)
 * @brief Section 14 - Overloading Copy Assignment 
 * @version 0.1
 * @date 2022-04-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "MyString.hpp"
#include <iostream>
#include <vector>

int main() {
	MyString a {"Hello"} ;			// Overloaded constructor
	MyString b ;				// No-args constructor
	b = a ;					// Copy assignment
						// b.operator=(a)
	b = "This is a test" ;			// b.operator=("This is a test" )

	MyString empty ;			// No-args constructor
	MyString larry("Larry") ;		// Overloaded constructor
	MyString stooge {larry} ;		// Copy constructor
	MyString stooges ;			// No-args constructor

	empty = stooge ;			// Copy assignment operator

	empty.display() ;			// Larry: 5
	larry.display() ;			// Larry: 5
	stooge.display() ;			// Larry: 5
	empty.display() ;			// Larry: 5

	stooges = "Larry, Moe, and Curcly" ;
	stooges.display() ;			// Larry, Moe, and Curly: 21

	std::vector<MyString> stooges_vec ;
	stooges_vec.push_back( "Larry" ) ;
	stooges_vec.push_back( "Moe" ) ;
	stooges_vec.push_back( "Curly" ) ;

	std::cout << "====Loop1========================" << std::endl ;
	for ( MyString const &s : stooges_vec ) {
		s.display() ;			// Larry
						// Moe
						// Curly
	}
	std::cout << "====Loop2========================" << std::endl ;
	for ( MyString &s : stooges_vec ) {
		s = "Changed" ;			// Copy assignment
	}
	std::cout << "====Loop3========================" << std::endl ;
	for ( MyString const &s : stooges_vec ) {
		s.display() ;			// Changed
						// Changed
						// Changed
	}

	std::cout << std::endl ;
	return 0 ;
}
