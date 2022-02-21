// Section 13
// Implementing Member Methods 2

#include <iostream>
#include "Account.hpp"

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

