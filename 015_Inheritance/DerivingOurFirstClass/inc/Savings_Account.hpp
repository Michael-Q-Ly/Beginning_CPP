/**
 * @file Savings_Account.hpp
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @brief 
 * @version 0.1
 * @date 2022-07-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.hpp"

class Savings_Account: public Account {
        public:
                double int_rate ;
                Savings_Account( void ) ;
                ~Savings_Account( void ) ;
                void deposit( double amount ) ;
                void withdraw( double amount ) ;
} ;

#endif /* _SAVINGS_ACCOUNT_H_ */
