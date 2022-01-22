// Section 9
// Do While Loop
// Simple Menu Example
#include <iostream>

using namespace std;

int main() {
    char selection {} ;
    do {
        cout << "\n------------------------\n" ;
        cout << "1. Do this.\n" ;
        cout << "2. Do that.\n" ;
        cout << "3. Do something else.\n" ;
        cout << "Q. Quit.\n" ;
        cout << "Enter your selection: " ;
        cin  >> selection ;
        cout << endl ;

        if ( selection == '1' ) {
            cout << "You chose 1 - doing this" << endl ;
        }
        else if ( selection == '2' ) {
            cout << "You chose 2 - doing that" << endl ;
        }
        else if ( selection == '3' ) {
            cout << "You chose 3 - doing something else" << endl ;
        }
        else if ( selection == 'q' || selection == 'Q' ) {
            cout << "Goodbye..." << endl ;
        }
        else {
            cout << "Unknown option -- try again..." << endl ;
        }


    } while ( selection != 'q' && selection != 'Q' ) ;
    
    cout  << endl;
    return 0;
}

