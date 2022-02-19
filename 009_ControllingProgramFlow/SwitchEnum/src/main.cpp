/*
 * Section 9
 * Switch Statement Enumeration
 */

#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
    typedef enum {
        left ,
        right ,
        up ,
        down
    } Direction_t ;

    Direction_t heading { left } ;

    switch ( heading ) {
        case left:
            cout << "Going left\n" ;
            break ;
        case right:
            cout << "Going right\n" ;
            break ;
        // case up:                                 // The compiler will catch you with a warning if you do not put all the enumerated options unless you have a default
        //     cout << "Going up\n" ;
        //     break ;
        // case down:
        //     cout << "Going down\n" ;
        //     break ;
        default:
            cout << "Illegal option\n" ;
    }

    cout << endl ;
    return 0 ;
}