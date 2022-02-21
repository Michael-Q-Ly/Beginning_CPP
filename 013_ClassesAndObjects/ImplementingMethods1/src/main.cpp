// Section 13
// Implementing Member Methods 1

#include <iostream>
#include <string>

class Account {
	private:
		// Attributes
		std::string name ;
		double balance ;

	public:
		// Methods
		/* Declared inline */
		void set_balance( double bal )		{ balance = bal ; }
		double get_balance( void ) 		{ return balance ; }

		// Methods will be declared outside the class declaration with scope resolution operator
		void set_name( std::string n ) ;
		std::string get_name( void ) ;

		bool deposit( double amount ) ;
		bool withdraw( double amount ) ;
} ;

int main() {

	// Create an Account object named michael_account
	Account michael_account ;
	michael_account.set_name( "Michael's account" ) ;
	michael_account.set_balance( 1000.0 ) ;

	// Use the public methods in the Account class
	if ( michael_account.deposit( 200.0 ) ) {
		std::cout << "Deposit OK" << std::endl ;
	}
	else {
		std::cout << "Deposit not allowed" << std::endl ;
	} /* deposit */

	if ( michael_account.withdraw( 500.0 ) ) {
		std::cout << "Withdraw OK" << std::endl ;
	}
	else {
		std::cout << "Funds insufficient" << std::endl ;
	} /* withdraw */

	if ( michael_account.withdraw( 1500.0 ) ) {
		std::cout << "Withdraw OK" << std::endl ;
	}
	else {
		std::cout << "Insufficient funds" << std::endl ;
	} /* withdraw */

	std::cout << std::endl ;
	return 0 ;
}

void Account::set_name( std::string n ) {
	name = n ;
}

std::string Account::get_name( void ) {
	return name ;
}

bool Account::deposit( double amount ) {
	// If verify amount
	balance += amount ;
	return true ;
}

bool Account::withdraw( double amount ) {
	if ( balance - amount >= 0 ) {
		balance -= amount ;
		return true ;
	}
	else {
		return false ;
	}
}

