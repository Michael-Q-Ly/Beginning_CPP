// Section 11
// Random Numbers

#include <iostream>
#include <cstdlib>						// Required for rand()
#include <ctime>						// Required for time()

using std::cout ;
using std::cin ;
using std::endl ;

int main() {

	int random_number {} ;
	size_t count {10} ;					// Number of random numbers to generate
	int min {1} ;						// Lower bound (inclusive)
	int max {6} ;						// Upper bound (inclusive)

	// Seed the random number generator
	// // If you don't seed the generator, you will get the same sequence random numbers every run
	
	cout << "RAND_MAX on my system is " << RAND_MAX << endl ;
	srand( time( nullptr ) ) ;

	for ( size_t i {1} ; i <= count ; i++ ) {
		random_number = ( rand() % max ) + min ;	// Generate a random number [min, max]
		cout << random_number << endl ;
	}

	cout << endl ;
	return 0 ;
}

