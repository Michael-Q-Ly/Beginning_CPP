/*
 * Section 9
 * If Statement
 */

#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
    int num {} ;
    int const min { 10 } ;
    int const max { 100 } ;

    cout << "Enter a number between " << min << " and " << max << ": " ;
    cin  >> num ;

    if ( num >= min ) {
        cout << "\n================ If Statement 1 ================\n" ;
        cout << num << " is greater than " << min << endl ;

        int diff { num - min } ;
        cout << num << " is " << diff << " greater than " << min << endl ;
    }

    if ( num <= max ) {
        cout << "\n================ If Statement 2 ================\n" ;
        cout << num << " is less than or equal to " << max << endl ;

        int diff { max - num } ;
        cout << num << " is " << diff << " less than " << max << endl ;
    }

    if ( num >= min && num <= max ) {
        cout << "\n================ If Statement 3 ================\n" ;
        cout << num << " is in range\n" ;
        cout << "This means statements 1 and 2 must also display!!\n" ;
    }

    if ( num == min || num == max ) {
        cout << "\n================ If Statement 4 ================\n" ;
        cout << num << " is right on a boundary\n" ;
        cout << "This means all statements must display!\n" ;
    }

    cout << endl ;

    return 0 ;
}