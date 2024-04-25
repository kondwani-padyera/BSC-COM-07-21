#include <iostream>
using namespace std;

int main()
{
    // Declare pointer and initialize it
    // So that it does not store a random address
    int *pPonter = nullptr;

    int integerVar = 5;

    // Assign pointer to address of object
    pPonter = &integerVar;

    // Output the value of integerVar
    cout << "Address of integerVar: " << &integerVar << endl;

    // Output the address assigned to pPointer
    cout << "pPointer: " << pPonter << endl;

    // Output the address of pPointer
    cout << "Address of pPointer: " << &pPonter << endl; 
}