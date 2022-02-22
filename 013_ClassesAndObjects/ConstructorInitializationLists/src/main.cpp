// Section 13
// Constructor Initialization Lists

#include <iostream>
#include <string>

class Player {
	private:
		std::string name {"XXXXX"} ;
		int health ;
		int xp ;

	public:
		// Overloaded  Constructors
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
	: name { "None" }, health {0}, xp {0} {

//	name = "None" ;
//	health = 0 ;
//	xp = 0 ;
}

Player::Player( std::string name_val )
	: name { name_val }, health {0}, xp {0} {

//	name = name_val ;
//	health = 0 ;
//	xp = 0 ;
}

Player::Player( std::string name_val, int health_val, int xp_val )
	: name { name_val }, health { health_val }, xp { xp_val } {

//	name = name_val ;
//	health = health_val ;
//	xp = xp_val ;
}
