/*
 * Section 8
 * Increment and Decrement Operators
 * 
 * Increment Operator ++
 * Decrement Operator --
 * 
 * Increments or decrements its operand by 1
 * Can be used with integers, floating point types, and pointers
 * 
 * Prefix ++num
 * Postfix num++
 * 
 * Don't overuse this operator!
 * ALERT! Never use it twice or the same variable in the same statement!
 */

#include <iostream>

/*
 * Uncomment the define for whichever example you want to view
 * or if it is not commented out, comment out the ones you wish
 * not to view
 */
#define example1
// #define example2
// #define example3
// #define example4
// #define example5

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
    int counter { 10 } ;
    int result { 0 } ;

#if defined( example1 )
    /* Example 1: Simple Increment */
    cout << "Counter: " << counter << endl ;

    counter = counter + 1 ;
    cout << "Counter: " << counter << endl ;

    counter++ ;
    cout << "Counter: " << counter << endl ;

    ++counter ;
    cout << "Counter: " << counter << endl ;
    ( void )result ;
#endif /* example1 */

#if defined( example2 )
    /* Example 2: Preincrement */
    counter = 10 ;
    result = 0 ;

    cout << "Counter: " << counter << endl ;

    result = ++counter ;                                // Note the pre increment
    cout << "Counter: " << counter << endl ;
    cout << "Result: " << result << endl ;
#endif /* example2 */

#if defined( example3 )
    /* Example 3: Post-increment */
    counter = 10 ;
    result = 0 ;

    cout << "Counter: " << counter << endl ;

    result = counter++ ;                                // Note the post increment
    cout << "Counter: " << counter << endl ;
    cout << "Result: " << result << endl ;
#endif /* example3 */

#if defined( example4 )
    /* Example 4 */
    counter = 10 ;
    result = 0 ;

    cout << "Counter: " << counter << endl ;

    result = ++counter + 10 ;                           // Note the pre increment
    cout << "Counter: " << counter << endl ;
    cout << "Result: " << result << endl ;
#endif /* example4 */

#if defined( example5 )
    /* Example 5 */
    counter = 10 ;
    result = 0 ;

    cout << "Counter: " << counter << endl ;

    result = counter++ + 10 ;                           // Note the pre increment
    cout << "Counter: " << counter << endl ;
    cout << "Result: " << result << endl ;
#endif /* example5 */

    return 0 ;
}