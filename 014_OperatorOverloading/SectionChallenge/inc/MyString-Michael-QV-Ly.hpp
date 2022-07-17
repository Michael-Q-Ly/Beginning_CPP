/**
 * @file MyString.hpp
 * @author Michael Ly   (github.com/Michael-Q-Ly)
 * @brief 
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <cstring>
#include <iostream>

#if !defined( _MYSTRING_HPP_ )
#define _MYSTRING_HPP_

class MyString {
        friend std::ostream &operator<<( std::ostream &os, MyString const &rhs ) ;
        friend std::istream &operator>>( std::istream &is, MyString &rhs ) ;
        private:
                char *str ;                                                             // Pointer to a char that holds a C-style string
        public:
                MyString( void ) ;                                                      // No-args constructor
                MyString( char const *s ) ;                                             // Overloaded constructor
                MyString( MyString const &source ) ;                                    // Copy Constructor
                MyString( MyString &&source ) ;                                         // Move constructor
                ~MyString( void ) ;                                                     // Destructor

                MyString &operator=( MyString const &rhs ) ;                            // Copy assignment
                MyString &operator=( MyString &&rhs ) ;                                 // Move assignment
                bool operator==( MyString const &rhs ) const ;                          // Equality
                bool operator!=( MyString const &rhs ) const ;                          // Inequality
                MyString operator-( MyString const &obj ) const ;                       // Make lowercase
                MyString operator+( MyString const &rhs ) const ;                       // Concatenate
                MyString &operator+=( MyString const &rhs ) ;                           // Append rhs to lhs
                bool operator<( MyString const &rhs ) const ;                           // Return true if string is lexically less
                bool operator>( MyString const &rhs ) const ;                           // Return true if string is lexically greater
                MyString operator*( int const num_repeats ) ;                            // Returns a string repeated num_copies amount of times
                //friend MyString operator*( MyString const &obj, int num_copies ) ;      // Returns a string repeated num_copies amount of times
                MyString &operator*=( int const num_repeats ) ;

                void display( void ) const ;                                            // No longer needed b/c overloaded >> <<

                int get_length( void ) const ;                                          // Getters
                char const *get_str( void ) const ;
} ;

#endif /* _MYSTRING_HPP_ */
