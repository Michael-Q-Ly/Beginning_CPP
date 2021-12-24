/*
 * Section 8
 * Arithmetic Operators Example:
 * Convert Euros to US Dollars 
 */

#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
    double const USD_PER_EURO { 1.19 } ;

    cout << "Welcome to the EUR to USD converted\n" ;
    cout << "Enter the value in EUR: " ;

    double euros { 0.0 } ;
    double dollars { 0.0 } ;

    cin  >> euros ;
    dollars = euros * USD_PER_EURO ;

    cout << euros << " euros is equivalent to " << dollars << " US dollars\n" ;

    return 0 ;
}