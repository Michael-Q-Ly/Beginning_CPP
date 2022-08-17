/**
 * @file Savings_Account.cpp
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @brief Savings account function defintions
 * @version 0.1
 * @date 2022-08-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Savings_Account.hpp"

Savings_Account::Savings_Account( void )
        : Savings_Account{0.0, 0.0} {
}

Savings_Account::Savings_Account( double balance, double int_rate )
        : Account{balance}, int_rate{int_rate} {
}

void Savings_Account::deposit( double amount ) {
        amount += ( amount * ( int_rate / 100 ) ) ;
        Account::deposit( amount ) ;
}

std::ostream &operator<<( std::ostream &os, Savings_Account const &account ) {
        os << "Savings account balance: " << account.balance << "\nInterest rate: " << account.int_rate ;
        return os ;
}
