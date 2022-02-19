/*
 * Section 8
 * Relational Operators
 */

#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
    int num1 {}, num2 {} ;

    cout << std::boolalpha ;
    // cout << "Enter 2 numbers separated by a space: " ;
    // cin  >> num1 >> num2 ;

    // cout << num1 << " > " << num2 << ": " << ( num1 > num2 ) << endl ;
    // cout << num1 << " >= " << num2 << ": " << ( num1 >= num2 ) << endl ;
    // cout << num1 << " < " << num2 << ": " << ( num1 < num2 ) << endl ;
    // cout << num1 << " <= " << num2 << ": " << ( num1 <= num2 ) << endl ;

    int const lower { 10 } ;
    int const upper { 20 } ;

    cout << "\nEnter an integer greater than " << lower << ": " ;
    cin  >> num1 ;
    cout << num1 << " > " << lower << " is " << ( num1 > lower ) << endl ;
    
    cout << "\nEnter an integer less than or equal to " << upper << ": " ;
    cin  >> num1 ;
    cout << num1 << " <= " << upper << " is " << ( num1 <= upper ) << endl ;



    return 0 ;
}