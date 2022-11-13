/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Challenge 1 - Formatting output 
 *
 *        Version:  1.0
 *        Created:  11/11/2022 11:45:13 PM
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Michael Ly
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

struct City {
	std::string name ;
	long population ;
	double cost ;
} ;

struct Country {
	std::string name ;
	std::vector<City> cities ;
} ;

struct Tours {
	std::string title ;
	std::vector<Country> countries ;
} ;

int main( int argc, char *argv[] ) {
	struct Tours tours {
		"Tour Ticket Prices from Miami", {
			{
				"Columbia", {
					{ "Bogota", 8778000, 400.98 },
					{ "Cali", 2401000, 424.12 },
					{ "Medellin", 2464000, 350.98 },
					{ "Cartagena", 972000, 345.34 }
				},
			}, /* End Columbia */
			{
				"Brazil", {
					{ "Rio De Janerio", 13500000,567.45  },
					{ "Sao Paulo", 11310000, 975.45 },
					{ "Salvasdor", 18234000, 855.99 }
				}

			}, /* End Brazil */
			{
				"Chile", {
					{ "Valdivia", 260000, 569.12 },
					{ "Santiago", 7040000, 520.00 }
				},
			}, /* End Chile */
			{
				"Argentina", {
					{ "Buenos Aires", 3010000, 723.77 }
				}
			} /* End Argentina */
		} /* End Tours */
	} ;

	// Unformatted display so you can see how to access the vector elements
	std::cout << tours.title << std::endl ;
	for ( auto country : tours.countries ) { // Loop through the countries
		std::cout << country.name << std::endl ;
		for ( auto city : country.cities ) {	// Loop t hrough the cities for each country
			std::cout << "\t" << city.name
				  << "\t" << city.population
				  << "\t" << city.cost
				  << std::endl ;
		}
	}

	std::cout << std::endl ;
	return 0 ;
}
