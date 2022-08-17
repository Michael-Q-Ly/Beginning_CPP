/**
 * @file Account.cpp
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @brief 
 * @version 0.1
 * @date 2022-08-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Account.hpp"

Account::Account( void )
        : Account{0.0} {
                // Delegating constructor
}

Account::Account( double balance )
        : balance{balance} {
}

void Account::deposit( double amount ) {
        balance += amount ;
}

void Account::withdraw( double amount ) {
        if ( balance - amount >= 0 ) {
                balance -= amount ;
        }
        else {
                std::cout << "Insufficient funds" << std::endl ;
        }
}

std::ostream &operator<<( std::ostream &os, Account const &account ) {
        os << "Account balance: " << account.balance ;
        return os ;
}