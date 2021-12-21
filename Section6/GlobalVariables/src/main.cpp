/*
 * Section 6
 * Global and local variables
 */

#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;

	int age { 18 } ;	// Global

int main() {
//	int age { 18 } ;

	cout << age << endl ;	// The compiler will first check local scope then the next scope level (global in this case)

	return 0 ;
}
