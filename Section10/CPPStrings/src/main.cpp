#include <iostream>
#include <iomanip>
#include <string>	// Important!!!

using std::cout ;
using std::cin ;
using std::endl ;

int main() {

	std::string s0 ;
	std::string s1 { "Apple" } ;
	std::string s2 { "Banana" } ;
	std::string s3 { "Kiwi" } ;
	std::string s4 { "apple" } ;
	std::string s5 { s1 } ;						// Apple
	std::string s6 { s1, 0, 3 } ;					// App
	std::string s7 ( 10, 'X' ) ;					// XXXXXXXXXX

	cout << s0 << endl ;						// No garbage
	cout << s0.length() << endl ;					// Empty string

	// Initialization
//	cout << "\nInitialization" << "\n------------------------" << endl ;
//	cout << "s1 is initialized to: " << s1 << endl ;
//	cout << "s2 is initialized to: " << s2 << endl ;
//	cout << "s3 is initialized to: " << s3 << endl ;
//	cout << "s4 is initialized to: " << s4 << endl ;
//	cout << "s5 is initialized to: " << s5 << endl ;
//	cout << "s6 is initialized to: " << s6 << endl ;
//	cout << "s7 is initialized to: " << s7 << endl ;
////////////////////////////////////////////////////////////////////////////////
	// Comparison
//	cout << "\nComparison" << "\n--------------------------------" << endl ;
//	cout << std::boolalpha ;
//	cout << s1 << " == " << s5 << ": " << ( s1 == s5 ) << endl ;
//	cout << s1 << " == " << s2 << ": " << ( s1 == s2 ) << endl ;
//	cout << s1 << " != " << s2 << ": " << ( s1 != s2 ) << endl ;
//	cout << s1 << " < " << s2 << ": " << ( s1 < s2 ) << endl ;
//	cout << s2 << " > " << s1 << ": " << ( s2 > s1 ) << endl ;
//	cout << s4 << " < " << s5 << ": " << ( s4 < s5 ) << endl ;
//	cout << s1 << " == " << "Apple" << ": " << ( s1 == "Apple" ) << endl ;
////////////////////////////////////////////////////////////////////////////////
	// Assignment
//	cout << "\nAssignment" << "\n------------------------" << endl ;

//	s1 = "Watermelon" ;
//	cout << "s1 is now: " << s1 << endl ;				// Watermelon
//	s2 = s1 ;
//	cout << "s2 is now: " << s2 << endl ;				// Watermelon

//	s3 = "Michael" ;
//	cout << "s3 is now: " << s3 << endl ;				// Michael

//	s3[0] = 'B' ;							// Bichael
//	cout << "s3 change first letter to 'B': " << s3 << endl ;	// Bichael
//	s3.at( 0 ) = 'P' ;
//	cout << "s3 change first letter to 'P': " << s3 << endl ;	// Pichael
////////////////////////////////////////////////////////////////////////////////
	// Concatenation
//	cout << "\nConcatenation" << "\n------------------------" << endl ;
//	s3 = "Watermelon" ;

//	s3 = s5 + " and " + s2 + " juice" ;				// The plus sign is overloaded here and concatenates! Cool!
//	cout << "s3 is now: " << s3 << endl ;				// Apple and Banana juice

//	s3 = "nice " + "cold " + s5 + " juice" ;			// Compiler error
////////////////////////////////////////////////////////////////////////////////
	// For Loop
	cout << "\nLooping" << "\n------------------------" << endl ;

	s1 = "Apple" ;
	for ( size_t i {0} ; i < s1.length() ; i++ ) {
		cout << s1.at( i ) ;					// or s1[i] Apple
	}
	cout << endl ;
////////////////////////////////////////////////////////////////////////////////
	// Range-based For Loop
	cout << "\nRange-based Looping" << "\n------------------------" << endl ;
	for ( char c : s1 ) {
		cout << c ;	// Apple
	}
	cout << endl ;
////////////////////////////////////////////////////////////////////////////////
	// Substring
	cout << "\nSubstring" << "\n------------------------" << endl ;
	s1 = "This is a test" ;

	cout << s1.substr( 0, 4 ) << endl ;				// This
	cout << s1.substr( 5, 2 ) << endl ;				// is
	cout << s1.substr( 10, 4 ) << endl ;				// test
////////////////////////////////////////////////////////////////////////////////
	// Erase
	cout << "\nErase" << "\n------------------------" << endl ;

	s1 = "This is a test" ;
	cout << "s1 is " << s1 << endl ;
	s1.erase( 0, 5 ) ;						// Erase "This" from s1 results in "is a test"
	cout << "s1 is now: " << s1 << endl ;
////////////////////////////////////////////////////////////////////////////////
	// getline
	cout << "\ngetline" << "\n------------------------" << endl ;

	std::string full_name {} ;

	cout << "Enter your full name: " ;
	getline( cin, full_name ) ;

	cout << "Your full name is: " << full_name << endl ;
////////////////////////////////////////////////////////////////////////////////
	// Find
	cout << "\nFind" << "\n------------------------" << endl ;
	
	s1 = "The secret word is Boo" ;
	std::string word {} ;

	cout << "Enter the word to find: " ;
	cin >> word ;

	size_t position = s1.find( word ) ;
	if (position != std::string::npos ) {
		cout << "Found " << word << " at position: " << position << endl ;
	}
	else {
		cout << "Sorry, " << word << " not found" << endl ;
	}

	cout << endl ;
	return 0 ;
}

