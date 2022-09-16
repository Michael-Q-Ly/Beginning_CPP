/**
 * @file main.cpp
 * @brief Abstract classes as interfaces - start
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-09-15
 */
#include <iostream>

class Account {
		friend std::ostream &operator<<( std::ostream &os, Account const &acc ) ;
	public:
		virtual void withdraw( double amount ) {
			std::cout << "In Account::withdraw" << std::endl ;
		}
		virtual ~Account( void ) { }
} ;

std::ostream &operator<<( std::ostream &os, Account const &acc ) {
	os << "Account display" ;
	return os ;
}


class Checking : public Account {
		friend std::ostream &operator<<( std::ostream &os, Checking const &acc ) ;
	public:
		virtual void withdraw( double amount ) {
			std::cout << "In Checking::withdraw" << std::endl ;
		}
		virtual ~Checking( void ) { }
} ;

std::ostream &operator<<( std::ostream &os, Checking const &acc ) {
	os << "Checking display" ;
	return os ;
}


class Savings : public Account {
		friend std::ostream &operator<<( std::ostream &os, Savings const &acc ) ;
	public:
		virtual void withdraw( double amount ) {
			std::cout << "In Savings::withdraw" << std::endl ;
		}
		virtual ~Savings( void ) { }
} ;

std::ostream &operator<<( std::ostream &os, Savings const &acc ) {
	os << "Savings display" ;
	return os ;
}


class Trust : public Account {
		friend std::ostream &operator<<( std::ostream &os, Trust const &acc ) ;
	public:
		virtual void withdraw( double amount ) {
			std::cout << "In Trust::withdraw" << std::endl ;
		}
		virtual ~Trust( void ) { }
} ;

std::ostream &operator<<( std::ostream &os, Trust const &acc ) {
	os << "Trust display" ;
	return os ;
}

int main( void ) {
	/* Account a ; */
	/* std::cout << a << std::endl ; */

	/* Checking c ; */
	/* std::cout << c << std::endl ; */

	/* Savings s ; */
	/* std::cout << s << std::endl ; */

	/* Trust t ; */
	/* std::cout << t << std::endl ; */

	Account *p1 = new Account() ;
	std::cout << *p1 << std::endl ;			// Account display

	Account *p2 = new Checking() ;
	std::cout << *p2 << std::endl ;			// Account display

	delete p1 ;
	delete p2 ;

	std::cout << std::endl ;
	return 0 ;
}
