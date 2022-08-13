/**
 * @file main.cpp
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @brief Demonstrate protected members and class access
 * @version 0.1
 * @date 2022-08-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

/************************************************************
 * @class               Base
 * 
 * @brief               Parent class to be inherited
 * 
 * @note                Friends of Base have access to all
 * 
 */
class Base {
        public:
                int a {0} ;
                void display( void ) ;
        protected:
                int b {0} ;
        private:
                int c {0} ;
} ;

/************************************************************
 * @class               Derived
 * 
 * @brief               Child class of Base class
 * 
 */
class Derived: public Base {
        // Note friends of Derived have access to only what Derived has access to

        // a will be public
        // b will be protected
        // c will not be accessible

        public:
                void access_base_members( void ) ;
} ;

int main( void ) {
        std::cout << "==== Base member access from base objects ====" << std::endl ;
        Base base ;
        base.a = 100 ;  // OK
        // base.b = 200 ;  // Compiler error
        // base.c = 300 ;  // Compiler error

        std::cout << "==== Base member access from derived objects ====" << std::endl ;
        Derived d ;
        d.a = 100 ;     // OK
        // d.b = 200 ;     // Error
        // d.c = 300 ;     // Error

        std::cout << std::endl ;
        return 0 ;
}

/************************************************************
 * @fn                  display
 * 
 * @brief               Displays the public, protected, and private variables in the Base class
 * 
 * @return              None
 * 
 * @note                Member method has a ccess to all
 * 
 */
void Base::display( void ) {
        std::cout << a << ", " << b << " , " << c << std::endl ;
}

/************************************************************
 * @fn                  access_base_members
 * 
 * @brief               Assigns new values to parent class members in public and protected scope
 * 
 * @return              None
 * 
 * @note                None
 * 
 */
void Derived::access_base_members( void ) {
        a = 100 ;       // OK
        b = 200 ;       // OK
        // c = 300 ;       // Not accessible
}