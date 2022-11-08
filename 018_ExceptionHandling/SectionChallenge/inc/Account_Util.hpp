/**
 * @file Account_Util.hpp
 * @Brief Account Utility class header
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-09-21
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
