/*
 * Section 8
 * Section Challenge
 * 
 * Please read the README.md file in this directory
 * for instructions
 * 
 * Pseudocode:
 * Ask the user to enter the amount in cents
 * Get the amount of dollars first, then quarters, dimes, nickels, and pennies
 * Between each, we update the amount of money we need by getting
 * the remainder left
 * 
 * If we program this without the modulo operator, then we will
 * have to update the balance by subtracting the product of currency type
 * and its conversion factor.
 * Example: 305 cents gives 3 dollars and a nickel. We update the balance by
 * doing the following calculation of
 * 305 - ( 3 * dollar_conversion ) = 305 - ( 3 * 100 ) = 5
 */

#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
    int const DOLLARS_TO_CENTS  { 100 } ;
    int const QUARTERS_TO_CENTS { 25 } ;
    int const DIMES_TO_CENTS    { 10 } ;
    int const NICKELS_TO_CENTS  { 5 } ;
    int const PENNIES_TO_CENTS  { 1 } ;
    int cents ;
    int dollars {}, quarters {}, dimes {}, nickels {}, pennies {} ;
    int remainder {} ;

    cout << "Please enter an amount in cents: " ;
    cin  >> cents ;

    dollars     = cents / DOLLARS_TO_CENTS ;
    remainder   = cents % DOLLARS_TO_CENTS ;

    quarters    = remainder / QUARTERS_TO_CENTS ;
    remainder   %= QUARTERS_TO_CENTS ;

    dimes       = remainder / DIMES_TO_CENTS ;
    remainder   %= DIMES_TO_CENTS ;

    nickels     = remainder / NICKELS_TO_CENTS ;
    remainder   %= NICKELS_TO_CENTS ;

    pennies     = remainder / PENNIES_TO_CENTS ;

    cout << "\nYou can provide this change as follows:\n" ;
    cout << "dollars    : " << dollars  << endl ;
    cout << "quarters   : " << quarters << endl ;
    cout << "dimes      : " << dimes    << endl ;
    cout << "nickels    : " << nickels  << endl ;
    cout << "pennies    : " << pennies  << endl ;

    return 0 ;
}