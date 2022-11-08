/**
 * @file I_Printable.cpp
 * @Brief I_Printable class method definitions
 * @author Michael Ly (github.com/Michael-Q-Ly)
 * @version 0.0.0
 * @date 2022-09-21
 */
#include "I_Printable.hpp"


/* -------------------------------*/
/**
 * @Brief		Friend of I_Printable interface for printing
 *
 * @Param os		Output stream with account details
 * @Param obj		Account object determined durring runtime
 *
 * @Returns		Output stream with Account class type details
 */
/* ---------------------------------*/
std::ostream &operator<<( std::ostream &os, I_Printable const &obj ) {
	obj.print( os ) ;
	return os ;
}
