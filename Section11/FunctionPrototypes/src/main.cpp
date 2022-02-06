// Section 11
// Function Prototypes
// Area of Circle and Volume of a Cylinder

#include <iostream>

using std::cout ;
using std::cin ;
using std::endl ;

double const PI {3.14159} ;

// Function Prototypes
double calc_area_circle( double ) ;					// All the compiler cares about is the type - you do not need the name of the variable.
double calc_volume_cylinder( double radius, double height ) ;
void area_circle() ;
void volume_cylinder() ;

int main() {

	area_circle() ;
	volume_cylinder() ;

	cout << endl ;
	return 0 ;
}

double calc_area_circle( double radius ) {
	return ( PI * radius * radius ) ;
}

double calc_volume_cylinder( double radius, double height ) {
	return ( calc_area_circle( radius ) * height ) ;
}

void area_circle() {
	double radius {} ;
	cout << "\nEnter the radius of the circle: " ;
	cin  >> radius ;

	cout << "The area of a circle with radius " << radius << " is " << calc_area_circle( radius ) << endl ;
}

void volume_cylinder() {
	double radius {} ;
	double height {} ;
	cout << "\nEnter the radius of the cylinder: " ;
	cin  >> radius ;
	cout << "Enter the height of the cylinder: " ;
	cin  >> height ;

	cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder( radius, height ) << endl ;
}

