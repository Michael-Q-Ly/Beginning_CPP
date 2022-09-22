/**
 * @file main.cpp
 * @Brief Unique Pointers example
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-09-21
 */
#include "Account.hpp"
#include "Checking_Account.hpp"
#include "Savings_Account.hpp"
#include "Trust_Account.hpp"
#include <iostream>
#include <memory>
#include <vector>

class Test {
	private:
		int data ;
	public:
		Test( void ) ;
		Test( int data ) ;
		int get_data( void ) const ;
		~Test( void ) ;
} ;

int main( void ) {
	/*-----------------------------------------------------------------------------
	 * Normal instantiation 
	 *-----------------------------------------------------------------------------*/
	/* Test t1 {1000} ; */	


	/*-----------------------------------------------------------------------------
	 * Dynamic allocation 
	 *-----------------------------------------------------------------------------*/
	/* Test *t1 = new Test {1000} ; */
	/* static_cast<void>(t1) ; */
	/* delete t1 ; */


	/*-----------------------------------------------------------------------------
	 *  Using unique pointers for dnyamic allocation then with make_unique
	 *-----------------------------------------------------------------------------*/
	/* std::unique_ptr<Test> t1 {new Test{100}} ; */
	/* std::unique_ptr<Test> t2 = std::make_unique<Test>( 1000 ) ; */


	/* std::unique_ptr<Test> t3 ; */
	/* t3 = t1 ;									// Not allowed to assign or copy unique pointers */
	/* 										// But you can move them */
	/* t3 = std::move( t1 ) ; */

	/* if ( !t1 ) { */
	/* 	std::cout << "t1 is a nullptr" << std::endl ; */
	/* } */


	/*-----------------------------------------------------------------------------
	 * Vector of unique pointers 
	 *-----------------------------------------------------------------------------*/
	std::unique_ptr<Account> a1 = std::make_unique<Checking_Account>("Moe", 5000 ) ;
	std::cout << *a1 << std::endl ;
	a1->deposit( 5000 ) ;
	std::cout << *a1 << std::endl ;

	std::vector<std::unique_ptr<Account>> accounts ;

	accounts.push_back( std::make_unique<Checking_Account>( "James", 1000 ) ) ;
	accounts.push_back( std::make_unique<Savings_Account>( "Billy", 4000, 5.2 ) ) ;
	accounts.push_back( std::make_unique<Trust_Account>( "Bobby", 5000, 4.5 ) ) ;

	for ( auto const &acc : accounts) {
		std::cout << *acc << std::endl ;
	}

	std::cout << std::endl ;
	return 0 ;
}


/*-----------------------------------------------------------------------------
 * Functions 
 *-----------------------------------------------------------------------------*/
Test::Test( void )
	: data{0} {
		std::cout << "Test constructor ( " << data << " )" << std::endl ;
}

Test::Test( int data )
	: data{data} {
		std::cout << "Test constructor ( " << data << " )" << std::endl ;
}

int Test::get_data( void ) const {
	return data ;
}

Test::~Test( void ) {
	std::cout << "Test destructor ( " << data << " )" << std::endl ;
}
