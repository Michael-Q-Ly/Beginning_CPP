/**
 * @file Checking_Account.cpp
 * @Brief Checking Account class definitions
 * @author Michael Ly (Michael-Q-Ly@github.com)
 * @version 0.0.0
 * @date 2022-08-30
 */
#include "Checking_Account.hpp"

/* -------------------------------*/
/**
 * @Brief               Overloaded Checking Account constructor
 *
 * @Param name          Name of Checking Account object
 * @Param balance       Balance of Checking Account object
 * @Param flat_rate     Flat withdrawal rate of Checking Account balance
 */
/* ---------------------------------*/
Checking_Account::Checking_Account( std::string name, double balance, double flat_rate )
        : Account{name, balance}, flat_rate{def_flat_rate} {
}

/**
 * @brief		Deposits money into Checking Account object
 *
 * @param amount	Amont of money to deposit into Checking Account
 *
 * @return		Was money deposited successfull?
 */
bool Checking_Account::deposit( double amount ) {
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
 * @Brief               Withdraw from checking account
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
 * @Brief               Overloaded Checking Account deposit operator
 *
 * @Param amount        Amount to deposit into checking account
 *
 * @Returns double      Amount deposited into checking account 
 */
/* ---------------------------------*/
double Checking_Account::operator+=( double const amount ) {
        return Checking_Account::deposit( amount  ) ;
}

/* -------------------------------*/
/**
 * @Brief               Overloaded Checking Account withdraw operator
 *
 * @Param amount        Amount to withdraw into checking account
 *
 * @Returns double      Amount withdrawn into checking account 
 */
/* ---------------------------------*/
double Checking_Account::operator-=( double const amount ) {
        return Checking_Account::withdraw( amount  ) ;
}

/* -------------------------------*/
/**
 * @Brief		Overidden print method from I_Printable interface
 *
 * @Param os		Output stream with Checking Account class details
 */
/* ---------------------------------*/
void Checking_Account::print( std::ostream &os ) const {
        os << "[Checking_Account: " << name << " " << balance << ", $" << flat_rate << "]" ;
	/* os << "Checking_Account" << std::endl ; */
	
}
