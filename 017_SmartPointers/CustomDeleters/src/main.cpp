/**
 * @file main.cpp
 * @Brief Custom Deleters
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-09-25
 */
#include <iostream>
#include <memory>

class Test {
	private:
		int data ;
	public:
		Test( void ) ;
		Test( int data ) ;
		int get_data( void ) const ;
		~Test( void ) ;
} ;

void my_deleter( Test *ptr ) ;


/*-----------------------------------------------------------------------------
 * MAIN 
 *-----------------------------------------------------------------------------*/
int main( void ) {
	{
		// Using a function
		std::shared_ptr<Test> ptr1 {new Test{100}, my_deleter} ;
	}

	std::cout << "====================" << std::endl ;

	std::cout << std::endl ;
	{
		// Using a Lambda expression
		std::shared_ptr<Test> ptr2 (new Test{1000},
			[] ( Test *ptr ) {
				std::cout << "\tUsing my custom Lambda deleter" << std::endl ;
				delete ptr ;
			} ) ;
	}
	return 0 ;
}


/*-----------------------------------------------------------------------------
 * Functions 
 *-----------------------------------------------------------------------------*/

Test::Test( void )
	: data{0} {
		std::cout << "\tTest constructor ( " << data << "  ) " << std::endl ;
}

Test::Test( int data )
	: data{data} {
		std::cout << "\tTest constructor ( " << data << "  )" << std::endl ;
}

int Test::get_data( void ) const {
	return data ;
}

Test::~Test( void ) {
	std::cout << "\tTest destructor ( " << data << "  )" << std::endl ;
}

void my_deleter( Test *ptr ) {
	std::cout << "\tUsing my custom function deleter" << std::endl ;
	delete ptr ;
}
