// Tanner Dryden
#pragma once
#include "Shape.h"

class Circle : public Shape
{
private:

	// attributes
	double radius = 0.0;

public:

	// constructors
	Circle(string newName, const double &newRadius);

	// accessors/mutators
	double getRadius() const;
	void setRadius(double newRadius);

	// virtual methods
	double computePerimeter() const;
	double computeArea() const;

	// destructor
	~Circle();
};