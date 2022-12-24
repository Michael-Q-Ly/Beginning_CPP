/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Section Challenge 3 - Finding words 
 *
 *        Version:  1.0
 *        Created:  12/18/2022 03:22:49 PM
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

enum exit_error {
	INVALID_NUM_ARGS,
	FILE_DNE
} ;

void find_word_in_file( std::string const file_name , std::string const word_to_find ) ;

int main( int argc, char *argv[] ) {

	if ( argc < 2 ) {
		std::cerr << "Not enough arguments; please specify a file to read" << std::endl ;
		std::cerr << "Usage: ./readFileSectionChallenge2 <arg1>" << std::endl ;
		std::exit( exit_error::INVALID_NUM_ARGS ) ;
	}

	std::string file_name = static_cast<std::string>( argv[1] ) ;

	std::string word_to_find {} ;
	int matched_words {0} ;

	(void)matched_words ;				// Remove later

	std::cout << "Enter a word to search for: " ;
	std::cin  >> word_to_find ;

	find_word_in_file( file_name, word_to_find ) ;


	std::cout << "Hello, world!" ;
	
	std::cout << std::endl ;
	return 0 ;
}

void find_word_in_file( std::string const file_name , std::string const word_to_find ) {
	std::ifstream in_file ;

	// Attempt to open file
	in_file.open( file_name ) ;
	if ( !in_file ) {
		std::cerr << "File does not exist!" << std::endl ;
		std::exit( exit_error::FILE_DNE ) ;
	}

	// Go through character-by-character and search for 'word
	// 1. Find word's length
	// 2. If the first letter does not match, reset a correct_char counter
	// 3. else increment the correct_char counter
	// 4. If correct_char counter equals word length, you have a match; increment num_matches_count
	
	char current_char {} ;
	short const word_length = word_to_find.length() ;
	short correct_char_count {0} ;
	short num_matches_count {0} ;
	for ( int i = 0 ; in_file >> current_char, i < word_length ; i++ ) {
		if ( current_char != word_to_find.at( i ) ) {
			std::cout << current_char << std::endl ;
			continue ;
		}
		if ( i == word_length - 1 ) {
			i = 0 ;
		}
		correct_char_count++ ;
		if ( correct_char_count == word_length ) {
			correct_char_count = 0 ;
			num_matches_count++ ;
		}
	}
	std::cout << "Num matches = " << num_matches_count << std::endl ;


	// Close file
	in_file.close() ;

	return ;
}
