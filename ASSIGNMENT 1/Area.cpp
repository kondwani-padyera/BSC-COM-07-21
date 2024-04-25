#include <iostream>
#include <cmath>

using namespace std;

void displayMenu();
double calculateSquare(double length);
double calculateRectangle(double length, double width);
double calculateTriangle(double height, double base);
void checkChoice(double *choice, string message = "Enter valid length: ");

int main()
{
    displayMenu();
}

// Returns area of a circle
double calculateSquare(double length)
{
    return length * length;
}

// Returns area of a rectangle
double calculateRectangle(double length, double width)
{
    return length * width;
}

// Returns area of a triangle
double calculateTriangle(double height, double base)
{
    return 0.5 * height * base;
}

// Displays menu
void displayMenu()
{
    int choice;
    cout << "\nPlease select the area of the shape to calculate" << endl;
    cout << "1. Square\n2. Rectangle\n3. Triangle\n4. Quit Program\n"
         << endl;
    cout << "Enter selection: ";
    cin >> choice;
    checkChoice((double *)&choice, "Enter a number between 1 and 4");

    switch (choice)
    {
        double length, width, height;
    case 1:
        cout << "Enter length of the square: ";
        cin >> length;
        checkChoice(&length);
        cout << "Area of a square with length of " << length << " is " << calculateSquare(length) << endl;
        displayMenu();
        break;
    case 2:
        cout << "Enter length of the rectangle: ";
        cin >> length;
        checkChoice(&length);
        cout << "Enter width of the rectangle: ";
        cin >> width;
        checkChoice(&width);
        cout << "Area of a rectangle with length of " << length << " and width of " << width << " is " << calculateRectangle(length, width) << endl;
        displayMenu();
        break;
    case 3:
        cout << "Enter height of the triangle: ";
        cin >> height;
        checkChoice(&height);
        cout << "Enter length of the triangle: ";
        cin >> length;
        checkChoice(&length);
        cout << "Area of a triangle with height of " << height << " and length of " << length << " is " << calculateTriangle(height, length) << endl;
        displayMenu();
        break;
    case 4:
        cout << "Thank you for using our service";
        exit(0);
    default:
        cout << "Your input was: " << choice << " which is invalid input\nPlease enter a valid input!!";
        displayMenu();
    }
}

// Checks if input is valid
void checkChoice(double *choice, string message)
{
    while (true)
    {
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << message;
            cin >> *choice;                              
        }
        else
        {
            break;
        }
    }
}