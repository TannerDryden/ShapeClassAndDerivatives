/*
Name: Tanner Dryden
Prof: Cliff Snyder
Program #7
Description: 
	This is a program that uses the included node,stack,shape, and various shape classes to display
	my ability to utilize inheritance. This program puts 3 shapes on a stack then computes the area and perimeter
	of each after popping them off the stack.
*/
#include <iostream>
#include "Stack.h"
#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"
#include "rightTriangle.h"

using namespace std;

int main()
{

	Stack<Shape*> shapeStack;

	shapeStack.push(new Circle("Tanner's Circle", 3));
	shapeStack.push(new Rectangle("Tanner's Rectangle", 4, 6));
	shapeStack.push(new rightTriangle("Tanner's Triangle", 5, 17));

	while (shapeStack.size() > 0)
	{
		Shape* shapePtr = shapeStack.pop();
		cout << shapePtr->getName() << " has an area of " << shapePtr->computeArea() << endl;
		cout << shapePtr->getName() << " has a perimeter of " << shapePtr->computePerimeter() << endl;
		delete shapePtr;
	}
}
