/**
 * @file main.cpp
 * @author Michael Ly   (github.com/Michael-Q-Ly/)
 * @brief 
 * @version 0.1
 * @date 2022-05-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "MyString.hpp"
#include <iostream>
#include <String>

int main() {
	MyString larry {"Larry"} ;
	larry.display() ;						// Larry

	larry = -larry ;
	larry.display() ;						// larry

	std::cout << std::boolalpha <<std::endl ;
	MyString moe {"Moe"} ;
	MyString stooge = larry ;

	std::cout << ( larry == moe ) << std::endl ;			// False
	std::cout << ( larry == stooge ) << std::endl ;			// True

	// MyString stooges = larry + "Moe" ;
	MyString stooges = "Larry" + moe ;				// Now OK with non-member function
	stooges.display() ;						// LarryMoe

	MyString two_stooges = moe + " " + "Larry" ;
	two_stooges.display() ;						// Moe Larry

	MyString three_stooges = moe + " " + larry + " " + "Curly" ;
	three_stooges.display() ;					// Moe Larry Curly

	std::cout << std::endl ;
	return 0 ;
}
