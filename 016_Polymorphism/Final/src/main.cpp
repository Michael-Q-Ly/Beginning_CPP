/**
 * @file main.cpp
 * @brief Final keyword
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-09-13
 */
#include <iostream>

class A {
	public:
		virtual void do_something( void ) { }
		virtual ~A( void ) { }
} ;

class B : public A {
	public:
		virtual void do_something( void ) final { }
		virtual ~B( void ) { }
} ;

/* class C : public B { */
/* 	virtual void do_something( void ) { } 		// COMPILER ERROR - Can't override */
		/* virtual ~C( void ) { } */
/* } ; */

int main( int argc, char *argv[] ) {

	A a ;
	B b ;
	/* C c ; */

	( void )a ;
	( void )b ;
	/* ( void )c ; */

	std::cout << std::endl ;
	return 0 ;
}
