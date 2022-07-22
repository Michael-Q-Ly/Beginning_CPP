/**
 * @file MyString.cpp
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @brief 
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "MyString.hpp"

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
                        str = new char[std::strlen( s ) + 1] ;
                        std::strcpy( str, s ) ;
                }
}

// Copy Constructor
MyString::MyString( MyString const &source )
        : str {nullptr} {
                str = new char[std::strlen( source.str ) + 1] ;
                std::strcpy( str, source.str ) ;
}

// Move Constructor
MyString::MyString( MyString &&source )
        : str {source.str} {
                source.str = nullptr ;
                std::cout << "Move Constructor used" << std::endl ;
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
std::istream &operator>>( std::istream &is, MyString &rhs) {
        char *buff = new char[1000] ;
        is >> buff ;
        rhs = MyString {buff} ;
        delete [] buff ;
        return is ;
}

// Copy assignment
MyString &MyString::operator=( MyString const &rhs ) {
        std::cout << "Copy assignment" << std::endl ;
        if ( this == &rhs ) {
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

// Make lowercase
MyString operator-( MyString const &obj ) {
        char *buff = new char[std::strlen( obj.str ) + 1] ;
        std::strcpy( buff, obj.str ) ;

        for ( size_t i = 0 ; i < std::strlen( obj.str ) ; i++ ) {
                buff[i] = std::tolower( buff[i] ) ;
        }

        MyString temp {buff} ;
        delete [] buff ;
        return temp ;
}

// Equality
bool operator==( MyString const &lhs, MyString const &rhs ) {
        return ( strcmp( lhs.str, rhs.str ) == 0 ) ;
}

// Inequality
bool operator!=( MyString const &lhs, MyString const &rhs ) {
        return !( lhs.str == rhs.str ) ;
}

// Lexically less
bool operator<( MyString const &lhs, MyString const &rhs ) {
        // for ( size_t i = 0 ; i < std::strlen( rhs.str ) ; i++ ) {
        //         if (  *( lhs.str + i ) > *( rhs.str + i )  ) {
        //                 return false ;
        //         }
        // }
        // return true ;
        return ( std::strcmp( lhs.str, rhs.str ) < 0 ) ;
}

// Lexically greater
bool operator>( MyString const &lhs, MyString const &rhs ) {
        // for ( size_t i = 0 ; i < std::strlen( rhs.str ) ; i++ ) {
        //         if (  *( lhs.str ) < *( rhs.str )  ) {
        //                 return false ;
        //         }
        // }
        // return true ;
        return ( std::strcmp( lhs.str, rhs.str ) > 0 ) ;
}

// Concatenate
MyString operator+( MyString const &lhs, MyString const &rhs ) {
        char *buff = new char[std::strlen( lhs.str ) + std::strlen( rhs.str ) + 1] ;
        strcpy( buff, lhs.str ) ;
        strcat( buff, rhs.str ) ;
        MyString temp {buff} ;
        delete [] buff ;
        return temp ;
}

// Append rhs to lhs
MyString &operator+=( MyString &lhs, MyString const &rhs ) {
        lhs = lhs + rhs ;
        return lhs ;
}

// Repeat
MyString operator*( MyString &lhs, int const num_repeats ) {
        MyString temp {lhs.str} ;
        for ( int i  = 0 ; i < num_repeats - 1 ; i++ ) {
                temp += lhs ;
        }
        return temp ;
}

// Repeat lhs rhs amount of times
MyString &operator*=( MyString &lhs, int const num_repeats ) {
        lhs = lhs * ( num_repeats ) ;
        return lhs ;
}

// Pre-increment; make uppercase
MyString &operator++( MyString &obj ) {
        for ( size_t i = 0 ; i < std::strlen( obj.str ) ; i++ ) {
                obj.str[i] = std::toupper( obj.str[i] ) ;
        }
        return obj ;
}

// Post-increment; make uppercase
MyString operator++( MyString &obj, int ) {
        MyString temp {obj} ;
        ++obj ;
        return temp ;
}

// Display method
void MyString::display( void ) {
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
