/**
 * @file MyString.cpp
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "MyString.hpp"
#include <cstring>

// No-args constructor
MyString::MyString( void )
        : str {nullptr} {
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
                        str  = new char[std::strlen( s ) + 1] ;
                        std::strcpy( str, s ) ;
                }
}

// Copy constructor
MyString::MyString( MyString const &source )
        : str {nullptr} {
                str = new char[std::strlen( source.str ) + 1] ;
                std::strcpy( str, source.str ) ;
}

// Move constructor
MyString::MyString( MyString &&source )
        : str {source.str} {
                source.str = nullptr ;
                std::cout << "Move constructor used" << std::endl ;
}

// Destructor
MyString::~MyString( void ) {
        delete [] str ;
}

// Overloaded insertion operator
std::ostream &operator<<( std::ostream &os, MyString const &rhs ) {
        os << rhs.str ;
        return os ;
}

// Overloaded extraction operator
std::istream &operator>>( std::istream &is, MyString &rhs ) {
        char * buff = new char[1000] ;
        is >> buff ;
        rhs = MyString {buff} ;
        delete [] buff ;
        return is ;
}

// Copy assignment
MyString &MyString::operator=( MyString const &rhs ) {
        std::cout << "Copy assignment" << std::endl ;
        if (this == &rhs ) {
                return *this ;
        }
        delete [] this->str ;
        str = new char[std::strlen( rhs.str ) + 1] ;
        std::strcpy( this->str, rhs.str ) ;
        return *this ;
}

// Move assignment
MyString &MyString::operator=( MyString &&rhs ) {
        std::cout << "Using move assignment" << std::endl ;
        if ( this == &rhs ) {
                return *this ;
        }
        delete [] this->str ;
        this->str = rhs.str ;
        rhs.str = nullptr ;
        return *this ;
}

// Equality
bool MyString::operator==( MyString const &rhs ) const {
        return ( std::strcmp( this->str, rhs.str ) == 0 ) ;
}

// Inequality
bool MyString::operator!=( MyString const &rhs ) const {
        return !( this->str == rhs.str ) ;                              // Reuse overloaded == operator
}

// Make lowercase
MyString MyString::operator-( MyString const &obj ) const {
        char *buff = new char[std::strlen( obj.str ) + 1] ;
        std::strcpy( buff, obj.str ) ;
        for ( size_t i = 0 ; i < std::strlen( buff ) ; i++ ) {
                buff[i] = std::tolower( buff[i] ) ;
        }
        MyString temp {buff} ;
        delete [] buff ;
        
        return temp ;
}

// Concatenation
MyString MyString::operator+( MyString const &rhs) const {
        char *buff = new char[std::strlen( this->str ) + std::strlen( rhs.str ) + 1] ;
        std::strcpy( buff, this->str ) ;
        std::strcat( buff, rhs.str ) ;

        MyString temp {buff} ;
        delete [] buff ;

        return temp ;
}

// Concatenate the RHS to the LHS and store in the LHS object
MyString &MyString::operator+=( MyString const &rhs ) {
        *this = *this + rhs ;
        return *this ;
}

// Lexically less than
bool MyString::operator<( MyString const &rhs ) const {
        char *buff = new char[std::strlen( rhs.str ) + 1] ;
        std::strcpy( buff, rhs.str ) ;
        for ( size_t i = 0 ; i < std::strlen( buff ) ; i++ ) {
                if (  *( this->str + i ) > *( buff + i )  ) {
                        return false ;
                }
        }
        delete [] buff ;
        return true ;
}

// Lexically greater than
bool MyString::operator>( MyString const &rhs ) const {
        char *buff = new char[std::strlen( rhs.str ) + 1] ;
        std::strcpy( buff, rhs.str ) ;
        for ( size_t i = 0 ; i < std::strlen( buff ) ; i++ ) {
                if (  *(this->str + i) < *( buff + i ) ) {
                        return false ;
                }
        }
        delete [] buff ;
        return true ;
}

// Repeat operator
MyString MyString::operator*( int const num_repeats ) const {
#if 1
        MyString temp ;
        for ( int i = 1 ; i <= num_repeats ; i++ ) {
                temp += *this ;
        }
        return temp ;
#else
        char *buff = new char[( std::strlen( this->str ) * num_repeats ) + 1] ;
        std::strcpy( buff, this->str ) ;
        for( auto i = 0 ; i < num_repeats ; i++ ) {
                std::strcat( buff, this->str ) ;
        }
        MyString temp {buff} ;
        delete [] buff ;
        return temp ;
#endif
}

// Repeat self operator
MyString &MyString::operator*=( int const num_repeats ) {
        *this = *this * num_repeats ;
        return *this ;
}

// Pre-increment; make uppercase
MyString &MyString::operator++( void ) {
        for ( size_t i = 0 ; i < std::strlen( this->str ) ; i++ ) {
                this->str[i] = std::toupper( this->str[i] ) ;
        }
        return *this ;
}

// Post-increment; make uppercase
MyString MyString::operator++( int ) {
        MyString temp {*this} ;                                         // Make a copy
        operator++() ;                                                  // Call pre-increment
        return temp ;                                                   // Return old value
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
char const *MyString::get_str( void ) const {
        return str ;
}
