/**
 * @file main.cpp
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @brief Demonstrate copy/move constructors and operator = with derived classes
 * @version 0.1
 * @date 2022-08-13
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

class Base {
        private:
                int value ;
        public:
                Base( void ) ;                                          // No-args constructor
                Base( int x ) ;                                         // Overloaded int constructor
                Base( Base const &other ) ;                             // Copy constructor
                ~Base( void ) ;                                         // Destructor
                Base &operator=( Base const &rhs ) ;                    // Overloaded = operator
} ;

class Derived : public Base {
        private:
                int doubled_value ;
        public:
                Derived( void ) ;                                       // No-args constructor
                Derived( int x ) ;                                      // Overloaded int constructor
                Derived( Derived const &other ) ;                       // Copy constructor
                ~Derived( void ) ;                                      // Destructor
                Derived &operator=( Derived const &rhs ) ;              // Operator = overloader
} ;

int main( void ) {
        // Base b {100} ;                                               // Overloaded constructor
        // Base b1 {b} ;                                                // Copy constructor
        // b = b1 ;                                                     // Copy assignment

        Derived d {100} ;                                               // Overloaded constructor
        Derived d1 {d} ;                                                // Copy constructor
        d = d1 ;                                                        // Copy assignment

        std::cout << std::endl ;
        return 0 ;
}

/************************************************************
 * @brief               Construct a new Base:: Base object
 * 
 */
Base::Base( void )
        : value{0} {
                std::cout << "Base no-args constructor" << std::endl ;
}

/************************************************************
 * @brief               Construct a new Base:: Base object
 * 
 * @param x 
 */
Base::Base( int x )
        : value{x} {
                std::cout << "Base (int) overloaded constructor" << std::endl ;
}

/************************************************************
 * @brief               Construct a new Base:: Base object
 * 
 * @param other 
 */
Base::Base( Base const &other )
        : value{other.value} {
                std::cout << "Base copy constructor" << std::endl ;
}

/************************************************************
 * @brief 
 * 
 * @param rhs 
 * @return Base& 
 */
Base &Base::operator=( Base const &rhs ) {
        std::cout << "Base operator=" << std::endl ;
        if ( this == &rhs ) {
                return *this ;
        }
        value = rhs.value ;
        return *this ;
}

/************************************************************
 * @brief               Destroy the Base:: Base object
 * 
 */
Base::~Base( void ) {
        std::cout << "Base destructor" << std::endl ;
}

/************************************************************
 * @brief               Construct a new Derived:: Derived object
 * 
 */
Derived::Derived( void )
        : Base{} {
                std::cout << "Derived no-args constructor" << std::endl ;
}

/************************************************************
 * @brief               Construct a new Derived:: Derived object with int parameter
 * 
 * @param x             Value to be doubled
 */
Derived::Derived( int x )
        : Base{x}, doubled_value{x * 2} {
                std::cout << "int Derived constructor" << std::endl ;
}

/************************************************************
 * @brief               Construct a new Derived:: Derived copy constructor
 * 
 * @param other         Derived object to pass to parent class' copy constructor
 */
Derived::Derived( Derived const &other )
        : Base( other ), doubled_value{other.doubled_value} {
                std::cout << "Derived copy constructor" << std::endl ;
}

/************************************************************
 * @brief               Copy assignment
 * 
 * @param rhs           Derived object to be assigned
 * 
 * @return Derived& 
 */
Derived &Derived::operator=( Derived const &rhs ) {
        std::cout << "Derived operator=" << std::endl ;
        if ( this == &rhs ) {
                return *this ;
        }
        Base::operator=( rhs ) ;                                        // Pay attention to what is done here!
        doubled_value = rhs.doubled_value ;
        return *this ;
}

/************************************************************
 * @brief               Destroy the Derived:: Derived object
 * 
 */
Derived::~Derived( void ) {
        std::cout << "Derived destructor" << std::endl ;
}
