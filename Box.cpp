#include "Box.hpp"

void Shape::setWidth(int w) 
{
	width = w;
}

void Shape::setHeight(int h)
{
	height = h;
}

int Rectangle::getArea()
{ 
	return (width * height); 
}
