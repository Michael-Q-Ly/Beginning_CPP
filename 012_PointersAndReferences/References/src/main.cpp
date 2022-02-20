// Section 12
// References

#include <iostream>
#include <string>
#include <vector>

int main() {

	int num {100} ;
	int &ref {num} ;							// ref is an alias for num

	std::cout << num << std::endl ;
	std::cout << ref << std::endl ;

	num = 200 ;
	std::cout << "\n--------------------" << std::endl ;
	std::cout << num << std::endl ;
	std::cout << ref << std::endl ;

	ref = 300 ;
	std::cout << "\n--------------------" << std::endl ;
	std::cout << num << std::endl ;
	std::cout << ref << std::endl ;


	std::cout << "\n--------------------" << std::endl ;
	std::vector <std::string> stooges { "Larry", "Moe", "Curly" } ;

	for ( auto str : stooges ) {
		str = "Funny" ;							// str is a COPY of the each vector element
	}									// End of scope; str is popped off stack and no longer exist

	for ( auto str : stooges ) {						// No change
		std::cout << str << std::endl ;
	}

	std::cout << "\n--------------------" << std::endl ;
	for ( auto &str : stooges ) {						// str is a reference to each vector element
		str = "Funny" ;
	}

	for ( auto const &str : stooges ) {
		std::cout << str << std::endl ;
	}

	std::cout << std::endl ;
	return 0 ;
}

