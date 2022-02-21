// Section 13
// Accessing Class Members

#include <iostream>
#include <string>

/* Classes */
class Player {
public:
	// Attributes
	std::string name ;
	int health ;
	int xp ;

	// Methods
	void talk ( std::string text_to_say ) { std::cout << name << " says, \"" << text_to_say << "\"" << std::endl ; }
	bool is_dead() ;
} ;

class Account {
public:
	// Attributes
	std::string name ;
	double balance ;

	// Methods
	void deposit( double bal ) { balance += bal ; std::cout << "In deposit" << std::endl ; }
	void withdraw( double bal ) { balance -= bal ; std::cout << "In withdraw" << std::endl ; }
} ;

int main() {

	Account Michael_account ;
	Michael_account.name = "Michael's account" ;
	Michael_account.balance = 5000.0 ;

	Michael_account.deposit( 1000.0 ) ;
	Michael_account.withdraw( 500.0 ) ;

	Player Michael ;
	Michael.name = "Michael" ;
	Michael.health = 100 ;
	Michael.xp = 12 ;
	Michael.talk( "Hi there!" ) ;

	Player *enemy = new Player ;
	( *enemy ).name = "Enemy" ;
	( *enemy ).health = 100 ;
	enemy -> xp = 15 ;

	enemy -> talk( "I will destroy you!" ) ;

	std::cout << std::endl ;
	return 0 ;
}

