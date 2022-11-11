/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Stream manipulators - Floating point manipulators
 *			scientific, setprecision, fixed, showpoint, showpos, uppercase
 *
 *        Version:  1.0
 *        Created:  11/10/2022 09:43:43 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Michael  Ly
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iomanip>
#include <iostream>

int main( int argc, char *argv[] ) {
	double num1 {123456789.987654321} ;
	double num2 {1234.5678} ;
	double num3 {1234.0} ;

	// Using default settings
	std::cout << "---------------- Defaults ----------------" << std::endl ;
	std::cout << num1 << std::endl ;
	std::cout << num2 << std::endl ;
	std::cout << num3 << std::endl ;

	// Note how since we can't display in precision 2 scientifc notation is used
	std::cout << std::setprecision( 2 ) ;
	std::cout << "---------------- Precision 2 ----------------" << std::endl ;
	std::cout << num1 << std::endl ;
	std::cout << num2 << std::endl ;
	std::cout << num3 << std::endl ;

	// Use precision 5
	std::cout << std::setprecision( 5 ) ;
	std::cout << "---------------- Precision 5 ----------------" << std::endl ;
	std::cout << num1 << std::endl ;
	std::cout << num2 << std::endl ;
	std::cout << num3 << std::endl ;

	// Use precision 9
	std::cout << std::setprecision( 9 ) ;
	std::cout << "---------------- Precision 9 ----------------" << std::endl ;
	std::cout << num1 << std::endl ;
	std::cout << num2 << std::endl ;
	std::cout << num3 << std::endl ;

	// Using precision 3 and fixed
	std::cout << std::setprecision( 3 ) << std::fixed ;
	std::cout << "---------------- Precision 3 & fixed ----------------" << std::endl ;
	std::cout << num1 << std::endl ;
	std::cout << num2 << std::endl ;
	std::cout << num3 << std::endl ;

	// Using precision 3, fixed, and scientific notation
	// Note how precision is after the decimal
	std::cout << std::setprecision( 3 ) << std::scientific ;
	std::cout << "---------------- Precision 3 & scientific ----------------" << std::endl ;
	std::cout << num1 << std::endl ;
	std::cout << num2 << std::endl ;
	std::cout << num3 << std::endl ;

	// Same, but display capital 'E' in scientific
	std::cout << std::setprecision( 3 ) << std::scientific << std::uppercase ;
	std::cout << "---------------- Precision 3 & Scientific uppercase ----------------" << std::endl ;
	std::cout << num1 << std::endl ;
	std::cout << num2 << std::endl ;
	std::cout << num3 << std::endl ;

	// Show '+' symbol for positive numbers
	std::cout << std::setprecision( 3 ) << std::fixed << std::showpos ;
	std::cout << "---------------- Precision 3 fixed showpos ----------------" << std::endl ;
	std::cout << num1 << std::endl ;
	std::cout << num2 << std::endl ;
	std::cout << num3 << std::endl ;

	// Back to defaults
	std::cout.unsetf( std::ios::scientific | std::ios::fixed ) ;
	std::cout << std::resetiosflags( std::ios::showpos ) ;

	// Show trailing zeroes up to precision 10
	std::cout << std::setprecision( 10 ) << std::showpoint ;
	std::cout << "---------------- Precision 10 & showpoint ----------------" << std::endl ;
	std::cout << num1 << std::endl ;
	std::cout << num2 << std::endl ;
	std::cout << num3 << std::endl ;

	// Back to defaults
	std::cout.unsetf( std::ios::scientific | std::ios::fixed ) ;
	std::cout << std::setprecision( 6 ) ;
	std::cout << std::resetiosflags( std::ios::showpos ) ;
	std::cout << std::resetiosflags( std::ios::showpoint ) ;

	std::cout << "---------------- Back to defaults ----------------" << std::endl ;
	std::cout << num1 << std::endl ;
	std::cout << num2 << std::endl ;
	std::cout << num3 << std::endl ;

	std::cout << std::endl ;
	return 0 ;
}
