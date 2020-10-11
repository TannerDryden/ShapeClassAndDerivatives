// Tanner Dryden
#pragma once
#include "Shape.h"

class rightTriangle : public Shape
{
private:

	// attributes
	double base = 0.0;
	double height = 0.0;

public:

	// constructors
	rightTriangle(string newName, const double& newBase, const double& newHeight);

	// accessors/mutators
	double getBase() const;
	double getHeight() const;
	void setBase(double newBase);
	void setHeight(double newHeight);

	// virtual methods
	double computePerimeter() const;
	double computeArea() const;

	// destructor
	~rightTriangle();
};