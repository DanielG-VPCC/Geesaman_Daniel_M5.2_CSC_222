#pragma once
#include <iostream>
#include <string>
#include "BasicShape.h"
using namespace std;

class Rectangle : public BasicShape
{
private:
	double length;
	double width;
public:
	/*
	This is the constructor for Rectangle
	precondition is that rectangle must be supplied the proper values
	postcondition is that the respective variables will be populated with the given values
	*/
	Rectangle(double l, double w, string n = "Rectangle");
	
	/*
	This is the function to calculate area within the rectangle class
	precondition is that Rectangle must be properly linked to BasicShape, the values used must be properly supplied,
		and the mutator setArea must exist in BasicShape
	postcondition is that this function will calculate an area based on given variables and store that area in
		the area variable within BasicShape
	*/
	double calcArea() override 
	{
		double a;
		a = (length * width);
		setArea(a);
		return a;
	};

	/*
	these are my accessors
	precondition are that their respective variables must be populated with a value
	postcondition is that it will return the value stored within its variable
	*/
	double getLength();
	double getWidth();
};

