/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Stream manipulators - Integer manipulators 
 *			dec, hex, oct, showbase, uppercase, nuppercase, showpos
 *
 *        Version:  1.0
 *        Created:  11/08/2022 10:06:23 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Michael Ly
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iomanip>
#include <iostream>

int main( int argc, char *argv[] ) {
	int num {255} ;
	
	// Showing different bases
	std::cout << "\n------------------------------------------------------------" << std::endl ;
	std::cout << std::dec << num << std::endl ;
	std::cout << std::hex << num << std::endl ;
	std::cout << std::oct << num << std::endl ;

	// Displaying showing the base prefix for hex and oct 
	std::cout << "\n------------------------------------------------------------" << std::endl ;
	std::cout << std::showbase ;
	std::cout << std::dec << num << std::endl ;
	std::cout << std::hex << num << std::endl ;
	std::cout << std::oct << num << std::endl ;

	// Displaying the hex value in uppercase
	std::cout << "\n------------------------------------------------------------" << std::endl ;
	std::cout << std::showbase << std::uppercase ;
	std::cout << std::hex << num << std::endl ;

	// Display the + sign in front of positive base 10 numbers
	std::cout << "\n------------------------------------------------------------" << std::endl ;
	std::cout << std::showpos ;
	std::cout << std::dec << num << std::endl ;
	std::cout << std::hex << num << std::endl ;
	std::cout << std::oct << num << std::endl ;

	// Setting using the set method
	std::cout.setf( std::ios::showbase ) ;
	std::cout.setf( std::ios::uppercase ) ;
	std::cout.setf( std::ios::showpos ) ;

	// Resetting to defaults
	std::cout << std::resetiosflags( std::ios::basefield ) ;
	std::cout << std::resetiosflags( std::ios::showbase ) ;
	std::cout << std::resetiosflags( std::ios::showpos ) ;
	std::cout << std::resetiosflags( std::ios::uppercase ) ;

	std::cout << "\n------------------------------------------------------------" << std::endl ;
	std::cout << "Enter an integer: " ;
	std::cin  >> num ;

	std::cout << "Decimal default: " << num << std::endl ;
	
	std::cout << "Hexadecimal: " << std::hex << num << std::endl ;
	std::cout << "Hexadecimal: " << std::hex << std::uppercase << num << std::endl ;
	std::cout << "Hexadecimal: " << std::hex << num << std::endl ;
	std::cout << "Hexadecimal: " << std::hex << std::nouppercase << num << std::endl ;

	std::cout << "Octal      : " << std::oct << num << std::endl ;
	std::cout << "Hexadecimal: " << std::hex << std::showbase << num << std::endl ;
	std::cout << "Octal      : " << std::oct << num << std::endl ;


	std::cout << std::endl ;
	return 0 ;
}
