/**
 * File Name	: Player.h
 * Description	: Player header for Player Class
 * Author	: Michael Ly
 * Date		: Mar 17, 2022
 */

#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

class Player {
	private:
		static int num_players ;
		std::string name ;
		int health ;
		int xp ;
	public:
		std::string get_name( void )	{ return name ; }
		int get_health( void )		{ return health ; }
		int get_xp( void )		{ return xp ; }
		Player( std::string name_val = "None", int health_val = 0, int xp_val = 0 ) ;
		// Copy Constructor
		Player( Player const &source ) ;
		// Destructor
		~Player( void ) ;

		static int get_num_players( void ) ;
} ;

#endif // _PLAYER_H_
