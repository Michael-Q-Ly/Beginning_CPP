/**
 * @file IllegalBalanceException.hpp
 * @brief 
 * @author Michael Ly
 * @version 1.0.0
 * @date 2022-11-06
 */
#ifndef ILLEGAL_BALANCE_EXCEPTION_HPP
#define ILLEGAL_BALANCE_EXCEPTION_HPP
#include <iostream>

class IllegalBalanceException : public std::exception {
	public:
		IllegalBalanceException() noexcept = default ;
		~IllegalBalanceException() = default ;
		virtual char const *what() const noexcept {
			return "Illegal balance exception" ;
		}
} ;

#endif /* ILLEGAL_BALANCE_EXCEPTION_HPP */
