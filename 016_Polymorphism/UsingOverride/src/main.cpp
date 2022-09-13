/**
 * @file main.cpp
 * @brief Overriding
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-09-12
 */
#include <iostream>

class Base {
	public:
		virtual void say_hello( void ) const {
			std::cout << "Hello - I'm a Base class object" << std::endl ;
		}
		virtual ~Base( void ) { }
} ;

class Derived : public Base {
	public:
		/* virtual void say_hello( void ) {	// Notice no const */
		virtual void say_hello( void ) const override{
			std::cout << "Hello - I'm a Derived class object" << std::endl ;
		}
		virtual ~Derived( void ) { }
} ;

int main( void ) {
	Base *p1 = new Base() ;				// Base::say_hello()
	p1->say_hello() ;

	Derived *p2 = new Derived() ;			// Derived::say_hello() ;
	p2->say_hello() ;

	Base *p3 = new Derived() ;			// Base::say_hello
	p3->say_hello() ;
}
