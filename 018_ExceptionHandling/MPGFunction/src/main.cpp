/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Miles per gallon function 
 *
 *        Version:  1.0
 *        Created:  11/06/2022 12:02:01 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Michael Ly
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>

double calculate_mpg( int miles, int gallons ) {
	if ( !gallons ) {
		throw 0 ;
	}
	return static_cast<double>( miles ) / gallons ;
}

int main( int argc, char *argv[] ) {
	int miles {} ;
	int gallons {} ;
	double miles_per_gallon {} ;

	std::cout << "Enter miles: " ;
	std::cin  >> miles ;
	std::cout << "Enter the gallons: " ;
	std::cin  >> gallons ;
	try {
		miles_per_gallon = calculate_mpg( miles, gallons  ) ;
		std::cout << "Result: " << miles_per_gallon << std::endl ;
	}
	catch (int &ex) {
		std::cerr << "Tried to divide by zero" << std::endl ;
	}

	std::cout << "Bye" << std::endl ;
	return 0 ;
}
