/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Section 19 Challenge 2 - Read Files 
 *
 *        Version:  1.0
 *        Created:  11/18/2022 07:09:31 PM
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

enum exit_error {
	FILE_DNE
} ;

int main( int argc, char *argv[] ) {
	std::ifstream in_file ;

	std::string file_grades {"grades.txt"} ;
	in_file.open( file_grades ) ;
	if ( !in_file ) {
		std::cerr << "File does not exist!" << std::endl ;
		std::exit ( exit_error::FILE_DNE ) ;
	}

	std::string line {} ;
	std::string KEY {} ;

	std::getline( in_file, KEY ) ;

	uint8_t count {1} ;
	uint8_t score_aggregate {};
	uint8_t num_students {} ;
	std::cout << std::setw( 20 ) << std::left << "Student"
		  << "Score" << std::endl
		  << "-------------------------"
		  << std::endl ;
	while( std::getline( in_file, line ) ) {
		// On even-numbered lines, check if answers match with KEY
		if ( !( count % 2 ) ) {
			int score {0} ;
			// Compare each letter
			for ( size_t i {} ; i < line.length() ; i++ ) {
				if ( line[i]  == KEY[i] ) {
					score++ ;
				}
			}
			// Print out score out of how many questions there were in they KEY
			std::cout << score << "/" << KEY.length() << std::endl ;
			score_aggregate += score ;
		}
		// else print out student name
		else {
			num_students++ ;
			std::cout << std::setw( 20 ) << std::left << line ;
		}
		count++ ;
	}
	std::cout << "-------------------------" << std:: endl ;
	std::cout << std::setw( 20 ) << "Average: " ;
	if ( num_students != 0 ) {
		double student_average {score_aggregate / (double)num_students} ;
		std::cout << student_average << std::endl ;
	}

	std::cout << std::endl ;
	return 0 ;
}
