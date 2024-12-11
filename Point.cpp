#include "Point.h"
#include <iostream>

Point::Point()
{
	_coord = new int[2];
	_coord[0] = 0;
	_coord[1] = 0;
}

Point::Point(int x, int y)
{
	std::cout << "Constractor" << std::endl;
	_coord = new int[2];
	_coord[0] = x;
	_coord[1] = y;
}

Point::Point(const Point& other)
{
	std::cout << "Copy-Constractor" << std::endl;
	delete _coord;
	this->_coord = new int[2];
	_coord[0] = other._coord[0];
	_coord[1] = other._coord[1];
}

Point::~Point()
{
	delete _coord;
}

Point& Point::operator=(const Point& other)
{
	std::cout << "Operator ";
	if (&this->_coord != &other._coord) {
		std::cout << "not same object";
		delete _coord;
		_coord = new int[2];
		memcpy(_coord, other._coord, sizeof(int) * 2);
	}
	std::cout << std::endl;
	return *this;
}

int Point::getX() const 
{ 
	return _coord[0]; 
}

int Point::getY() const
{ 
	return _coord[1]; 
}


std::ostream& operator<<(std::ostream& os, const Point& p)
{
	os << "(" << p._coord[0] << "," << p._coord[1] << ")";
	return os;
}
