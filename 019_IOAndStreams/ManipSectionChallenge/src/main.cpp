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

/* #define DEBUG */
/* #define SHOW_UNFORMATTED */

short const TOTAL_WIDTH      {80} ;
short const COUNTRY_WIDTH    {20} ;
short const CITY_WIDTH       {20} ;
short const POPULATION_WIDTH {20} ;
short const COST_WIDTH       {20} ;

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

#ifdef DEBUG
void ruler( void ) ;
#endif /* DEBUG */

struct Tours init_tours( void ) ;
void print_unformatted( struct Tours tours ) ;
void print_centered_title( struct Tours tours ) ;
void print_tour_labels( void ) ;
void print_tour_info( struct Tours tours ) ;


int main( int argc, char *argv[] ) {
	struct Tours tours = init_tours() ;

#ifdef SHOW_UNFORMATTED
	print_unformatted( tours ) ;
#endif /* SHOW_UNFORMATTED */

#ifdef DEBUG
	for ( size_t i {} ; i < 8 ; i++ ) {
		ruler() ;
	}
#endif /* DEBUG */
	
	// Print tour information
	print_centered_title( tours ) ;
	print_tour_labels() ;
	print_tour_info( tours ) ;

	std::cout << std::endl ;
	return 0 ;
}

#ifdef DEBUG
/* ----------------------------------------------------------------------------*/
/**
 * @brief	A string of numbers to debug spacing
 */
/* ------------------------------------------------------------------------------------*/
void ruler( void ) {
	std::cout << "1234567890" ;
}
#endif /* DEBUG */

/* ----------------------------------------------------------------------------*/
/**
 * @brief		Populate/initialize the Tours structure
 *
 * @return Tours	Tours struct
 */
/* ------------------------------------------------------------------------------------*/
struct Tours init_tours( void ) {
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

	return tours ;
}

/* ----------------------------------------------------------------------------*/
/**
 * @brief		Unformatted output of tours
 *
 * @param tours		Struct of tours
 */
/* ------------------------------------------------------------------------------------*/
void print_unformatted( struct Tours tours ) {
	// Unformatted display so you can see how to access the vector elements
	std::cout << "Unformatted display\n" << std::endl ;
	std::cout << tours.title << std::endl ;
	for ( auto country : tours.countries ) { // Loop through the countries
		std::cout << country.name << std::endl ;
		for ( auto city : country.cities ) {	// Loop through the cities for each country
			std::cout << "\t" << city.name
				  << "\t" << city.population
				  << "\t" << city.cost
				  << std::endl ;
		}
	}
	std::cout << "--------------------------------------------------------------------------------" << std::endl ;
}

/* ----------------------------------------------------------------------------*/
/**
 * @brief		Print the tour title centered above the labels row
 *
 * @param tours		Struct of tours
 */
/* ------------------------------------------------------------------------------------*/
void print_centered_title( struct Tours tours ) {
	std::cout << std::endl << std::endl ;

	int const CENTER = ( TOTAL_WIDTH - tours.title.length() ) / 2 ;

	std::cout << std::setw( CENTER ) << std::setfill(' ') << ' ' ;
	std::cout << tours.title << std::endl ;
}

void print_tour_labels( void ) {
	std::cout << std::setw( COUNTRY_WIDTH + 1 )	<< std::left		<< "\nCountry" ;	// \n counts as a char in setw
	std::cout << std::setw( CITY_WIDTH )					<< "City" ;
	std::cout << std::setw( POPULATION_WIDTH )	<< std::right		<< "Population" ;
	std::cout << std::setw( COST_WIDTH )		<< "Price (USD)"	<< std::endl ;
	std::cout << "--------------------------------------------------------------------------------" << std::endl ;
}

/* ----------------------------------------------------------------------------*/
/**
 * @brief		Print the tour information
 *
 * @param tours		Struct of tours
 */
/* ------------------------------------------------------------------------------------*/
void print_tour_info( struct Tours tours ) {
	for ( auto country : tours.countries ) {
		for ( size_t i {0} ; i < country.cities.size() ; i++ ) {
			std::cout << std::setw( COUNTRY_WIDTH )		<< std::left		<< ( ( i != 0 ) ? "" : country.name ) // Display country name or not?
				  << std::setw( CITY_WIDTH )		<< std::left		<< country.cities.at(i).name
				  << std::setw( POPULATION_WIDTH )	<< std::right		<< country.cities.at(i).population
				  << std::setw( COST_WIDTH )		<< std::fixed		<< std::setprecision( 2 ) << country.cities.at(i).cost
				  << std::endl ;
		}
	}
}
