/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Test for file open and simple read of 3 data items 
 *
 *        Version:  1.0
 *        Created:  11/14/2022 09:07:36 PM
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

	in_file >> line >> num >> total ;
	std::cout << line << std::endl ;
	std::cout << num << std::endl ;
	std::cout << total << std::endl ;

	in_file.close() ;

	std::cout << std::endl ;
	return 0 ;
}
