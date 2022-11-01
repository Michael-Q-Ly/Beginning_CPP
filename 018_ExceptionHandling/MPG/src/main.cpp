/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Miles per Gallon - No Exception Handling 
 *
 *        Version:  1.0
 *        Created:  10/31/2022 09:40:31 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Michael Ly (github.com/Michael-Q-Ly)
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>

int main(int argc, char *argv[]) {
	int miles {} ;
	int gallons {} ;
	double miles_per_gallon {} ;

	std::cout << "Enter the miles: " ;
	std::cin  >> miles ;
	std::cout << "Enter the gallons: " ;
	std::cin  >> gallons ;

	/* miles_per_gallon = miles / gallons ; */
	if (gallons != 0) {
		miles_per_gallon = static_cast<double>(miles) / gallons ;
		std::cout << "Result: " << miles_per_gallon << std::endl ;
	}
	else {
		std::cerr << "Sorry, cann't divide by zero!" << std::endl ;
	}

	std::cout << "Bye" << std::endl ;
	return 0 ;
}
