// Tanner Dryden
#include "rightTriangle.h"

rightTriangle::rightTriangle(string newName, const double& newBase, const double& newHeight) : Shape(newName)
{
	setBase(newBase);
	setHeight(newHeight);
}

double rightTriangle::getBase() const
{
	return base;
}

double rightTriangle::getHeight() const
{
	return height;
}

void rightTriangle::setBase(double newBase)
{
	base = newBase;
}

void rightTriangle::setHeight(double newHeight)
{
	height = newHeight;
}

double rightTriangle::computePerimeter() const
{
	double hypotenuse = sqrt((getBase() * getBase()) + (getHeight() * getHeight()));
	return (getBase() + getHeight() + hypotenuse);
}

double rightTriangle::computeArea() const
{
	return ((getBase() * getHeight()) / 2);
}

rightTriangle::~rightTriangle()
{
}
