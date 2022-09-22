/**
 * @file Account_Util.hpp
 * @Synopsis  Helper functions for Account and Savings Account classes
 * @author Michael Ly (Michael-Q-Ly@github.com)
 * @version 0.0.0
 * @date 2022-08-25
 * @note These are all ordinary functions
 */
#ifndef _ACCOUNT_UTIL_HPP_
#define _ACCOUNT_UTIL_HPP_
#include "Account.hpp"
#include "Savings_Account.hpp"
#include "Checking_Account.hpp"
#include "Trust_Account.hpp"
#include "I_Printable.hpp"
#include <vector>

// Utility helper functions for Account class
void display( std::vector<Account *> const &accounts ) ;
void deposit( std::vector<Account *> &accounts, double amount ) ;
void withdraw( std::vector<Account *> &accounts, double amount ) ;

#endif /* _ACCOUNT_UTIL_HPP_ */
