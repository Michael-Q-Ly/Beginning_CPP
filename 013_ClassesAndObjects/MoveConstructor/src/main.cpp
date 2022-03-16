/**
 * File Name	: main.cpp
 * Purpose	: Demonstrate Move Constructor
 * Author	: Michael Ly
 * Date		: Mar 16, 2022
 */

#include <iostream>
#include <vector>

#define MOVE

class Move {
	private:
		int *data ;
	public :
		void set_data_value( int d )	{ *data = d ; }
		int get_data_value( void )	{ return *data ; }
		// Constructor
		Move( int d ) ;
		// Copy Constructor
		Move( Move const &source ) ;
#ifdef MOVE
		// Move Constructor
		 Move( Move &&source ) noexcept ;
#endif
		// Destructor
		~Move( void ) ;
} ;

int main() {

	std::vector <Move> vec ;
	vec.push_back( Move{10} ) ;

#if 1
	vec.push_back( Move{20} ) ;
	vec.push_back( Move{30} ) ;
	vec.push_back( Move{40} ) ;
	vec.push_back( Move{50} ) ;
	vec.push_back( Move{60} ) ;
	vec.push_back( Move{70} ) ;
	vec.push_back( Move{80} ) ;
#endif

	std::cout << std::endl ;
	return 0 ;
}

Move::Move( int d ) {
	data = new int ;
	*data = d ;
	std::cout << "Constructor for: " << d << std::endl ;
}

// Copy Constructor
Move::Move( Move const &source )
	: Move {*source.data} {
		std::cout << "Copy constructor - deep copy for: " << *data << std::endl ;
}

#ifdef MOVE
// Move Constructor
Move::Move( Move &&source) noexcept
	: data {source.data} {
		source.data = nullptr ;
		std::cout << "Move constructor - moving resource: " << *data <<std::endl ;
}
#endif

Move::~Move( void ) {
	if ( data != nullptr ) {
		std::cout << "Destructor freeing data for: " << *data << std::endl ;
	}
	else {
		std::cout << "Destructor freeing data for nullptr" << std::endl ;
	}
	delete data ;
}
