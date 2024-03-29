/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/17 15:15:52 by laura         #+#    #+#                 */
/*   Updated: 2023/11/17 15:15:52 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.h"

const int Fixed::frac = 8;

Fixed::Fixed() : fixed(0) {
	std::cout<<"Default constructor called\n";
}

Fixed::Fixed(const Fixed &cp) {
	std::cout<<"Copy constructor called\n";
	fixed = cp.fixed;
	getRawBits();
}

Fixed& Fixed::operator=(const Fixed &cp) {
	std::cout<<"Copy assigment operator called\n";
	fixed = cp.fixed;
	return *this;
}

Fixed::~Fixed() {
	std::cout<<"Destructor called\n";
}

int Fixed::getRawBits(void) const {
	std::cout<<"getRawBits member function called\n";
	return fixed;
}

void Fixed::setRawBits(const int raw) {
	fixed = raw;
}
