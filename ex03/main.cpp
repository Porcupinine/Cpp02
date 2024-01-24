/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/22 16:26:44 by laura         #+#    #+#                 */
/*   Updated: 2023/11/22 16:26:44 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.h"

int main( void ) {
	Fixed a(9);
	Fixed f(99.9f);
	float x = 5.05f;
	int y = 2;
	Fixed const b( Fixed( x ) * Fixed( y ) );
	Fixed const c( Fixed( x ) / Fixed( y ) );
	Fixed const d( Fixed( x ) - Fixed( y ) );
	Fixed const e( Fixed( x ) + Fixed( y ) );

	std::cout<<"\nArithmetic operators\n";
	std::cout<< x <<" * " << y <<" = " << b <<"\n";
	std::cout<< x <<" / " << y <<" = " << c <<"\n";
	std::cout<< x <<" + " << y <<" = " << d <<"\n";
	std::cout<< x <<" - " << y <<" = " << e <<"\n";

	std::cout<<"\nComparison  operators\n";
	std::cout<<std::boolalpha;
	std::cout<< x << " < " << y << " = " << (x < y) <<"\n";
	std::cout<< x << " > " << y << " = " << (x > y) <<"\n";
	std::cout<< x << " <= " << y << " = " << (x <= y) <<"\n";
	std::cout<< x << " >= " << y << " = " << (x >= y) <<"\n";
	std::cout<< x << " == " << y << " = " << (x == y) <<"\n";
	std::cout<< x << " != " << y << " = " << (x != y) <<"\n";

	std::cout<<"\nIncrement and decrement operators\n";
	std::cout<<"x = " << x <<" | x++ = " << x++ <<" | x = " << x <<"\n";
	std::cout<<"y = " << y <<" | y++ = " << y++ <<" | y = " << y <<"\n";
	std::cout<<"x = " << x <<" | x-- = " << x-- <<" | x = " << x <<"\n";
	std::cout<<"y = " << y <<" | y-- = " << y-- <<" | y = " << y <<"\n";
	std::cout<<"x = " << x <<" | ++x = " << ++x <<" | x = " << x <<"\n";
	std::cout<<"y = " << y <<" | ++y = " << ++y <<" | y = " << y <<"\n";
	std::cout<<"x = " << x <<" | --x = " << --x <<" | x = " << x <<"\n";
	std::cout<<"y = " << y <<" | --y = " << --y <<" | y = " << y <<"\n";

	std::cout<<"\nMax and mim\n";
	std::cout<< Fixed::max(a, f) <<" is the max value between "<< a <<" and "<< f <<"\n";
	std::cout<< Fixed::min(a, f) <<" is the min value between "<< a <<" and "<< f <<"\n";
	std::cout<< Fixed::min(b, c) <<" is the min value between "<< b <<" and "<< c <<"\n";
	std::cout<< Fixed::max(b, c) <<" is the max value between "<< b <<" and "<< c <<"\n";
	std::cout<< Fixed::min(c, d) <<" is the min value between "<< c <<" and "<< d <<"\n";
	std::cout<< Fixed::max(c, d) <<" is the max value between "<< c <<" and "<< d <<"\n";
	std::cout<< Fixed::max(d, e) <<" is the max value between "<< d <<" and "<< e <<"\n";
	std::cout<< Fixed::min(d, e) <<" is the min value between "<< d <<" and "<< e <<"\n";
	return 0;
}