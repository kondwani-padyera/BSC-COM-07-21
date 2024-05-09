#include <iostream>
#include "Rectangle.h"
using namespace std;

float getSide(string sideMessage);

int main()
{
    float length = getSide("length");
    float width = getSide("width");

    Rectangle rectangle1 = Rectangle();
    rectangle1.setLength(length);
    rectangle1.setWidth(width);
    cout << "Area of the rectangle 1: " << rectangle1.getArea() << endl;

    float length1 = getSide("length");
    float width1 = getSide("width");

    Rectangle rectangle2 = Rectangle(length1, width1);
    rectangle1.setLength(length1);
    rectangle1.setWidth(width);
    cout << "Area of the rectangle 2: " << rectangle2.getArea();
}

float getSide(string sideMessage)
{
    float side;
    cout << "Enter " << sideMessage << " of the rectangle: ";
    cin >> side;
    return side;
}
