// Player.cpp
#include "Player.hpp"
#include <iostream>

Player::Player( std::string name_val, int health_val, int xp_val )
	: name {name_val}, health {health_val}, xp {xp_val} {
		std::cout << "Three-args constructor" << std::endl ;
}

std::string Player::get_name( void ) {
	return name ;
}

int Player::get_health( void ) {
	return health ;
}

int Player::get_xp( void ) {
	return xp ;
}

Player::Player( Player const &source )
//	: name{ source.name }, health{ source.health }, xp{ source.xp } {
	: Player { source.name, source.health, source.xp } {						// Delegation
		std::cout << "Copy constructor - made a copy of : " << source.name << std::endl ;
}

Player::~Player( void ) {
	std::cout << "Destructor called for " << name << std::endl ;
}

