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
	Square(double s, string n = "Square") : Rectangle(s, s, n)
	{
		side = s;
		setName(n);
	};
	

	double getSide();
};

