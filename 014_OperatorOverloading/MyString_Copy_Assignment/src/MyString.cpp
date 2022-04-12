/**
 * @file MyString.cpp
 * @author Michael Ly (Github.com/Michael-Q-Ly)
 * @brief 
 * @version 0.1
 * @date 2022-04-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include "MyString.hpp"
#include <iostream>
#include <cstring>

// No-args constructor
MyString::MyString( void )
    : str{nullptr} {
        str = new char[1] ;
        *str = '\0' ;
}

// Overloaded constructor
MyString::MyString( char const *s )
    : str {nullptr} {
        if ( s == nullptr ) {
            str = new char[1] ;
            *str = '\0' ;
        }
        else {
            str = new char[std::strlen(s)+1] ;
            std::strcpy( str, s ) ;
        }
}

// Copy Constructor
MyString::MyString( MyString const &source )
    : str{nullptr} {
        str = new char[std::strlen( source.str ) + 1] ;
        std::strcpy( str, source.str ) ;
}

// Destructor
MyString::~MyString( void ) {
    delete [] str ;
}

// Copy assignment
MyString &MyString::operator=( MyString const &rhs ) {
    std::cout << "Copy assignment" << std::endl ;
    if ( this == &rhs ) {
        return *this ;
    }
    delete [] this -> str ;
    str = new char[std::strlen(rhs.str) + 1] ;
    std::strcpy( this -> str, rhs.str ) ;
    return *this ;
}

// Display method
void MyString::display( void ) const {
    std::cout << str << ": " << get_length() << std::endl ;
}

// Length getter
int MyString::get_length( void ) const {
    return std::strlen( str ) ;
}

// String getter
const char *MyString::get_str( void ) const {
    return str ;
}
