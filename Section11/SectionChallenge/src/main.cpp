// Section 11
// Section Challenge - Menu Selection

#include <iostream>
#include <vector>

void display_menu		( void ) ;
char get_user_selection		( void ) ;
void print_numbers		( std::vector <double> const userVector ) ;
void add_number			( std::vector <double> &userVector ) ;
double calc_mean		( std::vector <double> const &userVector ) ;
void display_mean		( std::vector <double> const &userVector ) ;
void display_smallest_number 	( std::vector <double> const &userVector ) ;
void display_largest_number 	( std::vector <double> const &userVector ) ;
void display_error		( void ) ;
void exit_program		( void ) ;

int main() {

	char selection {} ;
	std::vector <double> userVector {} ;

	do {
		// Display a menu to the user
		display_menu() ;
		// Get the user's option
		selection = get_user_selection() ;
		// Decide what the selection does
		switch ( selection ) {
			case 'P':	print_numbers( userVector ) ;		break ;
			case 'A':	add_number( userVector ) ;		break ;
			case 'M':	display_mean( userVector ) ;		break ;
			case 'S':	display_smallest_number( userVector ) ;	break ;
			case 'L':	display_largest_number( userVector ) ;	break ;
			case 'Q':	exit_program() ;			break ;
			default:	display_error() ;
		}
	} while ( selection != 'q' && selection != 'Q' ) ;

	std::cout << std::endl ;
	return 0 ;
}
//////////////////////////////////////////////////////////////////////////////////////////////////
//					Function Definitions					//
//////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * Displays the menu
 */
void display_menu( void ) {
	std::cout << "\n---------------------------------\n" ;
	std::cout << "P - Print numbers" << std::endl ;
	std::cout << "A - Add a number" << std::endl ;
	std::cout << "M - Display mean of the numbers" << std::endl ;
	std::cout << "S - Display the smallest number" << std::endl ;
	std::cout << "L - Display the largest number" << std::endl ;
	std::cout << "Q - Quit" << std::endl ;
}

/**
 * Asks the user to enter a choice from the menu
 */
char get_user_selection( void ) {
	char selection {} ;
	std::cout << "\nEnter your choice: " ;
	std::cin  >> selection ;
	std::cout << std::endl ;

	// Return the selection as an uppercase letter
	// so that we avoid fall-through
	return std::toupper( selection ) ;
}

/**
 * If the user chooses 'p' or 'P', show the list,
 * else show an error if the list is empty
 */
void print_numbers( std::vector <double> const userVector ) {
	if ( userVector.size() ) {
		std::cout << "[ " ;
		for ( auto num : userVector ) {
			std::cout << num << " " ;
		}
		std::cout << "] " << std::endl ;
	}
	else {
		std::cerr << "[] - The list is empty!" << std::endl << std::flush ;
	}
}

/**
 * If the user chooses 'a' or 'A', allow them to add a number to the list.
 * Display an error if it is not a number.
 */
void add_number( std::vector <double> &userVector ) {
	double user_num {} ;
	std::cout << "Enter a number: " ;
	while ( !( std::cin >> user_num ) ) {
		// Explain error
		std::cerr << "ERROR: a number must be entered! Please try again:" << std::endl ;
		// Clear input stream
		std::cin.clear() ;
		// Discard previous input
		std::cin.ignore( 123, '\n' ) ;
	}
	userVector.push_back( user_num ) ;
	std::cout << "\nNumber added!" << std::endl ;
}

/**
 * Calculate the mean of the nonempty list
 */
double calc_mean( std::vector <double> const &userVector ) {
	double sum {} ;
	for ( auto num : userVector ) {
		sum += num ;
	}
	return sum / userVector.size() ;
}
	
/**
 * If the user chooses 'm' or 'M' in a nonempty list,
 * get the mean then show it, else show an error
 */
void display_mean( std::vector <double> const &userVector ) {
	if ( userVector.size() ) {
		double average ;
		average = calc_mean( userVector ) ;
		std::cout << "The mean of your numbers is " << average << std::endl ;
	}
	else {
		std::cerr << "Unable to calculate the mean - no data!\n" << std::endl ;
	}
}

/**
 * If the user chooses 's' or 'S', show the smallest number,
 * else show an error if the list is empty
 */
void display_smallest_number ( std::vector <double> const &userVector ) {
	if ( userVector.size() ) {
		double smallest {userVector.at( 0 )} ;
		for ( auto num : userVector ) {
			if ( num >= smallest ) {
				continue ;
			}
			else {
				smallest = num ;
			}
		}
		std::cerr << "The smallest number is " << smallest << std::endl ;
	}
	else {
		std::cout << "Unable to determine the smallest number - list is empty!" << std:: endl ;
	}
}

/**
 * If the user chooses 'l' or 'L', show the largest number,
 * else show an error if the list is empty
 */
void display_largest_number ( std::vector <double> const &userVector ) {
	if ( userVector.size() ) {
		double largest {userVector.at( 0 )} ;
		for ( auto num : userVector ) {
			if ( num <= largest ) {
				continue ;
			}
			else {
				largest = num ;
			}
		}
		std::cout << "The largest number is " << largest << std::endl ;
	}
	else {
		std::cerr << "Unable to determine the largest number - list is empty!" << std:: endl ;
	}
}

/**
 * If the user chooses an option not in the list,
 * display an error
 */
void display_error( void ) {
	std::cerr << "Invalid -- try again!" << std::endl ;
}

/**
 * If the user chooses 'q' or 'Q',
 * show a quit message
 */
void exit_program( void ) {
	std::cout << "\nGoodbye!" << std::endl ;
}

