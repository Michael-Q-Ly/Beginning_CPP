/*
 * Section 7
 * Vectors
 */

#include <iostream>
#include <vector>

using std::cout ;
using std::cin ;
using std::endl ;
using std::vector ;

int main() {
    // vector <char> vowels ;                                              // Empty
    // vector <char> vowels( 5 ) ;                                         // 5 initialized to zero
    vector <char> vowels { 'a', 'e', 'i', 'o', 'u' } ;

    cout << vowels[ 0 ] << endl ;
    cout << vowels[ 4 ] << endl ;

    // vector <int> test_scores( 3 ) ;                                     // 3 elements all initialized to zero
    // vector <int> test_scores( 3, 100 ) ;                                // 3 elements all initialized to 100
    vector <int> test_scores { 100, 98, 99 } ;

    cout << "\nTest scores using array snytax:\n" ;
    cout << test_scores[ 0 ] << endl ;
    cout << test_scores[ 1 ] << endl ;
    cout << test_scores[ 2 ] << endl ;

    cout << "\nTest scores using vector snytax:\n" ;
    cout << test_scores.at( 0 ) << endl ;
    cout << test_scores.at( 1 ) << endl ;
    cout << test_scores.at( 2 ) << endl ;
    cout << "\nThere are " << test_scores.size() << " scores in the vector\n" ;

    cout << "Enter 3 test scores: " ;
    cin  >> test_scores.at( 0 ) ;
    cin  >> test_scores.at( 1 ) ;
    cin  >> test_scores.at( 2 ) ;

    cout << "\nUpdated test scores:\n" ;
    cout << test_scores.at( 0 ) << endl ;
    cout << test_scores.at( 1 ) << endl ;
    cout << test_scores.at( 2 ) << endl ;

    cout << "\nEnter a test score to add to the vector: " ;
    int score_to_add { 0 } ;
    cin  >> score_to_add ;
    
    test_scores.push_back( score_to_add ) ;

    cout << "\nEnter one more test score to add to the vector: " ;
    cin  >> score_to_add ;

    test_scores.push_back( score_to_add ) ;

    cout << "\nTest scores are now:\n" ;
    cout << test_scores.at( 0 ) << endl ;
    cout << test_scores.at( 1 ) << endl ;
    cout << test_scores.at( 2 ) << endl ;
    cout << test_scores.at( 3 ) << endl ;
    cout << test_scores.at( 4 ) << endl ;
    cout << "\nThere are now " << test_scores.size() << " scores in the vector\n" ;

    // cout << "\nThis should cause an exception!!" << test_scores.at( 10 ) << endl ;

    return 0 ;
}
