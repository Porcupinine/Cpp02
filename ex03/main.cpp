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
#include "Point.h"

int main( ) {
	{
		Point p1(3, 3);
		Point p2(1, 2);
		Point p3(3, 5);
		Point p4(4, 1);

		std::cout << std::boolalpha;
		std::cout << "P2, P3 and P4, P1 should be true: ";
		std::cout << bsp(p2, p3, p4, p1) << "\n";
		std::cout << "P1, P3 and P4, P2 should be false: ";
		std::cout << bsp(p1, p3, p4, p2) << "\n";
		std::cout << "P1, P2 and P4, P3 should be false: ";
		std::cout << bsp(p1, p2, p4, p3) << "\n";
		std::cout << "P1, P2 and P3, P4 should be false: ";
		std::cout << bsp(p1, p2, p3, p4) << "\n";
	}
	{
		Point p1(3, 4);
		Point p2(14, 4);
		Point p3(7, 12);
		Point p4(8,7 );
		Point p5(3,9);
		Point p6(8, 5);
		Point p7(12,12);

		std::cout << std::boolalpha;
		std::cout << "P1, P2 and P3, P4 should be true: ";
		std::cout << bsp(p1, p2, p3, p4) << "\n";
		std::cout << "P1, P2 and P3, P5 should be false: ";
		std::cout << bsp(p1, p2, p3, p5) << "\n";
		std::cout << "P1, P2 and P3, P6 should be true: ";
		std::cout << bsp(p1, p2, p3, p6) << "\n";
		std::cout << "P1, P2 and P3, P7 should be false: ";
		std::cout << bsp(p1, p2, p3, p7) << "\n";
	}
	return 0;
}