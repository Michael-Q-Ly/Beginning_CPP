/**
 * @file MyString.hpp
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef _MYSTRING_HPP_
#define _MYSTRING_HPP_
#include <cstring>
#include <iostream>

class MyString {
        friend std::ostream &operator<<( std::ostream &os, MyString const &rhs ) ;
        friend std::istream &operator>>( std::istream &is, MyString &rhs ) ;
        private:
                char *str ;                                                             // Pointer to a char that holds a C-style string
        public:
                MyString( void ) ;                                                      // No-args constructor
                MyString( char const *s ) ;                                             // Overloaded constructor
                MyString( MyString const &source ) ;                                    // Copy constructor
                MyString( MyString &&source ) ;                                         // Move constructor
                ~MyString( void ) ;                                                     // Destructor

                MyString &operator=( MyString const &rhs ) ;                            // Copy assignment
                MyString &operator=( MyString &&rhs ) ;                                 // Move assignment
                bool operator==( MyString const &rhs ) const ;                          // Equality
                bool operator!=( MyString const &rhs ) const ;                          // Inequality
                MyString operator-( MyString const &obj ) const ;                       // Make lowercase
                MyString operator+( MyString const &obj ) const ;                       // Concatenate
                MyString &operator+=( MyString const &obj ) ;                           // Append rhs to lhs
                bool operator<( MyString const &rhs ) const ;                           // Return true if string is lexically less
                bool operator>( MyString const &rhs) const ;                            // Return true if string is lexically greater
                MyString operator*( int const num_repeats ) const ;                     // Returns a string repeated num_repeats amount of times
                MyString &operator*=( int const num_repeats ) ;                         // Returns the same string repeated num_repeats amount of times
                MyString &operator++( void ) ;                                          // Pre-increment; make uppercase
                MyString operator++( int ) ;                                            // Post-increment; make uppercase

                void display( void ) const ;                                            // No longer needed because overloaded >> and << operators

                int get_length( void ) const ;                                          // Getters
                char const *get_str( void ) const ;
} ;

#endif /* _MYSTRING_HPP_ */