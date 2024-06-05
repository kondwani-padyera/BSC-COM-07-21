#include <iostream>
using namespace std;

int main()
{
    // Dynamic allocation of an integer
    int *num = new int;

    // Dynamic allocation of a string
    string *text = new string;

    // Get user input
    cout << "Enter a number: ";
    cin >> *num;

    // Close the cin object
    cin.ignore();
    cout << "Enter a text: ";

    // Get a whole line from the user instead of the first word as in the case of cin
    getline(cin, *text);

    // Printing the values of the variables
    cout << "The value of num is: " << *num << endl;
    cout << "The value of text is: " << *text;

    // Deallocate memory
    delete num;
    delete text;
}