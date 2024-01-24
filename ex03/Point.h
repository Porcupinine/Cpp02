#ifndef CPP02_POINT_H
#define CPP02_POINT_H

#include "Fixed.h"

class Point {
private:
	Fixed x;
	Fixed y;
public:
	Point();
	Point(int newX, int newY);
	~Point();
	Point (const Point& cp);
	Point& operator=(const Point& cp);

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif //CPP02_POINT_H
