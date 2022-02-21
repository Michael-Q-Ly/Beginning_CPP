// Section 13
// Declare Classes and Objects

#include <iostream>
#include <string>
#include <vector>

/* Classes */
class Player {
	// Attributes
	std::string name {"Player"} ;
	int health {100} ;
	int xp {3} ;

	// Methods
	void talk ( std::string ) ;
	bool is_dead() ;
} ;

class Account {
	// Attributes
	std::string name {"Account"} ;
	double balance {0.0} ;

	// Methods
	bool deposit( double ) ;
	bool withdraw( double ) ;
} ;

int main() {

	Account Michael_account ;
	Account jim_account ;

	Player Michael ;
	Player hero ;

	Player players[] { Michael, hero } ;

	std::vector <Player> player_vec {Michael} ;
	player_vec.push_back( hero ) ;

	Player *enemy {nullptr} ;
	enemy = new Player ;

	delete enemy ;

	std::cout << std::endl ;
	return 0 ;
}

