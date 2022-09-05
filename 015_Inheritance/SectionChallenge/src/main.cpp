/**
 * @file main.cpp
 * @Synopsis  Inheritance Section Challenge
 * @author Michael Ly (Michael-Q-Ly@github.com)
 * @version 0.0.0
 * @date 2022-08-25
 */
#include "Checking_Account.hpp"
#include "Savings_Account.hpp"
#include "Account_Util.hpp"
#include <iostream>
#include <vector>

int main( int argc, char *argv[] ) {
        std::cout.ios_base::precision( 2 ) ;
        std::cout << std::fixed ;

        // Accounts
        std::vector<Account> accounts ;
        accounts.push_back( Account {} ) ;
        accounts.push_back( Account {"Larry"} ) ;
        accounts.push_back( Account {"Moe", 2000} ) ;
        accounts.push_back( Account {"Curly", 5000} ) ;

        display( accounts ) ;
        deposit( accounts, 1000 ) ;
        withdraw( accounts, 2000 ) ;

        std::cout << "Depositing 500 into curly" << std::endl ;
        accounts.at( 3 ) += 500.0 ;
        display( accounts ) ;

        std::cout << "Withdrawing 800 from curly" << std::endl ;
        accounts.at( 3 ) -= 800.0 ;
        display( accounts ) ;

        // Savings
        std::vector<Savings_Account> save_accounts ;
        save_accounts.push_back( Savings_Account {} ) ;
        save_accounts.push_back( Savings_Account {"Supermane"} ) ;
        save_accounts.push_back( Savings_Account {"Bartman", 2000} ) ;
        save_accounts.push_back( Savings_Account {"Wombatwoman", 5000, 5.0} ) ;

        display( save_accounts ) ;
        deposit( save_accounts, 1000 ) ;
        withdraw( save_accounts, 2000 ) ;

        std::cout << "Depositing $600.00 into Wombatwoman's savings account:" ;
        save_accounts.at( 3  ) += 600.00 ;
        display( save_accounts ) ;
        std::cout << "Withdrawing $1000.00 into Wombatwoman's savings account:" ;
        save_accounts.at( 3  ) -= 1000.00 ;
        display( save_accounts ) ;

        /* // Checking */
        /* std::vector<Checking_Account> checking_accounts ; */
        /* checking_accounts.push_back( Checking_Account {} ) ; */
        /* checking_accounts.push_back( Checking_Account {"Minky"} ) ; */
        /* checking_accounts.push_back( Checking_Account {"Marimo", 2000.0} ) ; */
        /* checking_accounts.push_back( Checking_Account {"Michael", 1500.0} ) ; */

        /* display( checking_accounts ) ; */
        /* deposit( checking_accounts, 1000  ) ; */
        /* withdraw( checking_accounts, 2000 ) ; */

        /* std::cout << "Depositing $500 into Marimo" << std::endl ; */
        /* checking_accounts.at( 2 ) += 500 ; */
        /* display( checking_accounts ) ; */
        /* std::cout << "Withdrawing $200 from Marimo" << std::endl ; */
        /* checking_accounts.at( 2 ) -= 200 ; */
        /* display( checking_accounts ) ; */
        
        /* // Trust */
        /* std::vector<Trust_Account> trust_accounts ; */
        /* trust_accounts.push_back( Trust_Account {} ) ; */
        /* trust_accounts.push_back( Trust_Account {"Minky"} ) ; */
        /* trust_accounts.push_back( Trust_Account {"Marimo", 5000.0} ) ; */
        /* trust_accounts.push_back( Trust_Account {"Michael", 2500.0, 5.0} ) ; */

        /* display( trust_accounts ) ; */
        /* deposit( trust_accounts, 1000  ) ; */
        /* withdraw( trust_accounts, 1000 ) ; */
        /* withdraw( trust_accounts, 2000 ) ; */
        /* withdraw( trust_accounts, 3000 ) ; */
        /* deposit( trust_accounts, 5500 ) ; */
        /* withdraw( trust_accounts, 4000 ) ; */
        
        std::cout << std::endl ;
        return 0 ;
}
