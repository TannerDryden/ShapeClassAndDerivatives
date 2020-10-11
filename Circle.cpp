// Tanner Dryden
#include "Circle.h"

Circle::Circle(string newName, const double &newRadius) : Shape(newName)
{
	setRadius(newRadius);
}

double Circle::getRadius() const
{
	return radius;
}

void Circle::setRadius(double newRadius)
{
	radius = newRadius;
}

double Circle::computePerimeter() const
{
	const double PI = 3.14159;
	return (2 * PI * getRadius());
}

double Circle::computeArea() const
{
	const double PI = 3.14159;
	return (PI * (getRadius() * getRadius()));
}

Circle::~Circle()
{
}
