/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Stream manipulators - Field width, justification, and setfill 
 *
 *        Version:  1.0
 *        Created:  11/10/2022 10:32:34 PM
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

void ruler( void ) ;

int main( int argc, char *argv[] ) {
	int num1 {1234} ;
	double num2 {1234.5678} ;
	std::string hello {"Hello"} ;

	// Defaults
	std::cout << "\n---------------- Defaults ----------------" << std::endl ;
	ruler() ;
	std::cout << num1
		  << num2
		  << hello
		  << std::endl ;

	// Defaults - one per line
	std::cout << "\n---------------- Defaults - one per line ----------------" << std::endl ;
	ruler() ;
	std::cout << num1 << std::endl ;
	std::cout << num2 << std::endl ;
	std::cout << hello << std::endl ;

	// Set field width to 10
	// Note: The default justification is right for num1 only!
	std::cout << "\n---------------- Width 10 for num1 ----------------" << std::endl ;
	ruler() ;
	std::cout << std::setw( 10 ) << num1
		  << num2
		  << hello
		  << std::endl ;

	// Set field width to 10 for the first 2 outputs
	// Note: The default justification is right for both
	std::cout << "\n---------------- Width 10 for num1 and num2 ----------------" << std::endl ;
	ruler() ;
	std::cout << std::setw( 10 ) << num1
		  << std::setw( 10 ) << num2
		  << hello
		  << std::endl ;

	// Set field width to 10 for all 3 outputs
	// Note: The default justification is right for all
	std::cout << "\n---------------- Width 10 for num1, num2, and hello ----------------" << std::endl ;
	ruler() ;
	std::cout << std::setw( 10 ) << num1
		  << std::setw( 10 ) << num2
		  << std::setw( 10 ) << hello
		  << std::endl ;

	// Set field width to 10 for all 3 outputs and justify left for all
	std::cout << "\n---------------- Width 10 for num1, num2, and hello left for all ----------------" << std::endl ;
	ruler() ;
	std::cout << std::setw( 10 ) << std::left << num1
		  << std::setw( 10 ) << std::left << num2
		  << std::setw( 10 ) << std::left << hello
		  << std::endl ;

	// setfill to a dash
	// Note: This is persistent
	// Then repeat the previous display
	std::cout << std::setfill('-') ;
	std::cout << "\n---------------- Width 10 for num1, num2, and hello left for all setfill to dash ----------------" << std::endl ;
	ruler() ;
	std::cout << std::setw( 10 ) << std::left << num1
		  << std::setw( 10 ) << std::left << num2
		  << std::setw( 10 ) << std::left << hello
		  << std::endl ;

	// Set width to 10 for all, left justify all, and carry the setfill character
	std::cout << "\n---------------- Width 10 for num1, num2, and hello left for all setfill varies ----------------" << std::endl ;
	ruler() ;
	std::cout << std::setw( 10 ) << std::left << std::setfill('*') << num1
		  << std::setw( 10 ) << std::left << std::setfill('#') << num2
		  << std::setw( 10 ) << std::left << std::setfill('-') << hello
		  << std::endl ;
	

	std::cout << std::endl ;
	return 0 ;
}

void ruler( void ) {
	std::cout << "\n12345678901234567890123456789012345678901234567890" << std::endl ;
}
