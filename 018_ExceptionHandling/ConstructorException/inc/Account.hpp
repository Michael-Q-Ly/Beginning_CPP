/**
 * @file Account.hpp
 * @Brief Account class header
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-09-21
 */
#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_
#include "I_Printable.hpp"
#include <iostream>
#include <string>

/* -------------------------------*/
/**
 * @Brief	Abstract Account class with printing interface
 */
/* ---------------------------------*/
class Account : public I_Printable {
        /* friend std::ostream &operator<<( std::ostream &os, Account const &account ) ; */
        private:
                static constexpr char const *def_name = "Unnamed Account" ;
                static constexpr double def_balance = 0.0 ;
        protected:
                std::string name ;
                double balance ;
        public:
                Account( std::string name = def_name, double balance = def_balance ) ;
		virtual void print( std::ostream &os ) const override ;
                virtual bool deposit( double amount ) = 0 ;
                virtual bool withdraw( double amount) = 0 ;
                double get_balance( void ) const ;
                double operator+=( double const amount ) ;
                double operator-=( double const amount ) ;
		virtual ~Account( void ) = default ;
} ;
#endif /* _ACCOUNT_HPP_ */
