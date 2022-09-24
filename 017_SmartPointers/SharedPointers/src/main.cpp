/**
 * @file main.cpp
 * @Brief Unique Pointers example
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-09-23
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

void func( std::shared_ptr<Test> p ) ;

/*-----------------------------------------------------------------------------
 * Main
 *-----------------------------------------------------------------------------*/
int main( void ) {
	/*-----------------------------------------------------------------------------
	 * use_count() Example 
	 *-----------------------------------------------------------------------------*/
	/* // use_count - The number of shared_ptr objects managing the heap Checking_Account */
	
	/* std::shared_ptr<int> p1 {new int {100}} ; */
	/* std::cout << "Use count: " << p1.use_count() << std::endl ;				// 1 */

	/* std::shared_ptr<int> p2 {p1} ;							// Shared ownership */
	/* std::cout << "Use count: " << p1.use_count() << std::endl ;				// 2 */

	/* p1.reset() ;										// Decrement the use_count ; p1 is nulled Output */
	/* std::cout << "Use count: " << p1.use_count() << std::endl ;				// 0 */
	/* std::cout << "Use count: " << p2.use_count() << std::endl ;				// 1 */


	/*-----------------------------------------------------------------------------
	 * Passing a shared pointer as a function argument 
	 *-----------------------------------------------------------------------------*/
	/* std::cout << "\n============================================================" << std::endl ; */
	/* std::shared_ptr<Test> ptr = std::make_shared<Test>( 100 ) ; */
	/* func( ptr ) ; */
	/* std::cout << "Use count: " << ptr.use_count() << std::endl ; */
	/* { */
	/* 	std::shared_ptr<Test> ptr1 = ptr ; */
	/* 	std::cout << "Use count: " << ptr.use_count() << std::endl ; */
	/* 	{ */
	/* 		std::shared_ptr<Test> ptr2 = ptr ; */
	/* 		std::cout << "Use count: " << ptr.use_count() << std::endl ; */
	/* 		ptr.reset() ; */
	/* 	} */
	/* 	std::cout << "Use count: " << ptr.use_count() << std::endl ; */
	/* } */
	/* std::cout << "Use count: " << ptr.use_count() << std::endl ; */


	/*-----------------------------------------------------------------------------
	 * Vector of shared pointers of type Account class 
	 *-----------------------------------------------------------------------------*/
	std::cout << "\n============================================================" << std::endl ;
	std::shared_ptr<Account> acc1 = std::make_shared<Trust_Account>( "Larry", 10000, 3.1 ) ;
	std::shared_ptr<Account> acc2 = std::make_shared<Checking_Account>( "Moe", 5000 ) ;
	std::shared_ptr<Account> acc3 = std::make_shared<Savings_Account>( "Curly", 6000 ) ;

	std::vector<std::shared_ptr<Account>> accounts ;
	accounts.push_back( acc1 ) ;
	accounts.push_back( acc2 ) ;
	accounts.push_back( acc3 ) ;

	for ( auto const &acc : accounts ) {
		std::cout << *acc << std::endl ;
		std::cout << "Use count: " << acc.use_count() << std::endl ;
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

/* ----------------------------------------------------------------------------*/
/**
 * @Brief		Prints use count of shared pointer
 *
 * @Param p		Shared pointer of type Test
 */
/* ------------------------------------------------------------------------------------*/
void func( std::shared_ptr<Test> p ) {
	std::cout << "Use count: " << p.use_count() << std::endl ;
}
