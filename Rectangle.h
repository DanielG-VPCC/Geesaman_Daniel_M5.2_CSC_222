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
	Rectangle(double l, double w, string n = "Rectangle");
	double calcArea() override;

	double getLength();
	double getWidth();
};

