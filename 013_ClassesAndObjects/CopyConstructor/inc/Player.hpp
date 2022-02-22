// Player.hpp
#ifndef _PLAYER_HPP_
#define _PLAYER_HPP_

#include <string>

class Player {
	private:
		std::string name ;
		int health ;
		int xp ;

	public:
		// Methods
		std::string get_name( void ) ;
		int get_health( void ) ;
		int get_xp( void ) ;
		// Constructor
		Player( std::string name_val = "None", int health_val = 0, int xp_val = 0 ) ;
		// Copy Constructor
		Player( Player const &source ) ;
		// Destructor
		~Player( void ) ;
} ;

#endif /* _PLAYER_HPP */
