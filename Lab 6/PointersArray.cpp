#include <iostream>
using namespace std;
int main()
{
    int numbersArray[5];

    int *pPointer = nullptr;

    // assign the address to the first element to the pointer
    pPointer = numbersArray;

    *pPointer = 10; // assign a value to the first element

    /*increment the pointer using pointer arithmetic to assign the address of the second element to the pointer*/
    pPointer++;
    *pPointer = 20; // assign a value to the second element

    // assign the address of the third element to the pointer
    pPointer = &numbersArray[2];
    *pPointer = 30; // assign a value to the third element

    /*assign the address of the fourth element to the pointer using pointer arithmetic*/
    pPointer = numbersArray + 3;
    *pPointer = 40; // assign a value to the fourth element

    // assign the address to the first element to the pointer
    pPointer = numbersArray;

    /*assign a value to the fifth element using indirection and pointer pointer arithmetic*/
    *(pPointer + 4) = 50;

    // iterate and output all the elements in the array
    for (int n = 0; n < 5; n++)
    {
        cout << numbersArray[n] << ", ";
    }
    return 0;
}