/*
 * Section 8
 * Assignment Operator
 */

#include <iostream>

int main() {
    int num1 { 10 } ;
    int num2 { 20 } ;

    // num1 = 100 ;                                     // Assigning a literal
    // num1 = num2 ;                                    // Assigning a variable
    // num1 = "Frank" ;                                 // Gives a type error: invalid conversion ; compiler tried to convert to int, but could not
    // 100 = num1 ;                                     // Illegal: 100 does not have an l-value or memory location ; it is a literal
    num1 = num2 = 1000 ;                                // Chaining the above 2 ; Read right to left: num2 = 1000 then num1 = num2

    std::cout << "num1 is " << num1 << std::endl ;
    std::cout << "num2 is " << num2 << std::endl ;
}