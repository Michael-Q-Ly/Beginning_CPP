/**
 * File Name	: Movie.hpp
 * Author	: Michael Ly
 * Date		: Mar 21, 2022
 * Description	: Movie class header
 */
#ifndef _MOVIE_HPP_
#define _MOVIE_HPP_
#include <string>

class Movie {
	private:
		std::string name ;				// The name of the movie
		std::string rating ;				// The movie rating (G, PG, PG-13, R)
		int watched ;					// The number of times the movie has been watched
	public:
		// Constructor - expects all three movie attributes
		Movie( std::string name, std::string rating, int watched ) ;
		// Copy Constructor
		Movie( Movie const &source ) ;
		// Destructor
		~Movie( void ) ;

		// Basic getters and setters for private attributes
		// Implement these inline and watch your const-correctness
		void set_name( std::string name )	{ this -> name = name ; }
		std::string get_name( void ) const	{ return name ; }

		void set_rating( std::string rating )	{ this -> rating = rating ; }
		std::string get_rating( void ) const	{ return rating ; }
		
		void set_watched( int watched )		{ this -> watched = watched ; }
		int get_watched( void )			{ return watched ; }

		// Increment the watched attribute by 1
		void increment_watched( void )		{ watched++ ; }

		// Displays the movie information. Example: Big, PG-13, 2
		void display( void ) const ;
} ;

#endif // _MOVIE_HPP_
