/**
 * @file main.cpp
 * @Synopsis  The problem with statically binding
 * @author Michael Ly (Michael-Q-Ly@github.com)
 * @version 0.0.0
 * @date 2022-09-06
 */
#include <iostream>
#include <memory>

class Base{
        public:
                void say_hello( void ) {
                        std::cout << "Hello - I'm a Base class object" << std::endl ;
                }
} ;

class Derived : public Base {
        public:
                void say_hello( void ) const {
                        std::cout << "Hello - I'm a derived class object" << std::endl ;
                }
} ;

void greetings( Base &obj ) {
        std::cout << "Greetings: " ;
        obj.say_hello() ;
}

int main( void ) {
        Base b ;
        b.say_hello() ;

        Derived d ;
        d.say_hello() ;

        greetings( b  ) ;
        greetings( d  ) ;                                               // Base::say_hello()

        Base *ptr = new Derived() ;                                     // This is a Base
        ptr->say_hello() ;                                              // Base::say_hello()

        // Create a smart pointer
        std::unique_ptr<Base> ptr1 = std::make_unique<Derived>() ;      // This is a Base
        ptr1->say_hello() ;                                             // Base::say_hello()

        delete ptr ;

        std::cout << std::endl ;
        return 0 ;
}
