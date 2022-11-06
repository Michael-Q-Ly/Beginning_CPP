/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Miles per gallon - function - multiple exceptions 
 *
 *        Version:  1.0
 *        Created:  11/06/2022 03:56:18 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Michael Ly
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>

double calculate_mpg( int miles, int gallons ) ;

int main( int argc, char *argv[] ) {
	int miles {};
	int gallons {} ;
	double miles_per_gallon {} ;

	std::cout << "Enter the miles: " ;
	std::cin  >> miles ;
	std::cout << "Enter the gallons: " ;
	std::cin  >> gallons ;
	try {
		miles_per_gallon = calculate_mpg( miles, gallons ) ;
		std::cout << "Result: " << miles_per_gallon << std::endl ;
	}
	catch ( int &ex ) {
		std::cerr << "Tried to divide by zero" << std::endl ;
	}
	catch ( std::string &ex ) {
		std::cerr << ex << std::endl ;
	}
	catch ( ... ) {
		// Catch any other exceptions thrown
	}

	std::cout << "Bye" << std::endl ;
	return 0 ;
}

double calculate_mpg( int miles, int gallons ) {
	if ( !gallons ) {
		throw 0 ;
	}
	if ( miles < 0 || gallons < 0 ) {
		throw std::string {"Negative value error"} ;
	}
	return static_cast<double>( miles ) / gallons ;
}
