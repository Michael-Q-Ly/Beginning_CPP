/**
 * File Name	: main.cpp
 * Author	: Michael Ly
 * Date		: Mar 17, 2022
 */

#include "Player.hpp"
#include <iostream>

void display_active_players( void ) ;

int main() {

	display_active_players() ;
	Player hero {"Hero"} ;
	display_active_players() ;

	{
		Player michael {"Michael"} ;
		display_active_players() ;
	}
	display_active_players() ;

	Player *enemy = new Player( "Enemy", 100, 100 ) ;
	display_active_players() ;
	delete enemy ;
	display_active_players() ;

	std::cout << std::endl ;
	return 0 ;
}

void display_active_players( void ) {
	std::cout << "Active players: " << Player::get_num_players() << std::endl ;
}
