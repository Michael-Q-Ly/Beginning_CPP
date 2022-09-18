/**
 * @file Account.cpp
 * @brief Account base class definitions
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-09-15
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
 * @Synopsis            Gets Account object balance
 *
 * @Returns double      The balance of the Account object
 */
/* ---------------------------------*/
double Account::get_balance( void ) const {
        return balance ;
}

/* -------------------------------*/
/**
 * @Synopsis            Overloaded Account deposit operator
 *
 * @Param obj           The Account object
 *
 * @Returns Account     The Account object
 */
/* ---------------------------------*/
double Account::operator+=( double const amount ) {
        return Account::deposit( amount ) ;
}

/* -------------------------------*/
/**
 * @Synopsis            Overloaded Account withdraw operator
 *
 * @Param amount        Amount to withdraw from Account object
 *
 * @Returns double      Amount withdrawn from Account object
 */
/* ---------------------------------*/
double Account::operator-=( double const amount ) {
        return Account::withdraw( amount ) ;
}

/* -------------------------------*/
/**
 * @Synopsis            Overloaded output stream operator for Account class
 *
 * @Param os            The output stream
 * @Param account       The Account object
 *
 * @Returns             The output stream of the Account name and balance
 */
/* ---------------------------------*/
/* std::ostream &operator<<( std::ostream &os, Account const &account ) { */
/*         os << "[Account: " << account.name << "; " << account.balance << "]" ; */
/*         return os ; */
/* } */

/* void Account::print( std::ostream &os ) const { */
/* 	os << "In Account::print" << std::endl ; */
/* } */
