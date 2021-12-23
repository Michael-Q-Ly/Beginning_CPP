/*
 * Section 7
 * Arrays
 */

#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
    // char vowels[] { 'a', 'e', 'i', 'o', 'u' } ;
    // cout << "\nThe first vowel is " << vowels[ 0 ] << endl ;
    // cout << "\nThe last vowel is "  << vowels[ 4 ] << endl ;

    // cin >> vowels[ 5 ] ;                                                     // Out of bounds ; segmentation fault ;
                                                                                // writing to illegal memory location

    // double hi_temps[] { 90.1, 89.8, 77.5, 81.6 } ;
    // cout << "\nThe first high temperature is " << hi_temps[ 0 ] << endl ;

    // hi_temps[ 0 ] = 100.7 ;                                                     // Set the first element in hi_temps to 100.7
    //                                                                             // We'll talk about assignment statement in an
    //                                                                             // upcoming section
    // cout << "\nThe first high temperature is now " << hi_temps[ 0 ] << endl ;
    
    // int test_scores[ 5 ] ;
    int test_scores[ 5 ] { 100, 90, 80 } ;

    // The following block prints garbage values if the array is uninitialized
    cout << "\nFirst score at index  0: " << test_scores[ 0 ] << endl ;
    cout << "\nSecond score at index 1: " << test_scores[ 1 ] << endl ;
    cout << "\nThird score at index  2: " << test_scores[ 2 ] << endl ;
    cout << "\nFourth score at index 3: " << test_scores[ 3 ] << endl ;
    cout << "\nFifth score at index  4: " << test_scores[ 4 ] << endl ;

    cout << "\nEnter 5 test scores: " ;
    cin  >> test_scores[ 0 ] ;
    cin  >> test_scores[ 1 ] ;
    cin  >> test_scores[ 2 ] ;
    cin  >> test_scores[ 3 ] ;
    cin  >> test_scores[ 4 ] ;

    cout << "\nThe updated array is:\n" ;
    cout << "First score at  0: " << test_scores[ 0 ] << endl ;
    cout << "Second score at 1: " << test_scores[ 1 ] << endl ;
    cout << "Third score at  2: " << test_scores[ 2 ] << endl ;
    cout << "Fourth score at 3: " << test_scores[ 3 ] << endl ;
    cout << "Fifth score at  4: " << test_scores[ 4 ] << endl ;

    cout << "\nNotice what the value of the array name is: " << test_scores << endl ;

    return 0 ;
}
