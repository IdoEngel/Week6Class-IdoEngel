#include "Shape.h"

Shape::Shape() {
	this->_area = get_area();
	this->_perimeter = 0;
}

float Shape::get_area() const
{
	return _area;
}
