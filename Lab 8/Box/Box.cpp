#include "Box.h"

Box::Box()
{
    length = 0;
    height = 0;
    breadth = 0;
}

Box::Box(const double newLength, const double newBreadth, const double newHeight){
    length = newLength;
    height = newHeight;
    breadth = newBreadth;
}

Box::~Box(){}

double Box::GetVolume(){
    return length * breadth * height;
}

void Box::SetBreadth(const double bre){
    breadth = bre;
}

void Box::SetHeight(const double hei){
    height = hei;
}

void Box::SetLength(const double len){
    length = len;
}

Box Box::operator+(const Box& b){
    Box box;

    box.length = this->length + b.length;
    box.height = this->height + b.height;
    box.breadth = this->breadth + b.breadth;
    return box;

}