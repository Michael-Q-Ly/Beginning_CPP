#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;

int main() {
//	cout << "Hello World!" << endl ;

//	cout << "Hello" ;
//	cout << "World" << endl ;

//	cout << "Hello World!" << endl ;
//	cout << "Hello" << "World!" << endl ;
//	cout << "Hello" << "World!\n" ;
//	cout << "Hello\nOut\nThere\n" ;

	int num1 ;
	int num2 ;
	double num3 ;

	( void )num1 ;
	( void )num2 ;
	( void )num3 ;

//	cout << "Enter an integer: " ;
//	cin  >> num1 ;
//	cout << "You entered " << num1 << endl ;

//	cout << "Enter a first integer: " ;
//	cin  >> num1 ;

//	cout << "Enter a second integer: " ;
//	cin  >> num2 ;

//	cout << "You entered " << num1 << " and " << num2 <<  endl ;

//	cout << "Enter two numbers separated by a space: " ;
//	cin  >> num1 >> num2 ;
//	cout << "You entered " << num1 << " and " << num2 << endl ;

//	cout << "Enter a double: " ;
//	cin  >> num3 ;
	
//	cout << "You entered " << num3 << endl ;

	cout << "Enter an integer: " ;
	cin  >> num1 ;
	cout << "Enter a double: " ;
	cin  >> num3 ;
	cout << "The integer is " << num1 << endl ;
	cout << "The double is "  << num3 << endl ;

	/*
	 * What happens if we read 10.5 as the integer?
	 *  _______________________________________________
	 * |10.5					   |
	 * |_______________________________________________|
	 *
	 *It reads then 10 and then puts the .5 into the double
	 */


	return 0 ;
}
