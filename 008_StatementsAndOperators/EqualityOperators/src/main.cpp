/*
 * Section 8
 * Equality Operators
 */

#include <iostream>

#define example1
#define example2
#define example3
#define example4

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
    bool equal_result { false } ;
    bool not_equal_result { false } ;

    cout << std::boolalpha ;                         // Will display true/false instead of 1/0 for booleans

#ifdef example1
    int num1 {}, num2 {} ;

    cout << "Enter two numbers separated by spaces: " ;
    cin  >> num1 >> num2 ;
    equal_result = ( num1 == num2 ) ;
    not_equal_result = ( num1 != num2 ) ;
    cout << "Comparison result (equals): " << equal_result << endl ;
    cout << "Comparison result (not equals): " << not_equal_result << endl ;
#endif  /* example1 */

#ifdef example2
    char char1 {}, char2 {} ;

    cout << "Enter two chars separated by spaces: " ;
    cin  >> char1 >> char2 ;
    equal_result = ( char1 == char2 ) ;
    not_equal_result = ( char1 != char2 ) ;
    cout << "Comparison result (equals): " << equal_result << endl ;
    cout << "Comparison result (not equals): " << not_equal_result << endl ;
#endif  /* example2 */

#ifdef example3
    // Be careful using this.. The way the computer interprets data will say
    // 12.0 is equal to 11.999999999999999999999999! Thus, you may have to use
    // something else if you are doing something with high precision.
    double double1 {}, double2 {} ;

    cout << "Enter two doubles separated by spaces: " ;
    cin  >> double1 >> double2 ;
    equal_result = ( double1 == double2 ) ;
    not_equal_result = ( double1 != double2 ) ;
    cout << "Comparison result (equals): " << equal_result << endl ;
    cout << "Comparison result (not equals): " << not_equal_result << endl ;
#endif  /* example3 */

#ifdef example4
    // What happens if we compare an int with a double?
    // The int will be promoted to a double, and we could also get
    // into trouble with precision like in example 3 if we are
    // not careful!
    int num3 {} ;
    double double3 {} ;

    cout << "Enter two doubles separated by spaces: " ;
    cin  >> num3 >> double3 ;
    equal_result = ( num3 == double3 ) ;
    not_equal_result = ( num3 != double3 ) ;
    cout << "Comparison result (equals): " << equal_result << endl ;
    cout << "Comparison result (not equals): " << not_equal_result << endl ;
#endif  /* example4 */


    return 0 ;
}