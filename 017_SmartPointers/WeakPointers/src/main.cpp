/**
 * @file main.cpp
 * @Brief Weak Pointers
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-09-25
 */
#include <iostream>
#include <memory>

class B ;	// Forward Declaration

class A {
		std::shared_ptr<B> b_ptr ;
	public:
		void set_B( std::shared_ptr<B> &b ) ;
		A( void ) ;
		~A( void ) ;
} ;

class B {
		/* std::shared_ptr<A> a_ptr ;	// Make weak to break the strong circular reference */
		std::weak_ptr<A> a_ptr ;
	public:
		void set_A( std::shared_ptr<A> &a ) ;
		B( void ) ;
		~B( void ) ;
} ;

/*-----------------------------------------------------------------------------
 * MAIN 
 *-----------------------------------------------------------------------------*/
int main( void ) {
	std::shared_ptr<A> a = std::make_shared<A>() ;
	std::shared_ptr<B> b = std::make_shared<B>() ;
	a->set_B( b ) ;
	b->set_A( a ) ;

	std::cout << std::endl ;
	return 0 ;
}

/*-----------------------------------------------------------------------------
 * Functions 
 *-----------------------------------------------------------------------------*/
void A::set_B( std::shared_ptr<B> &b ) {
	b_ptr = b ;
}

A::A( void ) {
	std::cout << "A Constructor" << std::endl ;
}

A::~A( void ) {
	std::cout << "A Destructor" << std::endl ;
}

void B::set_A( std::shared_ptr<A> &a ) {
	a_ptr = a ;
}

B::B( void ) {
	std::cout << "B Constructor" << std::endl ;
}

B::~B( void ) {
	std::cout << "B Destructor" << std::endl ;
}
