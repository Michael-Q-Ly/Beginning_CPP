/**
 * @file Account.cpp
 * @Synopsis  Account base class definitions
 * @author Michael Ly (Michael-Q-Ly@github.com)
 * @version 0.0.0
 * @date 2022-08-25
 */
#include "Account.hpp"

/* -------------------------------*/
/**
 * @Synopsis            Account overloaded constructor
 *
 * @Param name          Name of account
 * @Param balance       Balance of Account
 */
/* ---------------------------------*/
Account::Account( std::string name, double balance )
        : name{name}, balance{balance} {
}

/* -------------------------------*/
/**
 * @fn                  deposit
 *
 * @Synopsis            Account deposit function
 *
 * @Param amount        Amount to deposit into balance
 *
 * @Returns             bool
 */
/* ---------------------------------*/
bool Account::deposit( double amount ) {
        if ( amount < 0 ) {
                return false ;
        }
        else {
                balance += amount ;
                return true ;
        }
}

/* -------------------------------*/
/**
 * @fn                  withdraw
 *
 * @Synopsis            Account withdraw function
 *
 * @Param amount        Amount to withdraw from balance
 *
 * @Returns             bool
 */
/* ---------------------------------*/
bool Account::withdraw( double amount ) {
        if ( balance - amount >= 0 ) {
                balance -= amount ;
                return true ;
        }
        else {
                return false ;
        }
}

/* -------------------------------*/
/**
 * @fn                  get_balance
 * 
 * @Synopsis            Returns current balance of Account object
 *
 * @Returns             double
 */
/* ---------------------------------*/
double Account::get_balance( void ) const {
        return balance ;
}

std::ostream &operator<<( std::ostream &os, Account const &account ) {
        os << "[Account: " << account.name << "; " << account.balance << "]" ;
        return os ;
}
