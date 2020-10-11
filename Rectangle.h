// Tanner Dryden
#pragma once
#include "Shape.h"

class Rectangle : public Shape
{
private:

	//attributes
	double length = 0.0;
	double width = 0.0;

public:

	// constructors
	Rectangle(string newName, const double& newLength, const double& newWidth);

	// accessors/mutators
	double getLength() const;
	double getWidth() const;
	void setLength(double newLength);
	void setWidth(double newWidth);

	// virtual methods
	double computePerimeter() const;
	double computeArea() const;

	// destructor
	~Rectangle();
};