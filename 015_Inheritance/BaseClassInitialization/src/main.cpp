/**
 * @file main.cpp
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @brief Demonstrate how to initialize base class from derived class
 * @version 0.1
 * @date 2022-08-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

/************************************************************
 * @class       Base
 * 
 * @brief       Parent class
 * 
 */
class Base {
        private:
                int value ;
        public:
                Base( void ) ;
                Base( int x ) ;
                ~Base( void ) ;
} ;

/************************************************************
 * @class       Derived

 * @brief       Child class of Base class
 * 
 */
class Derived : public Base {
        private:
                int doubled_value ;
        public:
                Derived( void ) ;
                Derived( int x ) ;
                ~Derived( void ) ;
} ;

int main( void ) {
        // Derived d ;
        Derived d {1000} ;

        std::cout << std::endl ;
        return 0 ;
}

/************************************************************
 * @brief       Construct a new Base:: Base object
 * 
 */
Base::Base( void ) {
        std::cout << "Base no-args constructor" << std::endl ;
}

/************************************************************
 * @brief       Construct a new Base:: Base object
 * 
 * @param x     Value to initialize value member to
 */
Base::Base( int x )
        : value{x} {
                std::cout << "Base (int) overloaded constructor" << std::endl ;
}

/************************************************************
 * @brief       Destroy the Base:: Base object
 * 
 */
Base::~Base( void ) {
        std::cout << "Base destructor" << std::endl ;
}

/************************************************************
 * @brief       Construct a new Derived:: Derived object
 * 
 */
Derived::Derived( void )
        : Base{}, doubled_value{0} {
                std::cout << "Derived no-args constructor" << std::endl ;
}

/************************************************************
 * @brief       Construct a new Derived:: Derived object
 * 
 * @param x     Value passed to the Base class for value and value to be doubled in Derived class
 */
Derived::Derived( int x )
        : Base{x}, doubled_value{x * 2} {
                std::cout << "Derived (int) constructor" << std::endl ;
}

/************************************************************
 * @brief       Destroy the Derived:: Derived object
 * 
 */
Derived::~Derived( void ) {
        std::cout << "Derived destructor" << std::endl ;
}
