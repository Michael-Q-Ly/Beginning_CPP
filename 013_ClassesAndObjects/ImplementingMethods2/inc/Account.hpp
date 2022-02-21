// Account.hpp
#ifndef _ACCOUNT_HPP_
#define _ACCOUNT_HPP_

#include <string>

class Account {
	private:
		// Attributes
		std::string name ;
		double balance ;

	public:
		// Methods
		/* Declared inline */
		void set_balance( double bal )		{ balance = bal ; }
		double get_balance( void ) 		{ return balance ; }

		// Methods will be declared outside the class declaration with scope resolution operator
		void set_name( std::string n ) ;
		std::string get_name( void ) ;

		bool deposit( double amount ) ;
		bool withdraw( double amount ) ;
} ;

#endif /* _ACCOUNT_HPP_ */

