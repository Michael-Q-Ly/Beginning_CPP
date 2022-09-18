/**
 * @file Checking_Account.hpp
 * @Synopsis  Checking account derived class that has a name and a balance and
 * a fee of $1.50 per withdrawal transaction. Every withdrawal transaction will
 * be assessed this flat fee.
 * @author Michael Ly (Michael-Q-Ly@github.com)
 * @version 0.0.0
 * @date 2022-08-28
 */
#ifndef _CHECKING_ACCOUNT_HPP_
#define _CHECKING_ACCOUNT_HPP_
#include "Account.hpp"

/* -------------------------------*/
/**
 * @Synopsis    Derived Checking Account from Account base class
 */
/* ---------------------------------*/
class Checking_Account : public Account {
        private:
                static constexpr char const *def_name = "Unnamed Checking Account" ;
                static constexpr double def_balance = 0.0 ;
                static constexpr double def_flat_rate = 1.50 ;
        protected:
                double flat_rate ;
        public:
        Checking_Account( std::string name = def_name, double balance = def_balance, double flat_rate = def_flat_rate ) ;
		virtual void print( std::ostream &os ) const override ;
		virtual bool deposit( double amount ) override ;
                virtual bool withdraw( double amount ) override ;
                double operator+=( double const amount  ) ;
                double operator-=( double const amount  ) ;
		virtual ~Checking_Account( void ) = default ;
} ;

#endif /* _CHECKING_ACCOUNT_HPP_ */
