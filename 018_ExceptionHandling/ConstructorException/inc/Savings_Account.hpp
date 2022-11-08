/**
 * @file Savings_Account.hpp
 * @Brief Savings Account class header
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-09-21
 */
#ifndef _SAVINGS_ACCOUNT_HPP_
#define _SAVINGS_ACCOUNT_HPP_
#include "Account.hpp"

/* -------------------------------*/
/**
 * @Synopsis  Derived Savings account from Account Base class
 */
/* ---------------------------------*/
class Savings_Account : public Account {
        /* friend std::ostream &operator<<( std::ostream &os, Savings_Account const &account ) ; */
        private:
                static constexpr char const *def_name = "Unnamed Savings Account" ;
                static constexpr double def_balance = 0.0 ;
                static constexpr double def_int_rate = 0.0 ;
        protected:
                double int_rate ;
        public:
                Savings_Account( std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate ) ;
		virtual void print( std::ostream &os ) const override ;
                virtual bool deposit( double amount ) override ;
                virtual bool withdraw( double amount ) override ;
                double operator+=( double const amount  ) ;
                double operator-=( double const amount  ) ;
		virtual ~Savings_Account( void ) = default ;
} ;

#endif /* _SAVINGS_ACCOUNT_HPP_ */
