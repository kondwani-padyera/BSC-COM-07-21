#include <iostream>
using namespace std;

int main()
{
    // Dinamic allocation of integer
    int *num = new int(sizeof(int));
    char *text = new char[100];

    // Dinamic allocation of a string
    
    // Get user input
    cout << "Enter a number: ";
    cin >> *num;
    cout << "Enter a word: ";
    cin >> text;

    // Value of integer
    cout << "The value of num is: " << *num << endl;
    cout << "The value of word is: " << text;


    // Deallocate memory
    delete num;
    delete[] text;
}