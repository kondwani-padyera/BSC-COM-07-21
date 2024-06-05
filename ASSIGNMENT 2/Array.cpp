#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter number of rows (between 1 and 4): ";
    cin >> row;

    // Check if input is btwn 1 and 3
    while (row < 1 || row > 3)
    {
        cout << "Enter number of rows (between 1 and 3): ";
        cin >> row;
    }

    cout << "Enter number of columns (between 1 and 3): ";
    cin >> col;

    // Check if input is btwn 1 and 3
    while (col < 1 || col > 3)
    {
        cout << "Enter number of columns (between 1 and 3): ";
        cin >> col;
    }

    // Dynamic allocate memory of a row of an array
    int** array = new int*[row];

    // Dynamic allocate memory of col for each row;
    for (int i = 0; i < row; i++){
        array[i] = new int[col];
    }


    // Initialize elements of array 
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter number: ";
            cin >> array[i][j];
        }
        cout << endl;
    }

    // Print all elements of the array
    count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}