/**
 * File Name	: main.cpp
 * Purpose	: Demonstrate deep copy
 * Author	: Michael Ly
 * Date		: Mar 15, 2022
 */

#include <iostream>

class Deep {
	private:
		int *data ;
	public:
		void set_data_value( int d )	{ *data = d ; }
		int get_data_value( void )	{ return *data ; }
		// Constructor
		Deep( int d ) ;
		// Copy Constructor
		Deep( Deep const &source ) ;
		// Destructor
		~Deep( void ) ;
} ;

// Function prototype(s)
void display_deep( Deep s ) ;

int main() {

	Deep obj1 {100} ;
	display_deep( obj1 ) ;

	Deep obj2 {obj1} ;

	obj2.set_data_value( 1000 ) ;

	std::cout << std::endl ;
	return 0 ;
}

Deep::Deep( int d ) {
	data = new int ;
	*data = d ;
}

Deep::Deep( Deep const &source )
	: Deep {*source.data} {
		std::cout << "Copy constructor - deep copy " << std::endl ;
}

Deep::~Deep( void ) {
	delete data ;
	std::cout << "Destructor freeing data" << std::endl ;
}

void display_deep( Deep s ) {
	std::cout << s.get_data_value() << std::endl ;
}
