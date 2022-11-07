/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Stack Unwinding 
 *
 *        Version:  1.0
 *        Created:  11/06/2022 04:33:10 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Michael Ly
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>

void func_a( void ) ;
void func_b( void ) ;
void func_c( void ) ;

int main( int argc, char *argv[] ) {
	std::cout << "Starting main" << std::endl ;
	try {
		func_a() ;
	}
	catch ( int &ex ) {
		std::cout << "Caught error in main" << std::endl ;
	}
	std::cout << "Finishing main" << std::endl ;
	return 0 ;
}

void func_a( void ) {
	std::cout << "Starting func_a" << std::endl ;
	func_b() ;
	std::cout << "Ending func_a" << std::endl ;
}

void func_b( void ) {
	std::cout << "Starting func_b" << std::endl ;
	try {
		func_c() ;
	}
	catch ( int &ex ) {
		std::cout << "Caught error in func_b" << std::endl ;
	}
	std::cout << "Ending func_b" << std::endl ;
}

void func_c( void ) {
	std::cout << "Starting func_c" << std::endl ;
	throw 100 ;
	std::cout << "Ending func_c" << std::endl ;
}
