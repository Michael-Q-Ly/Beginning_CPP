/**
 * File Name	: Player.cpp
 * Author	: Michael Ly
 * Date		: Mar 17, 2022
 * Description	: Player functions
 */

#include "Player.hpp"

int Player::num_players {0} ;

Player::Player( std::string name_val, int health_val, int xp_val )
	: name{name_val}, health{health_val}, xp{xp_val} {
		++num_players ;
}

Player::Player( Player const &source )
	: Player{source.name,source.health,source.xp} {
}

Player::~Player( void ) {
	--num_players ;
}

int Player::get_num_players( void ) {
	return num_players ;
}
