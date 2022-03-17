/**
 * File Name	: main.cpp
 * Author	: Michael Ly
 * Date		: Mar 16, 2022
 * Details	: Demonstrat how to use const qualifier for classes
 */

#include <iostream>
#include <string>

class Player {
	private:
		std::string name ;
		int health ;
		int xp ;
	public:
		std::string get_name( void ) const	{ return name ; /*xp = 100 ;*/ }
		void set_name( std::string name_val )	{ name = name_val ; }
		// Overloaded Constructors
		Player( void ) ;
		Player( std::string name_val ) ;
		Player( std::string name_val, int health_val, int xp_val ) ;
} ;

// Function Prototype(s)
void display_player_name( Player const &p ) ; 

int main() {

	Player const villain {"Villain", 100, 55} ;
	Player hero {"Hero", 100, 15} ;

#if 0
	villain.xp = 1000 ;
	villain.set_name( "Super villain" ) ;
#endif

	std::cout << villain.get_name() << std::endl ;
	std::cout << hero.get_name() << std::endl ;
	display_player_name( villain ) ;
	display_player_name( hero ) ;

	std::cout << std::endl ;
	return 0 ;
}

Player::Player( void )
	: Player {"None", 0, 0} {
}

Player::Player( std::string name_val )
	: Player {name_val, 0, 0} {
}

Player::Player( std::string name_val, int health_val, int xp_val )
	: name{name_val}, health{health_val}, xp{xp_val} {
}

void display_player_name( Player const &p ) {
	std::cout << p.get_name() << std::endl ;
}
