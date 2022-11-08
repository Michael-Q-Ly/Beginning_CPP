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

#include <iostream>
#include <memory>

int main( int argc, char *argv[] ) {
	std::string account {} ;
	double account_balance {} ;

	std::cout << "Enter checking account name: " ;
	std::cin  >> account ;
	std::cout << "Enter balance for " << account << ": " ;
	std::cin  >> account_balance ;

	// Try to create an account with a balance >= 0
	try {
		std::unique_ptr<Account> my_account = std::make_unique<Checking_Account>( account, account_balance ) ;
		std::cout << *my_account << std::endl ;
		double withdraw_amount {} ;
		std::cout << "How much money would you like to withdraw from account " << account << "? " ;
		std::cin  >> withdraw_amount ;

		// Try to withdraw money from the account if balance is sufficient
		try {
			my_account->withdraw( withdraw_amount ) ;
			std::cout << *my_account << std::endl ;
		}
		catch ( InsufficientFundsException const &ex ) {
			std::cerr << ex.what() << std::endl ;
		}

	// Catch if the starting balance is negative
	}
	catch ( IllegalBalanceException const &ex ) {
		std::cerr << ex.what() << std::endl ;
	}

	std::cout << "Program completed successfully" << std::endl ;
	return 0 ;
}
