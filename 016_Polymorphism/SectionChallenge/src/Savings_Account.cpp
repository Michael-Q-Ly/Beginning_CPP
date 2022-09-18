/**
 * @file Savings_Account.cpp
 * @Brief Savings Account class definitions
 * @author Michael Ly (Michael-Q-Ly@github.com)
 * @version 0.0.0
 * @date 2022-08-27
 */
#include "Savings_Account.hpp"

/* -------------------------------*/
/**
 * @brief               Overloaded savings account class constructor
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
 * @brief               Deposit into savings account
 *
 * @Param amount        Will be incremented by amount * interest rate then deposited to savings account
 *
 * @Returns bool        The amount of money deposited + interest
 */
/* ---------------------------------*/
bool Savings_Account::deposit( double amount) {
        amount += amount * ( int_rate / 100 ) ;
        return Account::deposit( amount  ) ;
}

/* -------------------------------*/
/**
 * @Brief		Savings Account withdraw method
 *
 * @Param amount	Amount to withdraw
 *
 * @Returns bool	Withdraw successful?
 */
/* ---------------------------------*/
bool Savings_Account::withdraw( double amount ) {
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
 * @brief               Overloaded Savings Account deposit operator
 *
 * @Param amount        Amount to be deposited
 *
 * @Returns double      Amount deposited to Savings Account object 
 */
/* ---------------------------------*/
double Savings_Account::operator+=( double const amount ) {
        return Savings_Account::deposit( amount  ) ;
}

/* -------------------------------*/
/**
 * @brief               Overloaded Savings Account withdraw operator
 *
 * @Param amount        Amount to be withdrawn
 *
 * @Returns double      Amount withdrawn from Savings Account 
 */
/* ---------------------------------*/
double Savings_Account::operator-=( double const amount ) {
        return Account::withdraw( amount  ) ;
}

/* -------------------------------*/
/**
 * @brief		Overloaded interface function
 *
 * @param os		Output stream with Trust Account info
 */
/* ---------------------------------*/
void Savings_Account::print( std::ostream &os ) const {
        os << "[Savings_Account: " << name << "; " << balance << ", " << int_rate << "%]" ;
}
