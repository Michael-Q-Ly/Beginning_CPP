/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  11/14/2022 09:25:33 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Michael Ly
 *   Organization:  
 *
 * =====================================================================================
 */
#include <fstream>
#include <iomanip>
#include <iostream>

int main( int argc, char *argv[] ) {
	std::ifstream in_file ;
	std::string line ;
	int num ;
	double total ;

	in_file.open( "test.txt" ) ;
	if ( !in_file ) {
		std::cerr << "Problem opening file" << std::endl ;
		std::exit( 1 ) ;
	}

	/*-----------------------------------------------------------------------------
	 * This code does not behave correctly on Linux/Mac OS because of the
	 * differences in the way Windows and Linux/Mac handle line terminators
	 * and end-of-file
	 *
	 * Use the other method that is not commented out for Linux distros and Mac OS
	 *-----------------------------------------------------------------------------*/
	/* while ( !in_file.eof() ) { */
	/* 	in_file >> line >> num >> total ; */
	/* 	std::cout << std::setw( 10 ) << std::left << line */
	/* 		  << std::setw( 10 ) << num */
	/* 		  << std::setw( 10 ) << total */
	/* 		  << std::endl ; */
	/* } */

	while ( in_file >> line >> num >> total ) {
		std::cout << std::setw( 10 ) << std::left << line
			  << std::setw( 10 ) << num
			  << std::setw( 10 ) << total
			  << std::endl ;
	}

	in_file.close() ;

	std::cout << std::endl ;
	return 0 ;
}
