// Section 12
// Pointer Arithmetic

#include <iostream>

int const SCORES_SENTINEL = 1 ;

int main() {

	int scores[] { 100, 95, 89, 68, SCORES_SENTINEL } ;
	int *score_ptr {scores} ;

	while ( *score_ptr != SCORES_SENTINEL ) {
		std::cout << *score_ptr << std::endl ;
		score_ptr++ ;								// Increment address by sizeof(data_type)
	}

	std::cout << "\n--------------------" << std::endl ;
	score_ptr = scores ;
	while ( *score_ptr != SCORES_SENTINEL ) {
		std::cout << *score_ptr++ << std::endl ;				// Compact version of above -- print then increment
	}

	std::cout << "\n--------------------" << std::endl ;
	std::string s1 {"Michael"} ;
	std::string s2 {"Michael"} ;
	std::string s3 {"James"} ;

	std::string *p1 {&s1} ;
	std::string *p2 {&s2} ;
	std::string *p3 {&s1} ;

	std::cout << std::boolalpha ;
	std::cout << p1 << " == " << p2 << ": " << ( p1 == p2 ) << std::endl ;		// false
	std::cout << p1 << " == " << p3 << ": " << ( p1 == p3 ) << std::endl ;		// true

	std::cout << *p1 << " == " << *p2 << ": " << ( *p1 == *p2 ) << std::endl ;	// true
	std::cout << *p1 << " == " << *p3 << ": " << ( *p1 == *p3 ) << std::endl ;	// true

	p3 = &s3 ;									// Point to James
	std::cout << *p1 << " == " << *p3 << ": " << ( *p1 == *p3 ) << std::endl ;	// false

	std::cout << "\n--------------------" << std::endl ;
	char name[] {"Michael"} ;

	char *char_ptr1 {nullptr} ;
	char *char_ptr2 {nullptr} ;

	char_ptr1 = &name[0] ;								// M
	char_ptr2 = &name[3] ;								// h

	std::cout << "In the string " << name << ", " << *char_ptr2 << " is " << ( char_ptr2 - char_ptr1 ) \
		<< " characters away from " << *char_ptr1 << std::endl ;

	std::cout << std::endl ;
	return 0 ;
}

