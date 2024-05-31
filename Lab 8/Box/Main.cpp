#include <iostream>
#include "Box.h"
using namespace std;

int main(){
    Box box1;
    Box box2;
    Box box3;
    double volume = 0;

    box1.SetLength(6);
    box1.SetHeight(7);
    box1.SetBreadth(5);

    box2.SetLength(12);
    box2.SetHeight(10);
    box2.SetBreadth(13);

    volume = box1.GetVolume();
    cout << "Volume of box 1: " << volume << endl;

    volume = box2.GetVolume();
    cout << "Volume of box 1: " << volume << endl;

    box3 = box1 + box2;
    volume = box3.GetVolume();
    cout << "Volume of box3 is: " << volume << endl;
}