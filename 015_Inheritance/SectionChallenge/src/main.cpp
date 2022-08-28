/**
 * @file main.cpp
 * @Synopsis  Inheritance Section Challenge
 * @author Michael Ly (Michael-Q-Ly@github.com)
 * @version 0.0.0
 * @date 2022-08-25
 */
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

        // Savings
        std::vector<Savings_Account> save_accounts ;
        save_accounts.push_back( Savings_Account {} ) ;
        save_accounts.push_back( Savings_Account {"Supermane"} ) ;
        save_accounts.push_back( Savings_Account {"Bartman", 2000} ) ;
        save_accounts.push_back( Savings_Account {"Wombatwoman", 5000, 5.0} ) ;

        display( save_accounts ) ;
        deposit( save_accounts, 1000 ) ;
        withdraw( save_accounts, 2000 ) ;
        
        std::cout << std::endl ;
        return 0 ;
}
