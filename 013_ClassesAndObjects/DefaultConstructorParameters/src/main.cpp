// Section 13
// Default Constructor Parameters

#include <iostream>
#include <string>

class Player {
	private:
		std::string name ;
		int health ;
		int xp ;

	public:
		Player( std::string name_val = "None", int health_val = 0, int xp_val = 0 ) ;
//		Player( void ) ;								// Ambiguous. Does empty call this or the one above? COMPILER ERROR
} ;

int main() {

	Player empty ;
	Player michael {"Michael"} ;
	Player hero { "Hero", 100 } ;
	Player villain { "Villain", 100, 55 } ;

	std::cout << std::endl ;
	return 0 ;
}

Player::Player( std::string name_val, int health_val, int xp_val )
	: name {name_val}, health {health_val}, xp {xp_val} {
		std::cout << "Three-args constructor" << std::endl ;
}

