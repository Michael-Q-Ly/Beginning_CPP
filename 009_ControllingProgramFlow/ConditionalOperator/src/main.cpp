/*
 * Section 9
 * Conditional (ternary) Operator
 */

#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
    // int num {} ;

    // cout << "Enter an integer: " ;
    // cin  >> num ;

    // cout << "\n============================\n" ;
    // if ( ! ( num % 2 ) ) {
    //     cout << num << " is even\n" ;
    // }
    // else {
    //     cout << num << " is odd\n" ;
    // }

    // cout << "\n============================\n" ;
    // cout << num << " is " << ( ! ( num % 2 ) ? "even" : "odd" ) ;
    
    int num1 {}, num2 {} ;

    cout << "Enter two numbers separated by a space: " ;
    cin  >> num1 >> num2 ;

    if ( num1 != num2 ) {
        cout << ( ( num1 > num2 ) ? num1 : num2 ) << " is the larger number\n" ;
        cout << ( ( num1 < num2 ) ? num1 : num2 ) << " is the smallerr number\n" ;
    }
    else {
        cout << "Both numbers are equal\n" ;
    }

    cout << endl ;
    return 0 ;
}