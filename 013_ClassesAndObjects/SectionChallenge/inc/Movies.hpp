/**
 * File Name	: Movies2.hpp
 * Author	: Michael Ly
 * Date		: Mar 21, 2022
 * Description	: Movies class header; models collection of Movies as a std::vector
 */
#ifndef _MOVIES_HPP_
#define _MOVIES_HPP_

#include "Movie.hpp"
#include <vector>
#include <string>

class Movies {
	private:
		std::vector <Movie> movies ;
	public:
		Movies( void ) ;			// Constructor
		~Movies( void ) ;			// Destructor

		/**********************************************************************
		 * add_movie expects the name of the move, rating, and watched count.
		 *
		 * It will search the movies vector to see if a movie object already
		 * exists with the same name.
		 *
		 * If it does, then return false since the movie already exists.
		 * Otherwise, create a movie object from the provided information,
		 * and add that movie object to the movies vector a nd return true.
		 *********************************************************************/
		bool add_movie( std::string name, std::string rating, int watched ) ;

		/**********************************************************************
		 * increment_watched expects the name of the movie to increment the
		 * watched count.
		 *
		 * It will search the movies vector to see if a movie object already
		 * exists with the same name.
		 * If it does, then increment that object's watch by 1 and return true.
		 *
		 * Otherwise, return false since the movie name does not exist to
		 * increment.
		 *********************************************************************/
		bool increment_watched( std::string name ) ;

		/**********************************************************************
		 * display
		 *
		 * Displays all of the movie objects in the movies vector.
		 * For each movie, call the movie.display method so the movie
		 * object displays itself.
		 *********************************************************************/
		void display( void ) const ;
} ;
#endif // _MOVIES_HPP_
