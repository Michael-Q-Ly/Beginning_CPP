/**
 * @file MyString.hpp
 * @author Michael Ly (Github.com/Michael-Q-Ly)
 * @brief 
 * @version 0.1
 * @date 2022-04-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _MY_STRING_HPP_
#define _MY_STRING_HPP_

class MyString {
    private:
	char *str ;					// Pointer to a char[] that holds a C-style string 
    public:
	MyString( void ) ;				// No-args constructor
	MyString( char const *s ) ;			// Overloaded constructor
	MyString( MyString const &source ) ;		// Copy constructor
	MyString( MyString &&source ) ;			// Move constructor
	~MyString( void ) ;				// Destructor

	MyString &operator=( MyString const &rhs ) ;	// Copy assignment
	MyString &operator=( MyString &&rhs ) ;		// Move assignment

	void display( void ) const ;

	int get_length( void ) const ;			// Getters
	char const *get_str( void ) const ;
} ;

#endif /* _MY_STRING_HPP_ */
