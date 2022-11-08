/**
 * @file main.cpp
 * @Brief Unique Pointers example
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-09-23
 */
#include "Account.hpp"
#include "Checking_Account.hpp"
#include "Savings_Account.hpp"
#include "Trust_Account.hpp"

#include "Account_Util.hpp"
#include "IllegalBalanceException.hpp"

#include <iostream>
#include <memory>

int main( int argc, char *argv[] ) {
	try {
		std::unique_ptr<Account> moes_account = std::make_unique<Checking_Account>( "Moe", -100.0 ) ;
		std::cout << "Use moes_account" << std::endl ;
		std::cout << *moes_account << std::endl ;
	}
	catch ( IllegalBalanceException const &ex ) {
		std::cerr << ex.what() << std::endl ;				// Displays "Illegal balance exception"
	}

	std::cout << "Program completed successfully" << std::endl ;
	return 0 ;
}
