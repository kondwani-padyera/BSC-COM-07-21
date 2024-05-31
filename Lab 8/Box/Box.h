#pragma once
#include <iostream>
using namespace std;

class Box
{
public:
    Box();
    Box(const double newLength, const double newBreadth, const double newHeight);
    ~Box();
    double GetVolume();
    void SetLength(double len);
    void SetBreadth(double bre);
    void SetHeight(double hei);

    //overload + sign to add two boxes
    Box operator+(const Box& b);
    private:
        double length;
        double height;
        double breadth;
};