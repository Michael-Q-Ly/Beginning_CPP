/**
 * @file Test.hpp
 * @brief Test class
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-10-24
 */
#ifndef TEST_HPP
#define TEST_HPP
#include <memory>
#include <vector>

class Test {
		friend std::ostream &operator<<( std::ostream &os, Test const &obj ) ;
	private:
		int data ;
	public:
		Test( void ) ;
		Test( int data ) ;
		int get_data( void ) const ;
		~Test( void ) ;
} ;
#endif /* TEST_HPP */
