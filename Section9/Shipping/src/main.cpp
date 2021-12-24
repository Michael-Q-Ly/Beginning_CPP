/*
 * Section 9
 * Shipping
 * 
 * Shipping Cost Calculator:
 * 
 * Ask the user for package dimensions in inches
 * Length, width, height - these should be integers
 * 
 * All dimensions must be 10 inches or less or we cannot ship it
 * 
 * Base cost $2.50
 * If package volume is greater than 100 cubic inches, there is a 10% surcharge
 * If package volume is greater than 500 cubic inches, there is a 25% surcharge
 */

#include <iostream>
#include <iomanip>                                                                  // Set precision

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
    int length {}, width {}, height {} ;
    double base_cost { 2.50 } ;
    int const MAX_DIMENSION_LENGTH { 10 } ;                                         // Inches

    int const TIER1_THRESHOLD { 100 } ;                                             // Volume in cubic inches
    int const TIER2_THRESHOLD { 500 } ;                                             // Volume in cubic inches

    double const TIER1_SURCHARGE { 0.10 } ;                                         // 10% extra
    double const TIER2_SURCHARGE { 0.25 } ;                                         // 25% extra

    // All dimensions must be 10" or less
    int package_volume {} ;

    cout << "Welcome to the package cost calculator\n" ;
    cout << "Enter the length, width, and height, separated by spaces: " ;
    cin  >> length >> width >> height ;

    if ( length > MAX_DIMENSION_LENGTH || width > MAX_DIMENSION_LENGTH || height > MAX_DIMENSION_LENGTH ) {
        cout << "Sorry, package rejected - dimension exceeded" << endl ;
    }
    else {
        double package_cost {} ;
        package_volume = length * width * height ;
        package_cost += base_cost ;

        cout << "The volume of your package is " << package_volume << endl ;

        // Set priority on the surcharges
        if ( package_volume > TIER2_THRESHOLD ) {
            cout << "Applying Tier 2 surcharge of " << TIER2_SURCHARGE * 100 << "%\n" ;
            package_cost *= ( 1 + TIER2_SURCHARGE ) ;
        }
        else if ( package_volume > TIER1_THRESHOLD ) {
            cout << "Applying Tier 1 surcharge of " << TIER1_SURCHARGE * 100 << "%\n" ;
            package_cost *= ( 1 + TIER1_SURCHARGE ) ;
        }

        cout << std::fixed << std::setprecision( 2 ) ;                                  // Set to fixed 2-point precision
        cout << "Your package will cost $" << package_cost << " to ship\n" ;
    }

    cout << endl ;

    return 0 ;
}