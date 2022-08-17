/**
 * @file Savings_Account.hpp
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @brief Savings account class
 * @version 0.1
 * @date 2022-08-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _SAVINGS_ACCOUNT_HPP_
#define _SAVINGS_ACCOUNT_HPP_
#include "Account.hpp"

/**
 * @brief       Savings account class
 * 
 * @note        Withrdraw method does not specialize
 * 
 */
class Savings_Account : public Account {
        friend std::ostream &operator<<( std::ostream &os, Savings_Account const &account ) ;
        protected:
                double int_rate ;
        public:
                Savings_Account(  void ) ;
                Savings_Account( double balance, double int_rate ) ;
                void deposit( double amount ) ;
                // Withdraw is inherited
} ;

#endif /* _SAVINGS_ACCOUNT_HPP_ */