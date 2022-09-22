/**
 * @file I_Printable.hpp
 * @Brief I_Printable class interface header
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-09-21
 */
#ifndef _I_PRINTABLE_HPP_
#define _I_PRINTABLE_HPP_
#include <iostream>

class I_Printable {
		friend std::ostream &operator<<( std::ostream &os, I_Printable const &obj ) ;
	public:
		virtual void print( std::ostream &os ) const = 0 ;
		virtual ~I_Printable( void ) = default ;
} ;

#endif /* _I_PRINTABLE_HPP_ */
