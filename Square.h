#pragma once
#include <iostream>
#include <string>
#include "Rectangle.h"
using namespace std;

class Square : public Rectangle
{
private:
	double side;
public:
	/*
	This is my constructor for square
	precondition is that it must be supplied with the proper values and that the mutator setName must exist in BasicShape,
		class must also be properly linked to Rectangle, which must be linked to BasicShape.
	postcondition is that the proper values will be assigned to the proper variables.
	*/
	Square(double s, string n = "Square") : Rectangle(s, s, n)
	{
		side = s;
		setName(n);
	};
	

	/*
	this is my accessor
	precondition is that its variable must be populated with a value
	postcondition is that it will return the value stored within its variable
	*/
	double getSide();
};

