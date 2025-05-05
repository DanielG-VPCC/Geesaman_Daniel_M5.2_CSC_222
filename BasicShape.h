#pragma once
#include <string>
#include <iostream>
using namespace std;

class BasicShape
{
private:
	double area;
	string name;
public:
	/*
	This is a pure vitual function, it does nothing on its own but is overrided by other functions to be used.
	preconditions are that it must be called and overridden
	postcondition is that it will report a calculated value for area
	*/
	virtual double calcArea() = 0;

	/*
	these are my accessors
	precondition are that their respective variables must be populated with a value
	postcondition is that it will return the value stored within its variable
	*/
	double getArea();
	string getName();

	/*
	these are my mutators
	precondition is that they must be supplied with a value
	postcondition is that it will set its respective variable to the supplied value
	*/
	void setArea(double a);
	void setName(string n);
};

