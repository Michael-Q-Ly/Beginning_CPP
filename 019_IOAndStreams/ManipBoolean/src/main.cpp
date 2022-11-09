/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Stream manipulators - Boolean - boolalpha and noboolalpha 
 *
 *        Version:  1.0
 *        Created:  11/08/2022 06:33:41 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Michael Ly
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <iomanip>	// Must include for manipulators

int main( int argc, char *argv[] ) {
	std::cout << "noboolalpha - default (10 == 10): " << ( 10 == 10 ) << std::endl ;
	std::cout << "noboolalpha - default (10 == 20): " << ( 10 == 20 ) << std::endl ;

	// Set to true/false formatting
	std::cout << std::boolalpha ;
	std::cout << "boolalpha - default (10 == 10): " << ( 10 == 10 ) << std::endl ;
	std::cout << "boolalpha - default (10 == 20): " << ( 10 == 20 ) << std::endl ;

	// Toggle to 0/1
	std::cout << std::noboolalpha ;
	std::cout << "boolalpha - default (10 == 10): " << ( 10 == 10 ) << std::endl ;
	std::cout << "boolalpha - default (10 == 20): " << ( 10 == 20 ) << std::endl ;

	// Set back to true/false using setf method
	std::cout.setf( std::ios::boolalpha ) ;
	std::cout << "boolalpha (10 == 10): " << ( 10 == 10 ) << std::endl ;
	std::cout << "boolalpha (10 == 20): " << ( 10 == 20 ) << std::endl ;

	// Resets to default, which is 0/1
	std::cout << std::resetiosflags( std::ios::boolalpha ) ;
	std::cout << "Default (10 == 10): " << ( 10 == 10 ) << std::endl ;
	std::cout << "Default (10 == 20): " << ( 10 == 20 ) << std::endl ;

	std::cout << std::endl ;
	return 0 ;
}
