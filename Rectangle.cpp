#include "Rectangle.h"

Rectangle::Rectangle(double l, double w, string n)
{
	length = l;
	width = w;
	setName(n);
}

//double Rectangle::calcArea()
//{
//	double a;
//	a = (length * width);
//	setArea(a);
//}

double Rectangle::getLength()
{
	return length;
}

double Rectangle::getWidth()
{
	return width;
}