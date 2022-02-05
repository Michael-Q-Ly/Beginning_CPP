/**
 * In this assignment, you will display a Letter Pyramid given a string of characters.
 * This assignment will allow you to practice using loops, nested loops, and std::string
 * Please see the assignment instructions for details. Note that the assignment will
 * not be graded, but is provided for practice.
 */

#include <iostream>
#include <string>

using std::cout ;
using std::cin ;
using std::endl ;
using std::string ;

int main() {

	string my_string ;
	cout << "Enter a string: " ;
	getline( cin, my_string ) ;


	// 1. Get the length of the string
	// 2. Determine how many spaces you need. If I have a length x, I need (x-1) white spaces.
	// 3. Determine how many spaces are needed for the next row.
	//    The next row should contain (x-1) white spaces plus what the outer loop count is,
	//    assuming it starts at zero.
	size_t num_chars_to_print {1} ;
	for ( size_t i {} ; i < my_string.length() ; i++ ) {

		for ( size_t j {} ; j < my_string.length() ; j++ ) {
			// Print spaces leading up to the first char to be printed on the row
			if ( j < my_string.length() - i - 1) {
				cout << " " ;
			}
			else {
				// Print the chars in order
				cout << my_string.substr( 0, num_chars_to_print ) ;
				// Now print them in reverse
				for ( size_t c {num_chars_to_print-1} ; c > 0 ; c-- ) {
					cout << my_string.at( c-1 ) ;
				}
				
				break ;
			} // if-else

		} // Inner for-loop
		cout << endl ;				// Add a new line to the pyramid
		num_chars_to_print++ ;			// Increase the number of chars to print for the new line

	} // Outer for-loop

	cout << endl ;
	return 0 ;
}

