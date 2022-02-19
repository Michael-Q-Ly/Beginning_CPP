// Section 11
// Section Challenge - Menu Selection

#include <iostream>
#include <vector>

// Function handles
void display_menu		( void ) ;
char get_user_selection		( void ) ;
void handle_display		( std::vector <double> const &userVector ) ;
void handle_add_number		( std::vector <double> &userVector ) ;
void handle_mean		( std::vector <double> const &userVector ) ;
void handle_smallest_number 	( std::vector <double> const &userVector ) ;
void handle_largest_number 	( std::vector <double> const &userVector ) ;
void handle_invalid_choice	( void ) ;
void handle_exit_program	( void ) ;

// Function prototypes that do calculations
void get_display		( std::vector <double> const &userVector ) ;
double get_mean			( std::vector <double> const &userVector ) ;
double get_smallest		( std::vector <double> const &userVector ) ;
double get_largest		( std::vector <double> const &userVector ) ;


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
			case 'P':	handle_display( userVector ) ;		break ;
			case 'A':	handle_add_number( userVector ) ;	break ;
			case 'M':	handle_mean( userVector ) ;		break ;
			case 'S':	handle_smallest_number( userVector ) ;	break ;
			case 'L':	handle_largest_number( userVector ) ;	break ;
			case 'Q':	handle_exit_program() ;			break ;
			default:	handle_invalid_choice() ;
		}
	} while ( selection != 'Q' ) ;

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
void handle_display( std::vector <double> const &userVector ) {
	if ( userVector.size() ) {
		get_display( userVector ) ;
	}
	else {
		std::cerr << "[] - The list is empty!" << std::endl << std::flush ;
	}
}

/**
 * If the user chooses 'a' or 'A', allow them to add a number to the list.
 * Display an error if it is not a number.
 */
void handle_add_number( std::vector <double> &userVector ) {
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
 * If the user chooses 'm' or 'M' in a nonempty list,
 * get the mean then show it, else show an error
 */
void handle_mean( std::vector <double> const &userVector ) {
	if ( userVector.size() ) {
		std::cout << "The mean of your numbers is " << get_mean( userVector ) << std::endl ;
	}
	else {
		std::cerr << "Unable to calculate the mean - no data!\n" << std::endl ;
	}
}

/**
 * If the user chooses 's' or 'S', show the smallest number,
 * else show an error if the list is empty
 */
void handle_smallest_number ( std::vector <double> const &userVector ) {
	if ( userVector.size() ) {
		std::cerr << "The smallest number is " << get_smallest( userVector ) << std::endl ;
	}
	else {
		std::cout << "Unable to determine the smallest number - list is empty!" << std:: endl ;
	}
}

/**
 * If the user chooses 'l' or 'L', show the largest number,
 * else show an error if the list is empty
 */
void handle_largest_number ( std::vector <double> const &userVector ) {
	if ( userVector.size() ) {
		std::cout << "The largest number is " << get_largest( userVector ) << std::endl ;
	}
	else {
		std::cerr << "Unable to determine the largest number - list is empty!" << std:: endl ;
	}
}

/**
 * If the user chooses an option not in the list,
 * display an error
 */
void handle_invalid_choice( void ) {
	std::cerr << "Invalid -- try again!" << std::endl ;
}

/**
 * If the user chooses 'q' or 'Q',
 * show a quit message
 */
void handle_exit_program( void ) {
	std::cout << "\nGoodbye!" << std::endl ;
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//					Helper Functions					//
//////////////////////////////////////////////////////////////////////////////////////////////////

/**
 * Go through the vector and display every number
 */
void get_display( std::vector <double> const &userVector ) {
	std::cout << "[ " ;
	for ( auto num : userVector ) {
		std::cout << num << " " ;
	}
	std::cout << "] " << std::endl ;
}

/**
 * Calculate the mean of the nonempty list
 */
double get_mean( std::vector <double> const &userVector ) {
	double sum {} ;
	for ( auto num : userVector ) {
		sum += num ;
	}
	return sum / userVector.size() ;
}

/**
 * Parse the vector and perform swaps to obtain the
 * smallest number in the vector
 */
double get_smallest( std::vector <double> const &userVector ) {
	double smallest {userVector.at( 0 )} ;
	for ( auto num : userVector ) {
		if ( num >= smallest ) {
			continue ;
		}
		else {
			smallest = num ;
		}
	}

	return smallest ;
}

/**
 * Parse the vector and perform swaps to obtain the
 * largest number in the vector
 */
double get_largest ( std::vector <double> const &userVector ) {
	double largest {userVector.at( 0 )} ;
	for ( auto num : userVector ) {
		if ( num <= largest ) {
			continue ;
		}
		else {
			largest = num ;
		}
	}

	return largest ;
}

