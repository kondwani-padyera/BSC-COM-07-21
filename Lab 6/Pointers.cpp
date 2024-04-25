#include <iostream>
using namespace std;

int main()
{
    int firstValue, secondValue;

    int *pPointer = nullptr;

    //Assign pointer with the address of firstvalue
    pPointer = &firstValue;
    *pPointer = 10; // Indirection

    //Assign pointer with the address of secondValue
    pPointer = &secondValue;
    *pPointer = 20; // Indirection

    cout << "FirstValue is: " << firstValue << endl;
    cout << "SecondValue is: " << secondValue << endl;


}