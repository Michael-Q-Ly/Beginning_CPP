/**
 * File Name	: Movie.cpp
 * Author	: Michael Ly
 * Date		: Mar 21, 2022
 * Description	: Movie implementation file
 */

#include "Movie.hpp"
#include <iostream>

// Implementation of the constructor
Movie::Movie( std::string name, std::string rating, int watched )
	: name( name ), rating( rating ), watched( watched ) {
} ;

// Implementation of the copy constructor
Movie::Movie( Movie const &source )
	: Movie{source.name, source.rating, source.watched} {
}

// Implementation of the destructor
Movie::~Movie( void ) {
}

// Implementation of the display method should just
// inset the movie attributes to cout
void Movie::display( void ) const {
	std::cout << name << ", " << rating << ", " << watched << std::endl ;
}

