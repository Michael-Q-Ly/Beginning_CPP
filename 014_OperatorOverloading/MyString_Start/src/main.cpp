/**
 * @file main.cpp
 * @author Michael Ly ( Github.com/Michael-Q-Ly)
 * @brief Section 14, MyString - starting point
 * @version 0.1
 * @date 2022-04-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "MyString.hpp"
#include <iostream>

int main() {
    MyString empty ;                // No-args constructor
    MyString larry( "Larry" ) ;     // Overloaded constructor
    MyString stooge {larry} ;        // Copy constructor

    std::cout << "Empty: " ;
    empty.display() ;
    std::cout << "Larry: " ;
    larry.display() ;
    std::cout << "Stooges: " ;
    stooge.display() ;


    std::cout << std::endl ;
    return 0 ;
}
