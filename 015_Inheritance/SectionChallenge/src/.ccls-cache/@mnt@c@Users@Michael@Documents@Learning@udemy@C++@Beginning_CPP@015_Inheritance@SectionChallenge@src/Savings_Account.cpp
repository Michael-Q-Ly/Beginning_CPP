/**
 * @file Savings_Account.cpp
 * @Synopsis  
 * @author Michael Ly (Michael-Q-Ly@github.com)
 * @version 0.0.0
 * @date 2022-08-27
 */
#include "Savings_Account.hpp"

/* -------------------------------*/
/**
 * @Synopsis            Overloaded savings account class constructor
 *
 * @Param name          Name of savings account
 * @Param balance       Balance of savings account
 * @Param int_rate      Savings account's interest rate
 */
/* ---------------------------------*/
Savings_Account::Savings_Account( std::string name, double balance, double int_rate )
        : Account{name, balance}, int_rate{int_rate} {
}

/* -------------------------------*/
/**
 * @Synopsis            Deposit into savings account
 *
 * @Param amount        Will be incremented by amount * interest rate then deposited to savings account
 *
 * @Returns             bool - amount to deposit w/ interest rate
 */
/* ---------------------------------*/
bool Savings_Account::deposit( double amount) {
        amount += amount * ( int_rate / 100 ) ;
        return Account::deposit( amount ) ;
}

/* -------------------------------*/
/**
 * @Synopsis            Friend that overloads the insertion operator for
 * \ savings account to display the savings account balance and interest rate
 *
 * @Param os            The output stream
 * @Param account       Savings account object     
 *
 * @Returns             The savings account object members
 */
/* ---------------------------------*/
std::ostream &operator<<( std::ostream &os, Savings_Account const &account ) {
        os << "[Savings_Account: " << account.name << "; " << account.balance << ", " << account.int_rate << "%]" ;
        return os ;
}
