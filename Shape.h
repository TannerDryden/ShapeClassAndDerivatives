// Tanner Dryden
#pragma once
#include <string>
#include <iostream>
using namespace std;

class Shape
{

private:
	string name;

protected:
	// constructors
	Shape(string newName);

public:
	// accessors/mutators
	string getName() const;
	void setName(string newName);

	// methods
	virtual double computeArea() const;
	virtual double computePerimeter() const;
	virtual ~Shape();
};