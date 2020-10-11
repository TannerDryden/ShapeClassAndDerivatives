// Tanner Dryden
#include "Rectangle.h"


Rectangle::Rectangle(string newName, const double &newLength,const double &newWidth) : Shape(newName)
{
	setLength(newLength);
	setWidth(newWidth);
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getWidth() const
{
	return width;
}

void Rectangle::setLength(double newLength)
{
	length = newLength;
}

void Rectangle::setWidth(double newWidth)
{
	width = newWidth;
}

double Rectangle::computePerimeter() const
{
	return ((2 * getLength()) + (2 * getWidth()));
}

double Rectangle::computeArea() const
{
	return (getLength() * getWidth());
}

Rectangle::~Rectangle()
{

}
