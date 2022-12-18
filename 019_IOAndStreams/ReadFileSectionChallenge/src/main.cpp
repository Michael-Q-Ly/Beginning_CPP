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

/*-----------------------------------------------------------------------------
 * Function prototypes 
 *-----------------------------------------------------------------------------*/
void print_header( void ) ;
void print_footer( double average ) ;
void print_student( std::string const &student, int score ) ;
int process_response( std::string const &response, std::string const &KEY ) ;

/*-----------------------------------------------------------------------------
 * MAIN 
 *-----------------------------------------------------------------------------*/
int main( int argc, char *argv[] ) {
	std::ifstream in_file ;
	std::string line {} ;
	std::string KEY {} ;
	std::string student_name {} ;
	std::string response {} ;
	uint8_t score_aggregate {};
	uint8_t num_students {} ;

	std::string file_grades {"grades.txt"} ;
	in_file.open( file_grades ) ;
	if ( !in_file ) {
		std::cerr << "File does not exist!" << std::endl ;
		std::exit ( exit_error::FILE_DNE ) ;
	}

	in_file >> KEY ;

	print_header() ;

	while( in_file >> student_name >> response ) {
		num_students++ ;
		int score {process_response( response, KEY )} ;
		score_aggregate += score ;
		print_student( student_name, score ) ;
	}
	if ( num_students != 0 ) {
		double student_average {static_cast<double>( score_aggregate ) / num_students} ;
		print_footer( student_average ) ;
	}

	in_file.close() ;

	std::cout << std::endl ;
	return 0 ;
}

/* ----------------------------------------------------------------------------*/
/**
 * @brief	Prints header for grade averages
 */
/* ------------------------------------------------------------------------------------*/
void print_header( void ) {
	std::cout << std::setw( 15 ) << std::left << "Student"
		  << std::setw( 5 ) << "Score" << std::endl ;
	std::cout << std::setw( 20 ) << std::setfill( '-' ) << "" << std::endl ;
	std::cout << std::setfill( ' ' ) ;
}

void print_footer( double average ) {
	std::cout << std::setw( 20 ) << std::setfill( '-' ) << "" <<  std::endl ;
	std::cout << std::setfill( ' ' ) ;
	std::cout << std::left << std::setw( 15 ) << "Average: " ;
	std::cout << std::right << std::setw( 5 ) << average << std::endl ;
}

void print_student( std::string const &student, int score ) {
	std::cout << std::setprecision( 1 ) << std::fixed ;
	std::cout << std::setw( 15 ) << std::left << student
		  << std::setw( 5 ) << std::right << score << std::endl ;
}

int process_response( std::string const &response, std::string const &KEY ) {
	int score {0} ;
	for ( size_t i {} ; i < response.length() ; i++ ) {
		if ( response.at( i )  == KEY.at( i ) ) {
			score++ ;
		}
	}
	return score ;
}
