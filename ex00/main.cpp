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

int main() {
	Fixed a;
	Fixed b (a);
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}