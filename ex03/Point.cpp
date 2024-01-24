//
// Created by lpraca-l on 12/15/23.
//

#include <iostream>
#include "Point.h"

Point::Point() : x(0), y(0) {
//	std::cout<<"Point default constructor called\n";
}

Point::Point(int newX, int newY) : x(newX), y(newY) {
//	std::cout<<"Point constructor called\n";
}

Point::~Point() {
//	std::cout<<"Point destructor called\n";
}

Point::Point(const Point &cp) {
	x = cp.x;
	y = cp.y;
//	std::cout<<"Point copy contructor called\n";
}

Point &Point::operator=(const Point &cp) {
	x = cp.x;
	y = cp.y;
//	std::cout<<"Point copy operator called\n";
	return *this;
}


