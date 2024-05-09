#include "Triangle.h"

shapes::Triangle::Triangle(){
    this->base = 0;
    this->height = 0;
}

shapes::Triangle::Triangle(float base, float height){
    this->base = base;
    this->height = height;
}

shapes::Triangle::~Triangle(){

}

void shapes::Triangle::setBase(float base){
    this->base = base;
}

void shapes::Triangle::setHeight(float height){
    this->height = height;
}

float shapes::Triangle::getBase(){
    return this->base;
}

float shapes::Triangle::getHeight(){
    return this->height;
}