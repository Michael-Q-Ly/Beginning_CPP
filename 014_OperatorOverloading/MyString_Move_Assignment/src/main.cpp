/**
 * @file main.cpp
 * @author Michael Ly   (github.com/Michael-Q-Ly)
 * @brief Section 14 - Overloading move constructor and move assignment operator
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
	MyString a {"Hello"} ;					// Overloaded constructor
	a = MyString{"Hola"} ;					// Overloaded constructor then move assignment
	a = "Bounjour" ;					// Overloaded constructor then move assignment

#ifndef later
	MyString empty ;					// No-args constructor
	MyString larry("Larry") ;				// Overloaded constructor
	MyString stooge {larry} ;				// Copy constructor
	MyString stooges ;					// No-args constructor

	empty = stooge ;					// Copy assignment operator
								// stooge is an l-value

	empty = "Funny" ;					// Move assignment operator
								// "Funny" is an r-value

	empty.display() ;					// Larry: 5
	larry.display() ;					// Larry: 5
	stooge.display() ;					// Larry: 5
	empty.display() ;					// Larry: 5

	stooges = "Larry, Moe, and Curly" ;
	stooges.display() ;					// Larry, Moe, and Curly: 21

	std::vector<MyString> stooges_vec ;
	stooges_vec.push_back( "Larry" ) ;
	stooges_vec.push_back( "Moe" ) ;
	stooges_vec.push_back( "Curly" ) ;

	std::cout << "====Loop1========================" << std::endl ;
	for ( MyString const &s : stooges_vec ) {
		s.display() ;					// Larry
								// Moe
								// Curly
	}
	std::cout << "====Loop2========================" << std::endl ;
	for ( MyString &s : stooges_vec ) {
		s = "Changed" ;			// Copy assignment
	}
	std::cout << "====Loop3========================" << std::endl ;
	for ( MyString const &s : stooges_vec ) {
		s.display() ;					// Changed
								// Changed
								// Changed
	}
#endif /* later */

	std::cout << std::endl ;
	return 0 ;
}