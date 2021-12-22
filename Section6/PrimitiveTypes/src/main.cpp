/*
 * This program will calculate the area of a room in square feet
 */

#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
	/***************************************
	 * Character type
	 ***************************************/
//	char middle_initial { 'J' } ;
//	cout << "My middle initial is " << middle_initial << endl ;

	/***************************************
	 * Integer types
	 ***************************************/
	unsigned short int exam_score { 55 } ;				// Same as unsigned short exam_score { 55 } ;
	cout << "My score was " << exam_score << endl ;

	int countries_represented { 65 } ;
	cout << "There were " << countries_represented << " countries represented in the meeting" << endl ;

	long people_in_florida { 20610000 } ;
	cout << "There are about " << people_in_florida << " people in Florida" << endl ;

//	long people_on_earth = 7'600'000'000 ; gives an overflow, but the initialization list
//	will let us know there is a problem!
//	long people_on_earth { 7'600'000'000 } ;			// Will throw an error unless we use a long long
	long long people_on_earth { 7'600'000'000 } ;
	cout << "There are about " << people_on_earth << " people on earth" << endl ;

	long long distance_to_alpha_centauri { 9'461'000'000'000 } ;
	cout << "The distance to Alpha Centauri is " << distance_to_alpha_centauri << " kilometers" << endl ;

	/***************************************
	 * Floating point types
	 ***************************************/
	float car_payment { 401.23 } ;
	cout << "My car payment is $" << car_payment << endl ;

	double pi { 3.14159 } ;
	cout << "Pi is " << pi << endl ;

	long double large_amount { 2.7e120 } ;
	cout << large_amount << " is a very big number" << endl ;
	
	/***************************************
	 * Boolean types
	 ***************************************/
	bool game_over { false } ;
	cout << "The value of gameOver is " << game_over << endl ;

	/***************************************
	 * Overflow example
	 ***************************************/
	short value1 { 30'000 } ;
	short value2 { 1'000 } ;
	short product { value1 * value2 } ;

	cout << "The product of " << value1 << " and " << value2 << " is " << product << endl ;

	return 0 ;
}
