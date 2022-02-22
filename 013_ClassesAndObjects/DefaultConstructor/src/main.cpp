// Section 13
// Default Constructors

#include <iostream>
#include <string>

class Player {
	private:
		std::string name ;
		int health ;
		int xp ;

	public:
		void set_name( std::string name_val ) {
			name = name_val ;
		}
		std::string get_name( void ) {
			return name ;
		}
		// Constructor
		Player() {
			name = "None" ;
			health = 100 ;
			xp = 3 ;
		}
		Player ( std::string name_val, int health_val, int xp_val ) {
			name = name_val ;
			health = health_val ;
			xp = xp_val ;
		}
} ;

int main() {

	Player hero ;
	Player michael { "Michael", 100, 13 } ;
	michael.set_name( "Michael" ) ;
	std::cout << michael.get_name() << std::endl ;

	std::cout << std::endl ;
	return 0 ;
}
