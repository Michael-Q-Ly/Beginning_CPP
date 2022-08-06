/**
 * @file Account.hpp
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @brief 
 * @version 0.1
 * @date 2022-07-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account {
        private:
                double balance ;
                std::string name ;
        public:
                void deposit( double amount ) ;
                void withdraw( double amount ) ;
                Account( void ) ;
                ~Account( void ) ;
} ;

#endif /* _ACCOUNT_H_ */