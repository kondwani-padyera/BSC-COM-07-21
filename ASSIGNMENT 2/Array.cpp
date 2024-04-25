#include <iostream>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter number of rows (between 1 and 4): ";
    cin >> row;

    while (row < 1 || row > 3)
    {
        cout << "Enter number of rows (between 1 and 4): ";
        cin >> row;
    }

    cout << "Enter number of columns (between 1 and 4): ";
    cin >> col;

    while (col < 1 || col > 3)
    {
        cout << "Enter number of columns (between 1 and 4): ";
        cin >> col;
    }

    // Dynamic allocate memory of  a 2D array
    int *array = new int(row * col * sizeof(int));

    // Initialize elements of array 
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter number: ";
            cin >> *(array + count);
            count++;
        }
        cout << endl;
    }

    // Print all elements of the array
    count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << *(array + count) << " ";
            count++;
        }
        cout << endl;
    }
}