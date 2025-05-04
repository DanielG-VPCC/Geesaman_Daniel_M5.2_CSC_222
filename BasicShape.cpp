#include "BasicShape.h"
#include <iostream>
#include <string>
using namespace std;

double BasicShape::getArea()
{
	return area;
}

string BasicShape::getName()
{
	return name;
}

void BasicShape::setArea(double a)
{
	area = a;
}

void BasicShape::setName(string n)
{
	name = n;
}