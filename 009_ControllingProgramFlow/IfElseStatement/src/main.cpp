/*
 * Section 9
 * If-else Statement
 */

#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
    int num {} ;
    int const target { 10 } ;

    cout << "Enter a number, and I will compare it to " << target << ": " ;
    cin  >> num ;

    if ( num >= target ) {
        cout << "\n================================\n" ;
        cout << num << " is greater than or equal to " << target << endl ;
        int diff { num - target } ;
        cout << num << " is " << diff << " greater than " << target << endl ;
    }
    else {
        cout << "\n================================\n" ;
        cout << num << " is less than " << target << endl ;
        int diff { target - num } ;
        cout << num << " is " << diff << " less than " << target << endl ;
    }

    cout << endl ;

    return 0 ;
}