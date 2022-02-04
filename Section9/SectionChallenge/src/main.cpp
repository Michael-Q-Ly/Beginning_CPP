// main.cpp
// Section 9 Challenge

#include <iostream>
#include <vector>

int main() {

	char selection ;
	std::vector <double> userVector {} ;
	// Display a menu to the user:
	do {
		std::cout << "\n---------------------------------\n" ;
		std::cout << "P - Print numbers" << std::endl ;
		std::cout << "A - Add a number" << std::endl ;
		std::cout << "M - Display mean of the numbers" << std::endl ;
		std::cout << "S - Display the smallest number" << std::endl ;
		std::cout << "L - Display the largest number" << std::endl ;
		std::cout << "Q - Quit" << std::endl ;

		std::cout << "\nEnter your choice: " ;
		std::cin  >> selection ;
		std::cout << std::endl ;

		switch (selection ) {
			case 'p':
			case 'P': // Print the numbers in the list
				if ( ( userVector.size() ) ) {
					std::cout << "[ " ;
					for ( size_t i{0} ; i <  userVector.size() ; i++ ) {
						std::cout << userVector.at( i ) << " ";
					}
					std::cout << "]" << std::endl ;
				}
				else {
					std::cout << "[] - The list is empty!" << std::endl << std::flush ;
				}
				break ;
			case 'a':
			case 'A': // Add a number to the list
				double user_num ;
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
				break ;
			case 'm':
			case 'M': // Find the mean of the numbers in the list
				if ( userVector.size() ) {
					// Find the mean of the numbers
					double sum {} ;
					double avg {} ;
					for ( size_t i {} ; i < userVector.size() ; i++ ) {
						sum += userVector.at( i ) ;
					}
					avg = sum / userVector.size() ;
					std::cout << "The mean of your numbers is " << avg << std::endl ;
				}
				else {
					std::cout << "Unable to calculate the mean - no data\n" << std::endl ;
				}
				break ;
			case 's':
			case 'S': // Display the smallest element in the list
				if ( userVector.size() ) {
					double smallest { userVector.at( 0 ) } ;
					for ( size_t i ; i < userVector.size() ; i++ ) {
						if ( userVector.at( i ) >= smallest ) {
							continue ;
						}
						else {
							smallest = userVector.at( i ) ;
						}
					}
					std::cout << "The smallest number is " << smallest << std::endl ;
				}
				else {
					std::cout << "Unable to determine the smallest number - list is empty" << std::endl ;
				}

				break ;
			case 'l':
			case 'L': // Display the largets element in the list
				if ( userVector.size() ) {
					double largest { userVector.at( 0 ) } ;
					for ( size_t i ; i < userVector.size() ; i++ ) {
						if ( userVector.at( i ) <= largest ) {
							continue ;
						}
						else {
							largest = userVector.at( i ) ;
						}
					}
					std::cout << "The largest number is " << largest << std::endl ;
				}
				else {
					std::cout << "Unable to determine the largest number - list is empty" << std::endl ;
				}

				break ;
				break ;
			case 'q':
			case 'Q': // Quit
				std::cout << "\nGoodbye" << std::endl ;
				break ;
			default: // Display error
				std::cout << "Invalid -- try again" << std::endl ;
		}
	} while ( selection != 'q' && selection != 'Q' ) ;

	std::cout << std::endl ;
	return 0 ;
}

