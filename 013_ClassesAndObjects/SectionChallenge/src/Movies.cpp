/**
 * File Name	: Movies2.cpp
 * Author	: Michael Ly
 * Date		: Mar 21, 2022
 * Description	: Movies class functions
 */

#include "Movies.hpp"
#include <iostream>
#include <cstring>

/*************************************************************************
 * Movies no-args constructor
 ************************************************************************/
Movies::Movies( void ) {
}

/*************************************************************************
 * Movies destructor
 ************************************************************************/
Movies::~Movies( void ) {
}

/*************************************************************************
 * add_movie expects the name of the movie, rating, and watched count.
 *
 * It will search the movies vector to see if a movie object already
 * exists with the same name.
 *
 * If it does, then return false since the movie already exists.
 * Otherwise, create a movie object from the provided information,
 * and add that movie object to the movies vector and return true.
 ************************************************************************/
bool Movies::add_movie( std::string name, std::string rating, int watched ) {
	// You implement this method

	// For every movie in movies, check the name of the movie against the vector
	for ( Movie const &movie : movies ) {                                           // Protect referenced data
		if ( movie.get_name() == name ) {
			return false ;
		}
	}

	// Add the movie otherwise
	Movie movie {name, rating, watched} ;
	movies.push_back( movie ) ;
	return true ;
}

/*************************************************************************
 * increment_watched expects the name of the movie to increment the
 * watched count.
 *
 * It will search the movies vector to see if a movie object already
 * exists with the same name.
 * If it does, then increment that object's watch by 1 and return true.
 *
 * Otherwise, return false since the movie name does not exist to
 * increment.
 ************************************************************************/
bool Movies::increment_watched( std::string name ) {
	// You implement this method

	// size_t idx {0} ;
	for ( Movie &movie : movies ) {
		if ( movie.get_name() == name ) {
			// int watched ;
			// watched = movie.get_watched() ;
			// movie.set_watched( ++watched ) ;
			// movies.at( idx ) = movie ;
                        movie.increment_watched() ;
			return true ;
		}
		// idx++ ;
	}
	
	return false ;
}

/*************************************************************************
 * display
 *
 * Displays all of the movie objects in the movies vector.
 * For each movie, call the movie.display method so the movie
 * object displays itself.
 ************************************************************************/
void Movies::display( void ) const {
	// You implement this method

	if ( !movies.size() ) {
		std::cout << "Sorry, there are no movies to display right now." << std::endl ;
        }
	else {
		std::cout << "\n\nPrinting Movies:" << std::endl ;
		std::cout << "============================================" << std::endl ;
		for ( Movie const &movie : movies ) {
			movie.display() ;
			std::cout << "============================================" << std::endl ;
		}
	}
}
