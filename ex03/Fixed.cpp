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
#include <cmath>

const int Fixed::frac = 8;

Fixed::Fixed() : fixed(0) {
//	std::cout<<"Default constructor called\n";
}

Fixed::Fixed(const int fix) {
//	std::cout<<"Int construdtor called\n";
	fixed = fix << frac;
}

Fixed::Fixed(const float f) {
	fixed = (int)roundf(f * (1<<frac));
//	std::cout<<"Float constructor called\n";
}

Fixed::Fixed(const Fixed &cp) {
	fixed = cp.fixed;
//	std::cout<<"Copy constructor called\n";
}

Fixed::~Fixed() {
//	std::cout<<"Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed &cp) {
//	std::cout<<"Copy assigment operator called\n";
	fixed = cp.fixed;
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout<<"getRawBits member function called\n";
	return fixed;
}

void Fixed::setRawBits(const int raw) {
	fixed = raw;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fix) {
	os<<fix.toFloat();
	return os;
}

int Fixed::toInt() const {
	int ret;
	ret = fixed >> frac;
	return ret;
}

float Fixed::toFloat() const {
	float ret;
	ret = (float)fixed / (1 << frac);
	return ret;
}

bool Fixed::operator<(const Fixed &fix) const {
	return (this->toFloat() < fix.toFloat());
}

bool Fixed::operator>(const Fixed &fix) const {
	return (this->toFloat() > fix.toFloat());
}

bool Fixed::operator<=(const Fixed &fix) const {
	return (this->toFloat() <= fix.toFloat());
}

bool Fixed::operator>=(const Fixed &fix) const {
	return (this->toFloat() >= fix.toFloat());
}

bool Fixed::operator==(const Fixed &fix) const {
	return (this->toFloat() == fix.toFloat());
}

bool Fixed::operator!=(const Fixed &fix) const {
	return (this->toFloat() != fix.toFloat());
}

Fixed Fixed::operator+(const Fixed &fix) const {
	return Fixed(this->toFloat() + fix.toFloat());
}

Fixed Fixed::operator-(const Fixed &fix) const {
	return Fixed(this->toFloat() - fix.toFloat());
}

Fixed Fixed::operator*(const Fixed &fix) const {
	return Fixed(this->toFloat() * fix.toFloat());
}

Fixed Fixed::operator/(const Fixed &fix) const {
	return Fixed(this->toFloat() / fix.toFloat());
}

Fixed Fixed::operator++() {
	Fixed tmp = *this;
	fixed++;
	return tmp;
}


Fixed Fixed::operator--() {
	Fixed tmp = *this;
	fixed--;
	return tmp;
}

void Fixed::operator++(int) {
	fixed++;
}

void Fixed::operator--(int) {
	fixed--;
}

Fixed Fixed::min(const Fixed &f1, const Fixed &f2) {

	return {};
}

Fixed Fixed::max(const Fixed &f1, const Fixed &f2) {
	return {};
}

Fixed Fixed::min(Fixed &f1, Fixed &f2) {
	return Fixed();
}
