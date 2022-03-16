// Section 13
// Copy Constructor - Shallow Copy

#include <iostream>

// Class(es)
class Shallow {
	private:
		int *data ;
	public:
		void set_data_value( int d )	{ *data = d ; }
		int get_data_value( void )	{ return *data ; }
		// Constructor
		Shallow( int d ) ;
		// Copy Constructor
		Shallow( Shallow const &source ) ;
		// Desctructor
		~Shallow( void ) ;
} ;

// Function Prototype(s)
void display_shallow( Shallow s ) ;

int main() {

	Shallow obj1 {100} ;
	display_shallow( obj1 ) ;

	Shallow obj2 {obj1} ;
	obj2.set_data_value( 1000 ) ;

	std::cout << std::endl ;
	return 0 ;
}

Shallow::Shallow( int d ) {
	data = new int ;
	*data = d ;
}

Shallow::Shallow( Shallow const &source )
	:data( source.data ) {
		std::cout << "Copy constructor - shallow copy" << std::endl ;
}

Shallow::~Shallow( void ) {
	delete data ;
	std::cout << "Destructor freeing data" << std::endl ;
}

void display_shallow( Shallow s ) {
	std::cout << s.get_data_value() << std::endl ;
}
