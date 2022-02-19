/*
 * Section 6
 * Constants
 */

/*
 * Frank's Carpet Cleaning Service
 * Charges $30 per room
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 *
 * Prompt the user for the number of rooms they would like cleaned
 * and provide an estimate such as:
 *
 * 	Estimate for carpet cleaning service:
 * 	Number of rooms: 2
 * 	Price per room: $30
 * 	Cost: $60
 * 	Tax: $3.6
 * 	=======================================
 * 	Total Estimate: $63.6
 * 	This estimate is valid for 30 days
 *
 * Pseudocode:
 * Prompt the user to enter the number of rooms
 * Display number of rooms
 * Display price per room
 *
 * Display cost: (number of rooms * price per room)
 * Display tax: number of rooms * price per room * tax rate
 * Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax rate)
 * Display estimate expiration time
 */

#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
	double const PRICE_PER_ROOM { 30.00 } ;
	double const SALES_TAX { 0.06 } ;
	int const ESTIMATE_EXPIRY { 30 } ;		// Days

	cout << "Hello, welcome to Frank's Carpet Cleaning Service\n" << endl ;
	cout << "How many rooms would you like cleaned? " ;
	
	int number_of_rooms { 0 } ;
	cin  >> number_of_rooms ;

	cout << "\nEstimate for carpet cleaning service" << endl ;
	cout << "Number of rooms: " << number_of_rooms << endl ;
	cout << "Price per room: $" << PRICE_PER_ROOM << endl ;
	cout << "Cost: $" << PRICE_PER_ROOM * number_of_rooms << endl ;
	cout << "Tax: $" << PRICE_PER_ROOM * number_of_rooms * SALES_TAX << endl ;
	cout << "================================================\n" ;
	cout << "Total Estimate: $" << ( PRICE_PER_ROOM * number_of_rooms ) + ( PRICE_PER_ROOM * number_of_rooms * SALES_TAX ) << endl ;
	cout << "This estimate is valid for " << ESTIMATE_EXPIRY << " days\n" << endl ;

	return 0 ;
}
