/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  ReadFile4 - Read and display Shakespeare Sonnet 18 poen using unformatted get 
 *
 *        Version:  1.0
 *        Created:  11/17/2022 08:32:36 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Michael Ly
 *   Organization:  
 *
 * =====================================================================================
 */
#include <fstream>
#include <iostream>

enum exit_e {
	FILE_DNE = 1
} ;

int main( int argc, char *argv[] ) {
	std::ifstream in_file ;
	in_file.open( "./poem.txt" ) ;
	if ( !in_file ) {
		std::cerr << "Problem opening file" << std::endl ;
		std::exit( exit_e::FILE_DNE ) ;
	}

	char c {} ;
	while ( in_file.get( c ) ) {
		std::cout << c ;
	}

	in_file.close() ;

	std::cout << std::endl ;
	return 0 ;
}
