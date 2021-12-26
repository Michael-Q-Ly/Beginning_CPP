/*
 * Section 9
 * Range-based for Loops
 */

#include <iostream>
#include <vector>
#include <iomanip>

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
    /* Using the auto keyword */
    // int scores[] { 10, 20, 30, } ;
    // for ( auto score : scores ) {                            // auto keyword will have the compiler figure out what type is needed
    //     cout << score << endl ;
    // }


    /* Using auto and vector range */ 
    // std::vector <double> temperatures { 87.9, 77.9, 80.0, 72.5 } ;
    // double average_temp {} ;
    // double total {} ;

    // for ( auto temp : temperatures ) {
    //     total += temp ;
    // }
    
    // if ( temperatures.size() ) {
    //     average_temp = total / temperatures.size() ;
    //     cout << std::fixed << std::setprecision( 1 ) ;
    //     cout << "The average temperature is " << average_temp << endl ;
    // }


    /* Literal range defined inside the for loop declaration */
    // for ( auto val : { 1, 2, 3, 4, 5 } ) {
    //     cout << val << endl ;
    // }

    
    /* Strings inside for loop */
    for ( auto c : "This is a test" ) {
        if ( c == ' ' ) {
            cout << '\t' ;
        }
        else {
            cout << c ;
        }
    }

    cout << endl ;
    return 0 ;
}