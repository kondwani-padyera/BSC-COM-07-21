#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

bool isInteg(string input);

int main()
{
    int num;
    string input;
    cout << "Enter a number between 5 and 10: ";
    cin >> input;

    while (true)
    {
        // If the input is not an integer
        if (!(isInteg(input)))
        {
            cout << "Sorry, you entered an invalid number, please try again: " << endl;
            cin >> input;
        }
        else
        {
            // Convert string to integer
            num = stoi(input);

            // If the number is not between 5 and 10
            if (num < 5 || num > 10)
            {
                cout << "You entered " << num << ". Please enter a number between 5 and 10" << endl;
                cin >> input;
            }

            // If the number is between 5 and 10
            else
            {
                cout << "Your input value(" << num << ") has been accepted";
                break;
            }
        }
    }
}

// Returns true if input is integer otherwise false
bool isInteg(string input)
{
    bool isInt = false;
    for (int i = 0; i < input.length(); i++)
    {
        // Check if there is character which is not a number to conclude that the input is not a number
        if (!isdigit(input[i]))
        {
            isInt = false;
            break;
        }
        else
        {
            isInt = true;
        }
    }
    return isInt;
}