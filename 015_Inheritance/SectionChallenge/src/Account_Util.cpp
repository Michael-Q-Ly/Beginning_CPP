/**
 * @file Account_Utils.cpp
 * @Synopsis  Helper function definitions for Account and Savings Account classes
 * @author Michael Ly (Michael-Q-Ly@github.com)
 * @version 0.0.0
 * @date 2022-08-27
 */
#include <iostream>
#include "Account_Util.hpp"

/* -------------------------------*/
/**
 * @Synopsis            Displays account objects in a vector of Account objects
 *
 * @Param accounts      The Account object to be displayed
 */
/* ---------------------------------*/
void display( std::vector<Account> const &accounts ) {
        std::cout << "\n==== Accounts ================" << std::endl ;
        for ( auto const &acc : accounts ) {
                std::cout << acc << std::endl ;
        }
}

/* -------------------------------*/
/**
 * @Synopsis            Deposits amount into a vector element of type Account
 *
 * @Param accounts      Vector of Account classes
 * @Param amount        Amount of money to be deposited into the account vector
 *                      \ element
 */
/* ---------------------------------*/
void deposit( std::vector<Account> &accounts, double amount ) {
        std::cout << "\n==== Depositing to Accounts ================" << std::endl ;
        for ( auto &acc : accounts ) {
                if ( acc.deposit( amount ) ) {
                        std::cout << "Deposited " << amount << " to " << acc << std::endl ;
                }
                else {
                        std::cout << "Failed deposit of " << amount << " to " << acc << std::endl ;
                }
        }
}

/* -------------------------------*/
/**
 * @Synopsis            Withdraws money from a vector element of type Account
 *                      \ class
 *
 * @Param accounts      Vector of account classes
 * @Param amount        Amount of money to withdraw from account vector
 */
/* ---------------------------------*/
void withdraw( std::vector<Account> &accounts, double amount ) {
        std::cout << "\n==== Withdrawing from Accounts ================" << std::endl ;
        for ( auto &acc : accounts ) {
                if ( acc.withdraw( amount ) ) {
                        std::cout << "Withdrew " << amount << " from " << acc << std::endl ;
                }
                else {
                        std::cout << "Failed withdrawl of " << amount << " from " << acc << std::endl ;
                }
        }
}

// Helper functions for Savings Account class

/* -------------------------------*/
/**
 * @Synopsis            Displays account objects in a vector of Savings Account objects
 *
 * @Param accounts      The Savings Account object to be displayed
 */
/* ---------------------------------*/
void display( std::vector<Savings_Account> const &accounts ) {
        std::cout << "\n==== Savings Account ================" << std::endl ;
        for ( auto const &acc : accounts ) {
                std::cout << acc << std::endl ;
        }
}

/* -------------------------------*/
/**
 * @Synopsis            Deposits amount into a vector element of type Savings
 *                      \ Account
 *
 * @Param accounts      Vector of Savings Account classes
 * @Param amount        Amount of money to be deposited into the account vector
 * \ element
 */
/* ---------------------------------*/
void deposit( std::vector<Savings_Account> &accounts, double amount ) {
        std::cout << "\n==== Depositing to Savings Account ================" << std::endl ;
        for ( auto &acc : accounts ) {
                if ( acc.deposit( amount ) ) {
                        std::cout << "Deposited " << amount << " to " << acc << std::endl ;
                }
                else {
                        std::cout << "Failed deposit of " << amount << " to " << acc << std::endl ;
                }
        }
}

/* -------------------------------*/
/**
 * @Synopsis            Withdraws money from a vector element of type Savings
 *                      \ Account class
 *
 * @Param accounts      Vector of account classes
 * @Param amount        Amount of money to withdraw from account vector
 */
/* ---------------------------------*/
void withdraw( std::vector<Savings_Account> &accounts, double amount ) {
        std::cout << "\n==== Withdrawing from Savings Account ================" << std::endl ;
        for ( auto &acc : accounts ) {
                if ( acc.withdraw( amount ) ) {
                        std::cout << "Withdrew " << amount << " from " << acc << std::endl ;
                }
                else {
                        std::cout << "Failed withdrawl of " << amount << " from " << acc << std::endl ;
                }
        }
}

