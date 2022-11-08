/**
 * @file IllegalBalanceException.hpp
 * @brief Illegal Balance Exception
 * @author Michael Ly
 * @version 1.0.0
 * @date 2022-11-06
 */
#ifndef ILLEGAL_BALANCE_EXCEPTION_HPP
#define ILLEGAL_BALANCE_EXCEPTION_HPP
#include <iostream>

/* ----------------------------------------------------------------------------*/
/**
 * @brief	Exception when an Account class has a negative initial balance
 */
/* ------------------------------------------------------------------------------------*/
class IllegalBalanceException : public std::exception {
	public:
		IllegalBalanceException( void ) noexcept = default ;
		~IllegalBalanceException( void )         = default ;
		virtual char const *what( void ) const noexcept {
			return "Balance cannot be negative!" ;
		}

} ;

#endif /* ILLEGAL_BALANCE_EXCEPTION_HPP */
