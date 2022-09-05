/**
 * @file Checking_Account.cpp
 * @Synopsis  Checking Account class definitions
 * @author Michael Ly (Michael-Q-Ly@github.com)
 * @version 0.0.0
 * @date 2022-08-30
 */
#include "Checking_Account.hpp"

/* -------------------------------*/
/**
 * @Synopsis            Overloaded Checking Account constructor
 *
 * @Param name          Name of Checking Account object
 * @Param balance       Balance of Checking Account object
 * @Param flat_rate     Flat withdrawal rate of Checking Account balance
 */
/* ---------------------------------*/
Checking_Account::Checking_Account( std::string name, double balance, double flat_rate )
        : Account{name, balance}, flat_rate{def_flat_rate} {
}

/* -------------------------------*/
/**
 * @Synopsis            Withdraw from checking account
 *
 * @Param amount        Amount to withdraw from checking account
 *
 * @Returns bool        Was money withdrawn or not?
 */
/* ---------------------------------*/
bool Checking_Account::withdraw( double amount ) {
        if ( balance < ( amount + flat_rate ) ) {
                std::cout << "Not enough money in bank account!" << std::endl ;
                return false ;
        }
        else {
                balance -= ( amount + flat_rate ) ;
                return true ;
        }
}

/* -------------------------------*/
/**
 * @Synopsis            Overloaded Checking Account deposit operator
 *
 * @Param amount        Amount to deposit into checking account
 *
 * @Returns double      Amount deposited into checking account 
 */
/* ---------------------------------*/
double Checking_Account::operator+=( double const amount ) {
        /* TODO: The function below returns a bool */
        return Checking_Account::deposit( amount  ) ;
}

/* -------------------------------*/
/**
 * @Synopsis            Overloaded Checking Account withdraw operator
 *
 * @Param amount        Amount to withdraw into checking account
 *
 * @Returns double      Amount withdrawn into checking account 
 */
/* ---------------------------------*/
double Checking_Account::operator-=( double const amount ) {
        /* TODO: The function below returns a bool */
        return Checking_Account::withdraw( amount  ) ;
}

/* -------------------------------*/
/**
 * @Synopsis            Output stream for the Checking Account class
 *
 * @Param os            The output stream
 * @Param account       The Checking Account object to be outputted
 *
 * @Returns             The output stream containing account name, balance, and
 *                      \ flat rate to withdraw
 */
/* ---------------------------------*/
std::ostream &operator<<( std::ostream &os, Checking_Account const &account ) {
        os << "[Checking_Account: " << account.name << "; " << account.balance << ", $" << account.flat_rate << "]" ;
        return os ;
}
