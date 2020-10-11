// Tanner Dryden
#include "Shape.h"

Shape::Shape(string newName)
{
	setName(newName);
}

string Shape::getName() const
{
	return name;
}

void Shape::setName(string newName)
{
	name = newName;
}

double Shape::computeArea() const
{
	
	return 0.0;
}

double Shape::computePerimeter() const
{
	return 0.0;
}

Shape::~Shape()
{

}