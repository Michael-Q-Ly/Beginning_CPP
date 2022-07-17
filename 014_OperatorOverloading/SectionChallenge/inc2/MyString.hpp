/**
 * @file MyString.hpp
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @brief 
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <cstring>

class MyString {
        friend std::ostream &operator<<( std::ostream &os, MyString const &rhs ) ;      // Overloaded insertion
        friend std::istream &operator>>( std::istream &is, MyString &rhs ) ;            // Overloaded extraction

        friend MyString operator-( MyString const &obj ) ;                              // Make lowercase
        friend bool operator==( MyString const &lhs, MyString const &rhs ) ;            // Equality
        friend bool operator!=( MyString const &lhs, MyString const &rhs ) ;            // Inequality
        friend bool operator<( MyString const &lhs, MyString const &rhs ) ;             // Lexically less
        friend bool operator>( MyString const &lhs, MyString const &rhs ) ;             // Lexically greater
        friend MyString operator+( MyString const &lhs, MyString const &rhs) ;          // Concatenate
        friend MyString &operator+=( MyString &lhs, MyString const &rhs) ;              // Append rhs to lhs
        friend MyString operator*( MyString &lhs, int const num_repeats ) ;         // Repeat
        friend MyString &operator*=( MyString &lhs, int const num_repeats ) ;       // Repeat lhs rhs amount of times
        friend MyString &operator++( MyString &obj ) ;                            // Pre-increment; make uppercase
        friend MyString operator++( MyString &obj, int ) ;                        // Post-increment; make uppercase
        
        private:
                char *str ;
        public:
                MyString( void ) ;                                                      // No-args constructor
                MyString( char const *s ) ;                                             // Overloaded constructor
                MyString( MyString const &source ) ;                                    // Copy constructor
                MyString( MyString &&source ) ;                                         // Move constructor
                ~MyString( void ) ;                                                     // Destructor

                MyString &operator=( MyString const &rhs ) ;                            // Copy operator
                MyString &operator=( MyString &&rhs ) ;                                 // Move operator

                void display( void ) ;                                                  // Display string
                int get_length( void ) const ;                                          // Gets length of string
                const char *get_str( void ) const ;                                     // Gets object string
} ;
