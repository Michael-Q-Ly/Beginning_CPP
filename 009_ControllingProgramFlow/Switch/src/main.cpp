/*
 * Section 9
 * Switch Statement
 */

#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
    char letter_grade {} ;

    cout << "Enter the grade you expect on the exam: " ;
    cin  >> letter_grade ;

    switch ( letter_grade ) {
        case 'a':
        case 'A':
            cout << "You need a 90 or above, study hard!\n" ;
            break ;
        case 'b':
        case 'B':
            cout << "You need an 80-89 for a B, go study!\n" ;
            break ;
        case 'c':
        case 'C':
            cout << "You need a 70-79 for an average grade." ;
            break ;
        case 'd':
        case 'D':
            cout << "Hmm, you should strive for a better grade. All you need is a 60-69.\n" ;
            break ;
        case 'f':
        case 'F': {
            char confirm {} ;
            cout << "Are you sure (Y/N)?\n" ;
            cin  >> confirm ;

            if ( confirm == 'y' || confirm == 'Y' ) {
                cout << "Okay, I guess you didn't study...\n" ;
            }
            else if ( confirm == 'n' || confirm == 'N' ) {
                cout << "Good - go study!\n" ;
            }
            else {
                cout << "Illegal choice\n" ;
            }

            break ;
        }
        default:
            cout << "Sorry, not a valid grade.\n" ;
    }

    return 0 ;
}