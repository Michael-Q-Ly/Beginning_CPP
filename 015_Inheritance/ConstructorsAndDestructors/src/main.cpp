/**
 * @file main.cpp
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @brief Demonstrate constructors and destructors when using inheritance
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
 * 
 * @brief       Child class of Base class
 * 
 */
class Derived : public Base {
        using Base::Base ;      // Base::Base(int) will be called if we do this
        private:
                int doubled_value ;
        public:
                Derived( void ) ;
                Derived( int x ) ;
                ~Derived( void ) ;
} ;

int main( void ) {
        // Base b ;
        // Base b{100} ;

        // Derived d ;
        Derived d{1000} ;

        std::cout << std::endl ;
        return 0 ;
}

/************************************************************
 * @brief       Construct a new Base:: Base object
 * 
 */
Base::Base( void )
        : value{0} {
                std::cout << "Base no-args constructor" << std::endl ;
}

/************************************************************
 * @brief       Construct a new Base:: Base object
 * 
 * @param x     Value to initialized class member value
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
        : doubled_value{0} {
                std::cout << "Derived no-args constructor" << std::endl ;
}

/************************************************************
 * @brief       Construct a new Derived:: Derived object
 * 
 * @param x     Value to be doubled
 * 
 */
Derived::Derived( int x )
        : doubled_value{x * 2} {
                std::cout << "Derived (int) overloaded constructor" << std::endl ;
}

/************************************************************
 * @brief       Destroy the Derived:: Derived object
 * 
 */
Derived::~Derived( void ) {
        std::cout << "Derived destructor" << std::endl ;
}