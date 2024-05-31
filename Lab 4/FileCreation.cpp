#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    // Create and open a text
    ofstream myFile("ExampleFile.txt");

    // Close the file
    myFile.close();

    return 0;
}