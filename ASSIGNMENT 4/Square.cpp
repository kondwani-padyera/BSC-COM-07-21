#include "Square.h"

shapes::Square::Square(){
    this->length = 0;
}

shapes::Square::Square(float length){
    this->length = length;
}

shapes::Square::~Square(){}

void shapes::Square::setLength(float length){
    this->length = length;
}

float shapes::Square::getLength(){
    return this->length;
}