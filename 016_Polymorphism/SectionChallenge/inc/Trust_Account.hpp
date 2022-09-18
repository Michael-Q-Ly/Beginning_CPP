/**
 * @file Trust_Account.hpp
 * @Synopsis  Trust Account derived class
 * @author Michael Ly (Michael-Q-Ly@github.com)
 * @version 0.0.0
 * @date 2022-09-04
 */
#ifndef _TRUST_ACCOUNT_HPP_
#define _TRUST_ACCOUNT_HPP_
#include "Savings_Account.hpp"

/* -------------------------------*/
/**
 * @Synopsis    Derived Trust Account from Account base class
 */
/* ---------------------------------*/
class Trust_Account : public Savings_Account {
        friend std::ostream &operator<<( std::ostream &os, Trust_Account const &account ) ;
        private:
                static constexpr char const *def_name = "Unnamed Trust Account" ;
                static constexpr double def_balance = 0.00 ;
                static constexpr double def_interest_rate = 0.00 ;
                static constexpr double deposit_bonus = 50.00 ;
                static constexpr double bonus_threshold = 5000.00 ;
                static constexpr short max_withdrawals = 3 ;
                static constexpr double max_withdrawal_percent = 0.2 ;
        protected:
                double num_withdrawals ;
        public:
                Trust_Account( std::string name = def_name, double balance = def_balance, double int_rate = def_interest_rate  ) ;
		virtual void print( std::ostream &os ) const override ;
                virtual bool deposit( double amount ) override ;
                virtual bool withdraw( double amount ) override ;
                double operator+=( double const amount ) ;
                double operator-=( double const amount ) ;
		virtual ~Trust_Account( void ) = default ;
} ;
#endif /* _TRUST_ACCOUNT_HPP_ */
