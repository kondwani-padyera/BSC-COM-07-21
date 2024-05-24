#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"

using namespace std;
int main() {
Rectangle rect;
Triangle trgl;
rect.SetValues(4,5);
trgl.SetValues (4,5);
cout << rect.Area() << '\n';
cout << trgl.Area() << '\n';
return 0;
}