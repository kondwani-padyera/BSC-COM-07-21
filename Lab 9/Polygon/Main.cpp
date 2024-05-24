#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;
int main()
{
    Rectangle rect;
    Triangle trgl;
    Polygon poly;
    Polygon *pPoly1 = &rect;
    Polygon *pPoly2 = &trgl;
    Polygon *pPoly3 = &poly;
    pPoly1->SetValues(4, 5);
    pPoly2->SetValues(4, 5);
    pPoly3->SetValues(4, 5);
    cout << pPoly1->Area() << '\n';
    cout << pPoly2->Area() << '\n';
    cout << pPoly3->Area() << '\n';
    return 0;
}