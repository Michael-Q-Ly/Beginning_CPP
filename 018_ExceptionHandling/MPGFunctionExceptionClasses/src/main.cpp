/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Miles per gallon - User-defined exception classes 
 *
 *        Version:  1.0
 *        Created:  11/06/2022 08:44:32 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Michael Ly
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>

class DivideByZeroException {
} ;

class NegativeValueException {
} ;

double calculate_mpg( int miles, int gallons ) ;

int main( int argc, char *argv[] ) {
	int miles {} ;
	int gallons {} ;
	double miles_per_gallon {} ;

	std::cout << "Enter the miles driven: " ;
	std::cin  >> miles ;
	std::cout << "Enter the gallons used: " ;
	std::cin  >> gallons ;

	try {
		miles_per_gallon = calculate_mpg( miles, gallons ) ;
		std::cout << "Result: " << miles_per_gallon << std::endl ;
	}
	catch ( DivideByZeroException const &ex ) {
		std::cerr << "Sorry, you can't divide by zero" << std::endl ;
	}
	catch ( NegativeValueException const &ex ) {
		std::cerr << "Sorry, one or more of your parameters is negative" << std::endl ;
	}

	std::cout << "Bye" << std::endl ;
	return 0 ;
}

/* ----------------------------------------------------------------------------*/
/**
 * @brief		Calculates miles per gallon and does exception handling
 *
 * @param miles		Miles driven
 * @param gallons	Gallons used up after driving number of miles specified
 *
 * @return double	Miles per gallon
 */
/* ------------------------------------------------------------------------------------*/
double calculate_mpg( int miles, int gallons ) {
	if ( !gallons ) {
		throw DivideByZeroException() ;
	}
	if ( miles < 0 || gallons < 0 ) {
		throw NegativeValueException() ;
	}

	return static_cast<double>( miles ) / gallons ;
}
