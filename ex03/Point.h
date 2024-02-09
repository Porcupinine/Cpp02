/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Point.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/12/01 10:39:58 by laura         #+#    #+#                 */
/*   Updated: 2023/12/01 10:39:58 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP02_POINT_H
#define CPP02_POINT_H

#include "Fixed.h"

class Point {
	private:
		const Fixed m_x{0};
		const Fixed m_y{0};
	public:
		Point() = default;
		~Point() = default;
		Point(float x, float y);
		Point(const Point& cp);
		Point& operator=(const Point& cp) = delete;
		Fixed getValue(char n);
};

bool bsp( const Point& a, const Point& b, const Point& c, const Point& point);

#endif //CPP02_POINT_H
