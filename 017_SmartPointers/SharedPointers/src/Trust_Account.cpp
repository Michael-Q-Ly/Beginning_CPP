/**
 * @file Trust_Account.cpp
 * @Brief Trust Account class method definitions
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-09-21
 */
#include "Trust_Account.hpp"

/* -------------------------------*/
/**
 * @Brief               Overloaded Trust Account constructor
 *
 * @Param name          Name of Trust Account object
 * @Param balance       Balance of Trust Account object
 * @Param int_rate      Interest rate of Trust Account object
 */
/* ---------------------------------*/
Trust_Account::Trust_Account( std::string name, double balance, double int_rate )
        : Savings_Account{name, balance, int_rate} {
}

/* -------------------------------*/
/**
 * @Brief               Overloaded deposit function of Trust Account
 *
 * @Param Amount        Amount to deposit into Trust Account
 *
 * @Returns bool        The amount deposited into the Trust Account + interest
 *                      \ and a possible bonus
 */
/* ---------------------------------*/
bool Trust_Account::deposit( double amount ) {
        // Any deposit of $5000 or more will receive a $50 bonus deposited
        if ( amount >= 5000.0  ) {
                amount += ( amount * ( int_rate / 100  ) ) + deposit_bonus ;
                balance += amount ;
                return Account::deposit( amount ) ;
        }
        else {
                amount += ( amount * ( int_rate / 100  ) ) ;
                return Account::deposit( amount ) ;
        }
}

/* -------------------------------*/
/**
 * @Brief               Overloaded withdraw method of Trust Account
 *
 * @Param amount        Amount to withdraw from Trust Account
 *
 * @Returns             Amount of money withdrawn
 */
/* ---------------------------------*/
bool Trust_Account::withdraw( double amount ) {
        // There are a limited amount of withdrawals per year, and there is
        // a cap to how much you may withdraw
        if ( ( num_withdrawals > max_withdrawals ) || ( amount >= max_withdrawal_percent * balance  ) ) {
                std::cout << "You may not exceed 3 withdrawals this year, and you may not withdraw more than 20% of your balance!" << std::endl ;
                return false ;
        }
        else {
                Account::withdraw( amount ) ;
                num_withdrawals++ ;
                return true ;
        }
}

/* -------------------------------*/
/**
 * @Brief		Overidden printfunction from I_Printable class interface
 *
 * @Param os		Output stream with Trust Account details
 */
/* ---------------------------------*/
void Trust_Account::print( std::ostream &os ) const {
        os << "[Trust_Account: " << name << "; " << balance << ", " << int_rate << "%]" ;
}
