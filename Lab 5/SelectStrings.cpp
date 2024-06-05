#include <iostream>
using namespace std;

int main()
{
    // Array of strings
    string array[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    // Size of the array
    const int array_size = 8;

    // Print all strings that start with B
    for (int i = 0; i < array_size; i++)
    {
        // Check the first letter of every word
        if (array[i][0] == 'B')
        {
            cout << array[i] << endl;
        }
    }
}