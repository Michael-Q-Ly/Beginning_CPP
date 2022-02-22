// Section 13
// Delegating Constructors

#include <iostream>
#include <string>

class Player {
	private:
		std::string name ;
		int health ;
		int xp ;

	public:
		// Overloaded Constructors
		Player( void ) ;
		Player( std::string name_val ) ;
		Player( std::string name_val, int health_val, int xp_val ) ;
} ;

int main() {

	Player empty ;
	Player michael {"Michael"} ;
	Player villain { "Villain", 100, 55 } ;

	std::cout << std::endl ;
	return 0 ;
}

Player::Player( void )
	: Player { "None", 0, 0 } {
		std::cout << "No-args constructor" << std::endl ;
}

Player::Player( std::string name_val )
	: Player { name_val, 0, 0 } {
		std::cout << "One-arg constructor" << std::endl ;
 }

Player::Player( std::string name_val, int health_val, int xp_val )
	: name {name_val}, health {health_val}, xp {xp_val} {
		std::cout << "Three-args constructor" << std::endl ;
}

