/**
 * @file main.cpp
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @brief 
 * @version 0.1
 * @date 2022-06-29
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "MyString.hpp"

int main( void ) {
        std::cout << std::boolalpha << std::endl ;

        MyString a {"michael"} ;
        std::cout << "The first string is " ;
        a.display() ;

        std::cout << "Enter a second string: " ;
        MyString b ;
        std::cin >> b ;
        std::cout << "The second string is:" << std::endl ;
        b.display() ;

        std::cout << "( a == b ): " << ( a == b ) << std::endl ;
        std::cout << "( a != b ): " << ( a != b ) << std::endl ;

        std::cout << "a < b: " << ( a < b ) << std::endl ;

        std::cout << "a > b: " << ( a > b ) << std::endl ;

        a = a + b ;
        std::cout << "a + b = " ;
        a.display() ;

        a += " concat test" ;
        a.display() ;

        std::cout << "How many times would you like the first string repeated?" << std::endl ;
        int num_repeats ;
        std::cin  >> num_repeats ;
        a =  a * num_repeats ;
        a.display() ;

        std::cout << "How many times would you like the second string repeated?" << std::endl ;
        std::cin  >> num_repeats ;
        std::cout << "Repeat self operator:" << std::endl ;
        b *= num_repeats ;
        b.display() ;

        std::cout<< "Pre-increment overload:" << std::endl ;
        ++b ;
        b.display() ;

        std::cout<< "Post-increment overload:" << std::endl ;
        a++ ;
        a.display() ;
#ifdef later
#endif /* later */

        std::cout << std::endl ;
        return 0 ;
}
