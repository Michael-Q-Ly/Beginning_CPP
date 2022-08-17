/**
 * @file Account.hpp
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @brief Account class
 * @version 0.1
 * @date 2022-08-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_
#include <iostream>

/**
 * @brief       Simple account class
 * 
 */
class Account {
        friend std::ostream &operator <<  ( std::ostream &os, Account const &account ) ;
        protected:
                double balance ;
        public:
                Account( void ) ;
                Account( double balance ) ;
                void deposit( double amount ) ;
                void withdraw( double amount ) ;
} ;

#endif /* _ACCOUNT_HPP_ */
