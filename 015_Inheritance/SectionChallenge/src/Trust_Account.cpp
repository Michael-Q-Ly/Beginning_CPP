/**
 * @file Trust_Account.cpp
 * @Synopsis  Trust Account class definitions
 * @author Michael Ly (Michael-Q-Ly@github.com)
 * @version 0.0.0
 * @date 2022-09-04
 */
#include "Trust_Account.hpp"

/* -------------------------------*/
/**
 * @Synopsis            Overloaded Trust Account constructor
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
 * @Synopsis            Overloaded deposit function of Trust Account
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
 * @Synopsis            Overloaded withdraw method of Trust Account
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
 * @Synopsis            Overloaded insertion operator for Trust Account object
 *                      \ that shows Trust Account name, balance, and interest rate
 *
 * @Param os            The output stream
 * @Param account       Trust Account object     
 *
 * @Returns             The Trust Account object members
 */
/* ---------------------------------*/
std::ostream &operator<<( std::ostream &os, Trust_Account const &account ) {
        os << "[Trust_Account: " << account.name << "; " << account.balance << ", " << account.int_rate << "%]" ;
        return os ;
}
