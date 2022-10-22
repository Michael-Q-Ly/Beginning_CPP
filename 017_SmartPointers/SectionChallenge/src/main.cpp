/**
 * @file main.cpp
 * @brief Section 17 challenge - smart pointers
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-10-22
 */
#include "Test.hpp"
#include <iostream>
#include <memory>
#include <vector>

static std::unique_ptr<std::vector<std::shared_ptr<Test>>> make( void ) ;
static void fill( std::vector<std::shared_ptr<Test>> &vec, int num ) ;
static void display( std::vector<std::shared_ptr<Test>> const &vec ) ;

/*-----------------------------------------------------------------------------
 * MAIN PROGRAM 
 *-----------------------------------------------------------------------------*/
int main( int argc, char *argv[] ) {
	std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr ;
	vec_ptr = make() ;
	std::cout << "How many data points do you want to enter: " ;
	int num ;
	std::cin  >> num ;
	fill( *vec_ptr, num ) ;
	display( *vec_ptr ) ;

	std::cout << std::endl ;
	return 0 ;
}

/*-----------------------------------------------------------------------------
 * Functions 
 *-----------------------------------------------------------------------------*/

/* ----------------------------------------------------------------------------*/
/**
 * @brief		- Creates a unique ptr to a vector of shared pointers that point
 *			  to Test objects
 *
 * @return std::unique_ptr<std::vector<std::shared_ptr<Test>>> 
 */
/* ------------------------------------------------------------------------------------*/
static std::unique_ptr<std::vector<std::shared_ptr<Test>>> make( void ) {
	std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr = std::make_unique<std::vector<std::shared_ptr<Test>>>() ;
	
	return vec_ptr ;
}

/* ----------------------------------------------------------------------------*/
/**
 * @brief		- Dynamically fills a vector of shared pointers to a Test object
 *			  by asking the user what number they would like to place into the
 *			  current vector index
 *
 * @param vec		- The vector of shared pointers pointing to a Test object
 * @param num		- The number of data points the user specifies to occupy the vector
 */
/* ------------------------------------------------------------------------------------*/
static void fill( std::vector<std::shared_ptr<Test>> &vec, int num ) {
	for (int i{0} ; i < num ; i++ ) {
		std::cout << "Enter data point [" << i + 1 << "]: " ;
		int user_num{} ;
		std::cin  >> user_num ;
		vec.push_back( std::make_shared<Test>( user_num ) ) ;
	}
}

/* ----------------------------------------------------------------------------*/
/**
 * @brief		- Displays data from a vector of shared pointers pointing to a
 *			  Test object
 *
 * @param vec		- The vector of shared pointers pointing to a Test object
 */
/* ------------------------------------------------------------------------------------*/
static void display( std::vector<std::shared_ptr<Test>> const &vec ) {
	std::cout << "Displaying vector data" << std::endl ;
	std::cout << "========================" << std:: endl ;
	for ( size_t i{0} ; i < vec.size() ; i++ ) {
		std::cout << *(std::shared_ptr<Test>)vec.at(i) << std::endl ;
	}
	std::cout << "========================" << std:: endl ;
}
