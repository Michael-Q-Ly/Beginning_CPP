/**
 * @file Savings_Account.cpp
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @brief 
 * @version 0.1
 * @date 2022-07-23
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Savings_Account.hpp"
#include <iostream>

/**
 * @brief Construct a new Savings_Account::Savings_Account object
 * 
 */
Savings_Account::Savings_Account( void )
        : int_rate{3.0} {

}

/**
 * @brief Destroy the Savings_Account::Savings_Account object
 * 
 */
Savings_Account::~Savings_Account( void ) {

}

/**
 * @brief 
 * 
 * @param amount 
 */
void Savings_Account::deposit( double amount ) {
        std::cout << "Savings Account deposit called with " << amount << std::endl ;
}

/**
 * @brief 
 * 
 * @param amount 
 */
void Savings_Account::withdraw( double amount ) {
        std::cout << "Savings Account withdraw called with " << amount << std::endl ;
}