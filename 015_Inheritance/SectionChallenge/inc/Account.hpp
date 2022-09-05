/**
 * @file Account.hpp
 * @Synopsis Account base class
 * @author Michael Ly (Michael-Q-Ly@github.com)
 * @version 0.0.0
 * @date 2022-08-25
 */
#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_
#include <iostream>
#include <string>

/* -------------------------------*/
/**
 * @Synopsis  Base Account class
 */
/* ---------------------------------*/
class Account {
        friend std::ostream &operator<<( std::ostream &os, Account const &account ) ;
        private:
                static constexpr char const *def_name = "Unnamed Account" ;
                static constexpr double def_balance = 0.0 ;
        protected:
                std::string name ;
                double balance ;
        public:
                Account( std::string name = def_name, double balance = def_balance ) ;
                bool deposit( double amount ) ;
                bool withdraw( double amount) ;
                double get_balance( void ) const ;
                double operator+=( double const amount ) ;
                double operator-=( double const amount ) ;
} ;
#endif /* _ACCOUNT_HPP_ */
