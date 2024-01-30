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
	Point p1(3, 3);
	Point p2(1, 2);
	Point p3(3, 5);
	Point p4(4, 1);

	std::cout<<std::boolalpha;
	std::cout<<"P2, P3 and P4, P1 doesn't belong\n";
	std::cout<<bsp(p2, p3, p4, p1)<<"\n\n";
	std::cout<<"P1, P3 and P4, P2 should belong\n";
	std::cout<<bsp(p1,p3, p4 , p2)<<"\n\n";
	std::cout<<"P1, P2 and P4, P3 doesn't belong\n";
	std::cout<<bsp(p1, p2, p4, p3)<<"\n\n";
	std::cout<<"P1, P2 and P3, P4 doesn't belong\n";
	std::cout<<bsp(p1, p2, p3, p4)<<"\n\n";

	return 0;
}