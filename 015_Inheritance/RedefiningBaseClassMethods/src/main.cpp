/**
 * @file main.cpp
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @brief Program that redefines base class methods
 * @version 0.1
 * @date 2022-08-16
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "Savings_Account.hpp"

int main( void ) {
        std::cout << "\n==== Account Class ====" << std::endl ;
        Account a1 {1000} ;
        std::cout << a1 << std::endl ;                                  // Account balance: 1000

        a1.deposit( 500.0 ) ;
        std::cout << a1 << std::endl ;                                  // Account balance: 1500

        a1.withdraw( 1000 ) ;
        std::cout << a1 << std::endl ;                                  // Account balance: 500

        a1.withdraw( 5000.0 ) ;                                         // Insufficient funds
        std::cout << a1 << std::endl ;                                  // Account balance: 500


        std::cout << "\n==== Savings Account Class ====" << std::endl ;
        Savings_Account s1 {1000, 5.0} ;
        std::cout << s1 << std::endl ;                                  // Savings account balance: 1000, Interest rate: 5%

        s1.deposit( 1000 ) ;
        std::cout << s1 << std::endl ;                                  // Savings account balance: 2050, Interest rate: 5%

        s1.withdraw( 2000 ) ;
        std::cout << s1 << std::endl ;                                  // Savings account balance: 50, Interest rate: 5%

        s1.withdraw( 1000 ) ;                                           // Insufficient funds
        std::cout << s1 << std::endl ;                                  // Savings account balance: 50, Interest rate: 5%


        std::cout << std::endl ;
        return 0 ;
}
