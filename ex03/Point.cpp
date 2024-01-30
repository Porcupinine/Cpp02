/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/01 10:46:05 by laura         #+#    #+#                 */
/*   Updated: 2023/12/01 10:46:05 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Point.h"

Point::Point(float x, float y) : m_x(x), m_y(y){
}

Point::Point(const Point &cp) {
	m_x = cp.m_x;
	m_y = cp.m_y;
//	std::cout<<"Point copy contructor called\n";
}

Point &Point::operator=(const Point &cp) {
	m_x = cp.m_x;
	m_y = cp.m_y;
//	std::cout<<"Point copy operator called\n";
	return *this;
}

Fixed Point::getValue(char n) {
	if(n == 'x')
		return m_x;
	if(n == 'y')
		return m_y;
}
