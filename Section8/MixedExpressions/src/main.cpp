/*
 * Section 8
 * Mixed Type Expressions
 * 
 * Ask the user to enter 3 integers
 * Calculate the sum of integers, and then
 * calculate the average of the 3 integers.
 * 
 * Display the 3 integers entered,
 * the sum of the 3 integers, and
 * the average of the 3 integers
 */

#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
    int total {} ;
    int num1 {}, num2 {}, num3 {} ;
    int const COUNT { 3 } ;

    cout << "Enter " << COUNT << " numbers separated by spaces\n" ;
    cin  >> num1 >> num2 >> num3 ;

    total = num1 + num2 + num3 ;
    
    double avg { 0.0 } ;
    avg = static_cast<double>( total ) / COUNT ;
    // avg = (double)( total ) / COUNT ;                            // Old way from C ; static_cast<> checks if you can cast to new type

    cout << "The " << COUNT << " numbers were "
         << num1 << ", " << num2 << ", " << num3 << endl ;
    cout << "The sum of numbers is " << total << endl ;
    cout << "The average of all the numbers is " << avg << endl ;

    return 0 ;
}