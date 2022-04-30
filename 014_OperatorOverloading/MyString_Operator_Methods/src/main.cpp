/**
 * @file main.cpp
 * @author Michael Ly   (github.com/Michael-Q-Ly/)
 * @brief 
 * @version 0.1
 * @date 2022-04-14
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "MyString.hpp"
#include <iostream>
#include <String>

int main() {
	std::cout << std::boolalpha <<std::endl ;

	MyString larry {"Larry"} ;
	MyString moe {"Moe"} ;

	MyString stooge = larry ;
	larry.display() ;						// Larry
	moe.display() ;							// Moe

	std::cout << ( larry == moe ) << std::endl ;			// False
	std::cout << ( larry == stooge ) << std::endl ;			// True

	larry.display() ;						// Larry
	MyString larry2 = -larry ;
	larry2.display() ;						// larry

	MyString two_stooges = moe + " " + "Larry" ;
	two_stooges.display() ;						// Moe Larry

	MyString three_stooges = moe + " " + larry + " " + "Curly" ;
	three_stooges.display() ;					// Moe Larry Curly

	std::cout << std::endl ;
	return 0 ;
}
