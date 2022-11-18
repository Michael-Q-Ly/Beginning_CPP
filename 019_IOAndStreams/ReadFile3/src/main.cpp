/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  ReadFile3 - Read and display Shakespeare Sonnet 18 poem using getline 
 *
 *        Version:  1.0
 *        Created:  11/17/2022 08:19:15 PM
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

#define EXIT_FILE_DNE		1

int main( int argc, char *argv[] ) {
	std::ifstream in_file ;

	in_file.open( "./poem.txt" ) ;
	if ( !in_file ) {
		std::cerr << "Problem opening file" << std::endl ;
		std::exit( EXIT_FILE_DNE ) ;
	}

	std::string line {} ;
	while ( std::getline( in_file, line ) ) {
		std::cout << line << std::endl ;
	}

	in_file.close() ;

	std::cout << std::endl ;
	return 0 ;
}
