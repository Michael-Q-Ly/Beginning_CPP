// Section 13
// Copy Constructor

#include "Player.hpp"
#include <iostream>
#include <string>

void display_player( Player p ) ;

int main() {

	Player empty { "XXXXX", 100, 50 } ;

	Player my_new_object {empty} ;

	display_player( empty ) ;

	Player michael {"Michael"} ;
	Player hero { "Hero", 100 } ;
	Player villain { "Villain", 100, 55 } ;

	std::cout << std::endl ;
	return 0 ;
}

void display_player( Player p ) {
	std::cout << "Name: " << p.get_name() << std::endl ;
	std::cout << "Health: " << p.get_health() << std::endl ;
	std::cout << "XP: " << p.get_xp() << std::endl ;
}

