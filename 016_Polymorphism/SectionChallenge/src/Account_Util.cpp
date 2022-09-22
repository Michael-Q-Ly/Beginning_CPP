/**
 * @file Account_Utils.cpp
 * @Brief     Helper function definitions for Account and Savings Account classes
 * @author Michael Ly (Michael-Q-Ly@github.com)
 * @version 0.0.0
 * @date 2022-08-27
 */
#include "Account_Util.hpp"
#include <iostream>

/* -------------------------------*/
/**
 * @Brief               Displays account objects in a vector of Account objects
 *
 * @Param accounts      The Account object to be displayed
 */
/* ---------------------------------*/
void display( std::vector<Account *> const &accounts ) {
        std::cout << "\n==== Accounts ================" << std::endl ;
        for ( auto const &acc : accounts ) {
                std::cout << *acc << std::endl ;
        }
}

/* -------------------------------*/
/**
 * @Brief               Deposits amount into a vector element of Account class
 *
 * @Param accounts      Vector of Account classes (including inherited Account classes)
 * @Param amount        Amount of money to be deposited into the account vector
 *                      \ element
 */
/* ---------------------------------*/
void deposit( std::vector<Account *> &accounts, double amount ) {
        std::cout << "\n==== Depositing to Accounts ================" << std::endl ;
        for ( auto &acc : accounts ) {
                if ( acc->deposit( amount ) ) {
                        std::cout << "Deposited " << amount << " to " << *acc << std::endl ;
                }
                else {
                        std::cout << "Failed deposit of " << amount << " to " << *acc << std::endl ;
                }
        }
}

/* -------------------------------*/
/**
 * @Brief               Withdraws money from a vector element of type Account
 *                      \ class
 *
 * @Param accounts      Vector of account classes
 * @Param amount        Amount of money to withdraw from account vector
 */
/* ---------------------------------*/
void withdraw( std::vector<Account *> &accounts, double amount ) {
        std::cout << "\n==== Withdrawing from Accounts ================" << std::endl ;
        for ( auto &acc : accounts ) {
                if ( acc->withdraw( amount ) ) {
                        std::cout << "Withdrew " << amount << " from " << *acc << std::endl ;
                }
                else {
                        std::cout << "Failed withdrawl of " << amount << " from " << *acc << std::endl ;
                }
        }
}
