/**
 * @file InsufficientFundsException.hpp
 * @brief Insufficient Funds Exception
 * @author Michael Ly
 * @version 1.0.0
 * @date 2022-11-07
 */
#ifndef INSUFFICIENTFUNDSEXCEPTION_HPP
#define INSUFFICIENTFUNDSEXCEPTION_HPP
#include <iostream>

/* ----------------------------------------------------------------------------*/
/**
 * @brief	Exception when attempting to withdraw more money that is available
 *		in an Account type object, fees included
 */
/* ------------------------------------------------------------------------------------*/
class InsufficientFundsException : public std::exception {
	public:
		InsufficientFundsException( void ) noexcept = default ;
		~InsufficientFundsException( void ) = default ;
		virtual char const *what() const noexcept {
			return "Not enough money in bank account!" ;
		}
} ;

#endif /* INSUFFICIENTFUNDSEXCEPTION_HPP */
