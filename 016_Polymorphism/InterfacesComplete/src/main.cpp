/**
 * @file main.cpp
 * @brief Abstract classes as interfaces - complete with an interface
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-09-15
 */

#include <iostream>

class I_Printable {
		friend std::ostream &operator<<( std::ostream &os, I_Printable const &obj ) ;
	public:
		virtual void print( std::ostream &os ) const = 0 ;
} ;

std::ostream &operator<<( std::ostream &os, I_Printable const &obj ) {
	obj.print( os ) ;
	return os ;
}


class Account : public I_Printable {
	public:
		virtual void withdraw( double amount ) {
			std::cout << "In Account::withdraw" << std::endl ;
		}
		virtual void print( std::ostream &os ) const override {
			os << "Account display" ;
		}
		virtual ~Account( void ) { }
} ;


class Checking : public Account {
	public:
		virtual void withdraw( double amount ) override {
			std::cout << "In Checking::withdraw" << std::endl ;
		}
		virtual void print( std::ostream &os ) const override {
			os << "Checking display" ;
		}
		virtual ~Checking( void ) { }
} ;


class Savings : public Account {
	public:
		virtual void withdraw( double amount ) override {
			std::cout << "In Savings::withdraw" << std::endl ;
		}
		virtual void print( std::ostream &os ) const override {
			os << "Savings display" ;
		}
		virtual ~Savings( void ) { }
} ;


class Trust : public Account {
	public:
		virtual void withdraw( double amount ) override{
			std::cout << "In Trust::withdraw" << std::endl ;
		}
		virtual void print( std::ostream &os ) const override {
			os << "Trust display" ;
		}
		virtual ~Trust( void ) { }
} ;

class Dog : public I_Printable {
	public:
		virtual void print( std::ostream &os ) const override {
			os << "Woof woof" ;
		}
		virtual ~Dog( void ) { }

} ;

void print( I_Printable const &obj ) {
	std::cout << obj << std::endl ;
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
	std::cout << *p2 << std::endl ;			// Checking display

	Account *p3 = new Savings() ;
	std::cout << *p3 << std::endl ;			// Savings display

	Account *p4 = new Trust() ;
	std::cout << *p4 << std::endl ;			// Trust display
	
	Dog *dog = new Dog() ;
	std::cout << *dog << std::endl ;		// Woof woof

	print( *dog ) ;					// Woof woof

	delete p1 ;
	delete p2 ;
	delete p3 ;
	delete p4 ;
	delete dog ;

	std::cout << std::endl ;
	return 0 ;
}
