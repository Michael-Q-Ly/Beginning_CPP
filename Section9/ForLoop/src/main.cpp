/*
 * Section 9
 * For Loops
 */

#include <iostream>
#include <vector>

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
    /* Count 1 to 10 */
    // for ( int i { 1 } ; i <= 10 ; i++ ) {
    //     cout << i << endl ;
    // }

    /* Count 1 to 10, but increment 2. What's the last number? */
    // for ( int i { 1 } ; i <= 10 ; i += 2 ) {
    //     cout << i << endl ;
    // }

    /* Count 10 to 1 and then blast off */
    // for ( int i { 10 } ; i > 0 ; i-- ) {
    //     cout << i << endl ;
    // }
    // cout << "Blast off!\n" ;

    /* Count 10 to 100 with multiples of 10 */
    // for ( int i { 10 } ; i <= 100 ; i += 10 ) {
    //     if ( !( i % 15 ) ) {
    //         cout << i << endl ;
    //     }
    // }

    /* Initialize and increment 2 variables in a for loop */
    // for ( int i { 1 }, j { 5 } ; i <= 5 ; i++, j++ ) {
    //     cout << i << " + " << j << " = " << ( i + j ) << endl ;
    // }

    /* Count 1 to 100 in rows of five numbers */
    // for ( int i { 1 } ; i <= 100 ; i++ ) {
    //     cout << i ;
    //     if ( ! ( i % 5) ) {
    //         cout << endl ;
    //     }
    //     else { 
    //         cout << " " ;
    //     }
    // }

    /* Count 1 to 100 in rows of 10 numbers, but with a conditional operator */
    // for ( int i { 1 } ; i <= 100 ; i++ ) {
    //     cout << i << ( !( i % 10 )  ? "\n" : " " ) ;
    // }
      
    /* Use a for loop to print vector elements */
    // std::vector <int> nums { 10, 20, 30, 40, 50 } ;
    // for ( unsigned i { 0 } ; i < nums.size(); i++ ) {
    //     cout << nums[ i ] << endl ;
    // }

    cout << endl ;
    return 0 ;
}