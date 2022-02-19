/*
 * Section 8
 * Logical Operators
 */

#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
    // int num {} ;
    // int const lower { 10 } ;
    // int const upper { 20 } ;

    cout << std::boolalpha ;

    // Determine if an entered integer is between two other integers
    // Assume lower < upper
    // cout << "Enter an integer - the bounds are " << lower << " and " << upper << endl ;
    // cin  >> num ;

    // bool within_bounds { false } ;

    // within_bounds = ( num > lower && num < upper ) ;
    // cout << num << " is between " << lower << " and " << upper << ": " << within_bounds << endl ;


    // Determine if an entered integer is outside two other integers
    // Assume lower < upper
    // cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": " ;
    // cin  >> num ;

    // bool outside_bounds { false } ;

    // outside_bounds = ( num < lower || num > upper ) ;
    // cout << num << " is outside " << lower << " and " << upper << ": " << outside_bounds << endl ;
    

    // Determine if an entered integer is exactly on the boundary
    // Assume lower < upper
    // cout << "Enter an integer - the bounds are " << lower << " and " << upper << ": " ;
    // cin  >> num ;

    // bool on_bounds { false } ;

    // on_bounds = ( num == lower || num == upper ) ;
    // cout << num << " is on the boundary: " << on_bounds << endl ;


    // Determine if you need to wear a coat based on temperature and wind speed
    bool wear_coat { false } ;
    double temperature {} ;
    int wind_speed {} ;

    int const WIND_SPEED_FOR_COAT { 25 } ;                          // Wind over this requires a coat
    double const TEMPERATURE_FOR_COAT { 45 } ;                      // Temperature below this requires a coat

    cout << "\nEnter the current temperature in (F): " ;
    cin  >> temperature ;
    cout << "\nEnter the current wind speed in (mph): " ;
    cin  >> wind_speed ;

    // Require a coat if either wind is too high OR temperature is too low
    wear_coat = ( wind_speed > WIND_SPEED_FOR_COAT || temperature < TEMPERATURE_FOR_COAT ) ;
    cout << "\nDo you need to wear a coat using OR? " << wear_coat << endl ;

    // Require a coat if both wind is too high AND temperature is too low
    wear_coat = ( wind_speed > WIND_SPEED_FOR_COAT && temperature < TEMPERATURE_FOR_COAT ) ;
    cout << "\nDo you need to wear a coat using AND? " << wear_coat << endl ;
    return 0 ;
}