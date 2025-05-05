#pragma once
#include <iostream>
#include <string>
#include "BasicShape.h"
using namespace std;

class Circle : public BasicShape
{
private:
	double xCenter;
	double yCenter;
	double radius;
public:
	/*
	This is my Circle constructor
	precondition is that the proper values must be supplied to the constructor
	postcondition is that the values will be placed within their respective variables
	*/
	Circle(double x, double y, double r, string n = "Circle");
	
	/*
	This is my calculate area function for Circle
	preconditions are that the correct value types for each variable must have been supplied, and that
		setArea exists within BasicShape, Circle must be linked to BasicShape properly.
	postcondition is that this function will return the area of a given circle and place the value of the area
		within the area variable within BasicShape
	*/
	double calcArea() override
	{
		double a;
		a = 3.14 * pow(radius, 2);
		setArea(a);
		return a;
	};

	/*
	these are my accessors
	precondition are that their respective variables must be populated with a value
	postcondition is that it will return the value stored within its variable
	*/
	double getXC();
	double getYC();
	double getRadius();
};

