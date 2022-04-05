#include "Movies.hpp"
#include <iostream>

/* Function Prototype(s) */
void increment_watched( Movies &movies, std::string name ) ;
void add_movie( Movies &movies, std::string name, std::string rating, int watched ) ;

int main() {

	Movies my_movies ;

	my_movies.display() ;

	add_movie( my_movies, "Star Wars", "PG", 5 ) ;		// OK
	add_movie( my_movies, "Cinderella", "PG", 7 ) ;		// OK

	my_movies.display() ;					// Big, Star Wars, Cinderella

	add_movie( my_movies, "Cinderella", "PG", 7 ) ;		// Already exists
	add_movie( my_movies, "Ice Age", "PG", 12 ) ;		// OK

	my_movies.display() ;					// Big, Star Wars, Cinderella, Ice Age

	increment_watched( my_movies, "Big" ) ;			// OK
	increment_watched( my_movies, "Ice Age" ) ;		// OK

	my_movies.display() ;					// Big and Ice Age watched count incremented by 1

	increment_watched( my_movies, "ZZZ" ) ;			// ZZZ not found

	std::cout << std::endl ;
	return 0 ;
}


/*************************************************************************
 * Helper Function
 * increment_watched expects a reference to a Movies object
 * and the name of the movie to increment the watched count
 *
 * If the watched count was incremented successfully, it
 * displays a success message.
 * Otherwise, the watched count will not be incremented
 * because the name of the movie cannot be found.
 ************************************************************************/
void increment_watched( Movies &movies, std::string name ) {
	if ( movies.increment_watched( name ) ) {
		std::cout << name << " watch incremented" << std::endl ;
	}
	else {
		std::cout << name << " not found" << std::endl ;
	}
}

/*************************************************************************
 * Helper Function
 * add_movie expects a reference to a Movies object
 * and the name of the movie, the rating, and the watched count.
 *
 * If the movie is successfully added to the movies object, it
 * displays a success message.
 * Otherwise, the movie will not be added because the name of
 * the movie already exists in Movies.
 ************************************************************************/
void add_movie( Movies &movies, std::string name, std::string rating, int watched ) {
	if ( movies.add_movie( name, rating, watched ) ) {
		std::cout << name << " added" << std::endl ;
	}
	else {
		std::cout << name << " already exists" << std::endl ;
	}
}
