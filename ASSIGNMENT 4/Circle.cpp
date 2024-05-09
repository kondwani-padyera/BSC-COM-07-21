#include "Circle.h"

shapes::Circle::Circle(){
  this->radius = 0;
}

shapes::Circle::Circle(float radius){
  this->radius = radius;
}

shapes::Circle::~Circle(){}

void shapes::Circle::setRadius(float radius){
  this->radius = radius;
}

float shapes::Circle::getRadius(){
  return this->radius;
}