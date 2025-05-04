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
	virtual double calcArea() = 0;
	double getArea();
	string getName();
	void setArea(double a);
	void setName(string n);
};

