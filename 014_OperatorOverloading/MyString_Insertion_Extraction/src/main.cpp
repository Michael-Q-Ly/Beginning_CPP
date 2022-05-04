/**
 * @file main.cpp
 * @author Michael Ly   (github.com/Michael-Q-Ly/)
 * @brief 
 * @version 0.6
 * @date 2022-05-01
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "MyString.hpp"
// #include <iostream>
#include <String>

int main() {

	MyString larry {"Larry"} ;
	MyString moe {"Moe"} ;
	MyString curly ;

	std::cout << "Enter the third stooge's first name: " ;
	std::cin  >> curly ;

	std::cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << std::endl ;

	std::cout << "\nEnter the three stooges names separated by a space: " ;
	std::cin  >> larry >> moe >> curly ;

	std::cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << std::endl ;

	std::cout << std::endl ;
	return 0 ;
}
