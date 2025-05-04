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
	Circle(double x, double y, double r, string n = "Circle");
	double calcArea() override;

	double getXC();
	double getYC();
	double getRadius();
};

