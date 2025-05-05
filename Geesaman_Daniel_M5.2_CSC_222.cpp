// Geesaman_Daniel_M5.2_CSC_222.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;

int main()
{
    BasicShape** shapes = new BasicShape*[5];

    shapes[0] = new Rectangle{5,6,"Rect1"};
    shapes[1] = new Rectangle{15,12,"Rect2"};
    shapes[2] = new Circle{72, 3, 9, "Circle1"};
    shapes[3] = new Circle{14,13,4,"Circle2"};
    shapes[4] = new Square{5, "Square1"};

    for (int i = 0; i < 5; i++)
    {
        shapes[i]->calcArea();
        cout << "Name: " << shapes[i]->getName() << " Area: " << shapes[i]->getArea() << endl;
    }
}

