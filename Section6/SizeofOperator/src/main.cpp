/*
 * Section 6
 * The sizeof operator
 */

#include <iostream>
#include <climits>		// Make sure you include climits for integer types
				// Similar information for floating point numbers
				// is contained in <cfloat>

using std::cout ;
using std::cin ;
using std::endl ;
int main() {
	cout << "sizeof information\n" ;
	cout << "==========================\n" ;

	cout << "char		: " << sizeof( char ) 		<< " bytes" << endl ;
	cout << "int		: " << sizeof( int ) 		<< " bytes" << endl ;
	cout << "unsigned int	: " << sizeof( unsigned int ) 	<< " bytes" << endl ;
	cout << "short     	: " << sizeof( short ) 		<< " bytes" << endl ;
	cout << "long      	: " << sizeof( long ) 		<< " bytes" << endl ;
	cout << "long long 	: " << sizeof( long long ) 	<< " bytes" << endl ;

	cout << "==========================\n" ;
	
	cout << "float		: " << sizeof( float ) 		<< " bytes" << endl ;
	cout << "double		: " << sizeof( double ) 	<< " bytes" << endl ;
	cout << "long double	: " << sizeof( long double ) 	<< " bytes" << endl ;

	// Use values defined in climits
	cout << "==========================\n" ;
	cout << "Minimum values:\n" ;
	cout << "char		: " << CHAR_MIN << endl ;
	cout << "int		: " << INT_MIN << endl ;
	cout << "short		: " << SHRT_MIN << endl ;
	cout << "long		: " << LONG_MIN << endl ;
	cout << "long long	: " << LLONG_MIN << endl ;

	cout << "==========================\n" ;
	cout << "Maximum values:\n" ;
	cout << "char		: " << CHAR_MAX << endl ;
	cout << "int		: " << INT_MAX << endl ;
	cout << "short		: " << SHRT_MAX << endl ;
	cout << "long		: " << LONG_MAX << endl ;
	cout << "long long	: " << LLONG_MAX << endl ;

	// sizeof can also be used with variable names
	cout << "==========================\n" ;
	int age { 21 } ;
	cout << "age is " << sizeof( age ) << " bytes\n" ;
	// or
	cout << "age is " << sizeof age << " bytes\n" ;

	double wage { 22.24 } ;
	cout << "wage is " << sizeof( wage ) << " bytes\n" ;
	// or
	cout << "wage is " << sizeof wage << " bytes\n" ;
	

	return 0 ;
}
