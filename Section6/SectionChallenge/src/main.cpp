/*
 * Section 6
 * Constants
 */

/*
 * Frank's Carpet Cleaning Service
 * Charges $25 per small room
 * Charges $35 per large  room
 * Sales tax rate is 6%
 * Estimates are valid for 30 days
 *
 * Prompt the user for the number of rooms they would like cleaned
 * and provide an estimate such as:
 *
 * 	Estimate for carpet cleaning service:
 * 	Number of small rooms: 3
 * 	Number of large rooms: 1
 * 	Price per small room: $25
 * 	Price per large room: $35
 * 	Cost: $110
 * 	Tax: $6.6
 * 	=======================================
 * 	Total Estimate: $116.6
 * 	This estimate is valid for 30 days
 *
 * Pseudocode:
 * Prompt the user to enter the number of small rooms
 * Prompt the user to enter the number of large rooms
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
	double const PRICE_PER_SMALL_ROOM { 25.00 } ;
	double const PRICE_PER_LARGE_ROOM { 35.00 } ;
	double const SALES_TAX { 0.06 } ;
	int const ESTIMATE_EXPIRY { 30 } ;		// Days

	cout << "Hello, welcome to Frank's Carpet Cleaning Service\n" << endl ;
	cout << "How many small rooms would you like cleaned? " ;
	
	int number_of_small_rooms { 0 } ;
	cin  >> number_of_small_rooms ;

	cout << "How many large rooms would you like cleaned? " ;
	
	int number_of_large_rooms { 0 } ;
	cin  >> number_of_large_rooms ;
	
	double total_small_price 	{ number_of_small_rooms * PRICE_PER_SMALL_ROOM } ;
	double total_large_price 	{ number_of_large_rooms * PRICE_PER_LARGE_ROOM } ;
	double tax 			{ ( total_small_price + total_large_price ) * SALES_TAX } ;

	cout << "\nEstimate for carpet cleaning service" << endl ;
	cout << "Number of small rooms: " 	<< number_of_small_rooms << endl ;
	cout << "Number of large rooms: " 	<< number_of_large_rooms << endl ;
	cout << "Price per small room: $" 	<< PRICE_PER_SMALL_ROOM << endl ;
	cout << "Price per large room: $" 	<< PRICE_PER_LARGE_ROOM << endl ;
	cout << "Cost: $" 			<< ( total_small_price + total_large_price ) << endl ;
	cout << "Tax: $" 			<< tax << endl ;
	cout << "================================================\n" ;
	cout << "Total Estimate: $" 		<< ( 1 + SALES_TAX ) * ( total_small_price + total_large_price ) << endl ;
	cout << "This estimate is valid for " 	<< ESTIMATE_EXPIRY << " days\n" << endl ;

	return 0 ;
}
