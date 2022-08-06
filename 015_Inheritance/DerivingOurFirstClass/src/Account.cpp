/**
 * @file Account.cpp
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @brief 
 * @version 0.1
 * @date 2022-07-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Account.hpp"
#include <iostream>

/**
 * @brief Construct a new Account:: Account object
 * 
 */
Account::Account( void )
        : balance {0.0}, name{"Account"} {

}

/**
 * @brief Destroy the Account:: Account object
 * 
 */
Account::~Account( void ) {
}

/**
 * @brief 
 * 
 * @param amount 
 */
void Account::deposit( double amount ) {
        std::cout << "Account deposit called with " << amount << std::endl ;
}

/**
 * @brief 
 * 
 * @param amount 
 */
void Account::withdraw( double amount ) {
        std::cout << "Account withdraw called with " << amount << std::endl ;
}
