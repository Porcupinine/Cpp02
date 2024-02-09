/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bsp.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/01 10:40:37 by laura         #+#    #+#                 */
/*   Updated: 2023/12/01 10:40:37 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.h"

//A = (1/2) |x1(y2 − y3) + x2(y3 − y1) + x3(y1 − y2)|
// a = ((ax*(by - cy)) + (bx*(cy - ay)) + (cx*(ay - by))) / 2

Fixed triangleArea(Point a, Point b, Point c) {
	Fixed area = (((a.getValue('x'))*(b.getValue('y') - c.getValue('y'))) \
	+ (b.getValue('x')*(c.getValue('y') - a.getValue('y'))) \
	+ (c.getValue('x')*(a.getValue('y') - b.getValue('y')))) / 2;
	if (area < 0)
		area = area * (-1);
	return area;
}
bool bsp( const Point& a, const Point& b, const Point& c, const Point& point) {
	Fixed aBPoint = triangleArea(a, b, point);
	Fixed bCPoint = triangleArea(b, c, point);
	Fixed cAPoint = triangleArea(c, a, point);
	Fixed aBC = triangleArea(a, b, c);
	if (aBPoint + bCPoint + cAPoint != aBC)
		return false;
	return true;;
}
