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
	Fixed a;
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
	return 0;
}