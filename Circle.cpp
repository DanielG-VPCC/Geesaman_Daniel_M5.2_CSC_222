#include "Circle.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

Circle::Circle(double x, double y, double r, string n)
{
	xCenter = x;
	yCenter = y;
	radius = r;
	setName(n);
}

//double Circle::calcArea()
//{
//	double a;
//	a = 3.14 * pow(radius, 2);
//	setArea(a);
//}

double Circle::getXC()
{
	return xCenter;
}

double Circle::getYC()
{
	return yCenter;
}

double Circle::getRadius()
{
	return radius;
}