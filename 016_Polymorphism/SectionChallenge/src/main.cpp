/**
 * @file main.cpp
 * @brief  Polymorphism section challenge
 * @author Michael Ly (Michael-Q-Ly@github.com)
 * @version 0.0.0
 * @date 2022-08-25
 */
#include "Account_Util.hpp"
#include "Checking_Account.hpp"
#include "Savings_Account.hpp"
#include "I_Printable.hpp"
#include <iostream>
#include <vector>

int main( int argc, char *argv[] ) {
        std::cout.ios_base::precision( 2 ) ;
        std::cout << std::fixed ;

	/*-----------------------------------------------------------------------------
	 * Should not compile 
	 *-----------------------------------------------------------------------------*/

	/* Account michael{Michael", 5000} ; */
	/* std::cout << michael << std::endl ; */


	/*-----------------------------------------------------------------------------
	 * Checking and Trust accounts 
	 *-----------------------------------------------------------------------------*/
	
	Checking_Account michael {"Michael", 5000} ;
	std::cout << michael << std::endl ;

	Account *trust = new Trust_Account( "Marimo" ) ;
	std::cout << *trust << std::endl ;
	delete trust ;


	/*-----------------------------------------------------------------------------
	 * Vector of Account pointers with functions that are deferred at runtime 
	 *-----------------------------------------------------------------------------*/

	Account *p1 = new Checking_Account( "Larry", 10000 ) ;
	Account *p2 = new Savings_Account( "Moe", 1000 ) ;
	Account *p3 = new Trust_Account( "Curly" ) ;

	std::vector<Account *> accounts {p1, p2, p3} ;

	display( accounts ) ;
	deposit( accounts, 1000 ) ;
	withdraw( accounts, 2000 ) ;

	delete p1 ;
	delete p2 ;
	delete p3 ;
        
        std::cout << std::endl ;
        return 0 ;
}
