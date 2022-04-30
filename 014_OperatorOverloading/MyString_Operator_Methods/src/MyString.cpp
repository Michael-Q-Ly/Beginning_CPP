/**
 * @file MyString.cpp
 * @author Michael Ly (Github.com/Michael-Q-Ly)
 * @brief 
 * @version 0.4
 * @date 2022-04-14
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

// Move constructor
MyString::MyString( MyString &&source )
	: str{ source.str } {
		source.str = nullptr ;
		std::cout << "Move constructor used" << std::endl ;
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

// Move assignment
MyString &MyString::operator=( MyString &&rhs ) {
	std::cout << "Using move assignment" << std::endl ;
	if ( this == &rhs ) {
		return *this ;
	}
	delete [] str ;
	str = rhs.str ;
	rhs.str = nullptr ;
	return *this ;
}

// Equality
bool MyString::operator==( MyString const &rhs ) const {
	return ( strcmp( this->str, rhs.str )  ) ;
}

// Make lowercase
MyString MyString::operator-( void ) const {
	char *buff = new char[ std::strlen( str ) + 1] ;
	std::strcpy( buff, str ) ;
	for ( size_t i = 0 ; i < std::strlen( buff ) ; i++ ) {
		buff[i] = std::tolower( buff[i] ) ;
	}
	MyString temp {buff} ;
	delete [] buff ;

	return temp ;
}

// Concatenate
MyString MyString::operator+( MyString const &rhs ) const {
	char *buff = new char[ std::strlen( str ) + std::strlen( rhs.str ) + 1 ] ;
	std::strcpy( buff, str ) ;
	std::strcat( buff, rhs.str ) ;
	MyString temp {buff} ;
	delete [] buff ;

	return temp ;
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
