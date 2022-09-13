/**
 * @file main.cpp
 * @brief Virtual Functions
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-09-12
 */
#include <iostream>

// This class uses dynamic polymorphism for the withdraw method
class Account {
	public:
		virtual void withdraw( double amount ) {
			std::cout << "In Account::withdraw" << std::endl ;
		}
		virtual ~Account( void ) {
			std::cout << "Account::destructor" << std::endl ;
		}
} ;

class Checking : public Account {
	public:
		virtual void withdraw( double amount ) {
			std::cout << "In Checking::withdraw" << std::endl ;
		}
		virtual ~Checking( void ) {
			std::cout << "Checking::destructor" << std::endl ;
		}
} ;

class Savings : public Account {
	public:
		virtual void withdraw( double amount ) {
			std::cout << "In Savings::withdraw" << std::endl ;
		}
		virtual ~Savings( void ) {
			std::cout << "Savings::destructor" << std::endl ;
		}
} ;

class Trust : public Account {
	public:
		virtual void withdraw( double amount ) {
			std::cout << "In Trust::withdraw" << std::endl ;
		}
		virtual ~Trust( void ) {
			std::cout << "Trust::destructor" << std::endl ;
		}
} ;

int main( void ) {
	std::cout << "\n==== Pointers ====" << std::endl ;
	Account *p1 = new Account() ;
	Account *p2 = new Checking() ;
	Account *p3 = new Savings() ;
	Account *p4 = new Trust() ;

	p1->withdraw( 1000 ) ;
	p2->withdraw( 1000 ) ;
	p3->withdraw( 1000 ) ;
	p4->withdraw( 1000 ) ;

	std::cout << "\n==== Clean up ====" << std::endl ;
	delete p1 ;
	delete p2 ;
	delete p3 ;
	delete p4 ;

	std::cout << std::endl ;
	return 0 ;
}
