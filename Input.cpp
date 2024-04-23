#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number between 5 and 10: ";
    cin >> num;

    while (true)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Sorry, you entered an invalid number, please try again: " << endl;
            cin >> num;
        }
        else if (num < 5 || num > 10)
        {
            cout << "You entered " << num << ". Please enter a number between 5 and 10" << endl;
            cin >> num;
        }
        else
        {
            cout << "Your input value(" << num << ") has been accepted";
            break;
        }
    }
}