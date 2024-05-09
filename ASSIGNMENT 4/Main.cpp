#include <iostream>
#include <cmath>      // For mathematical functions like pow() and constants like M_PI
#include "Square.h"  // Include the header files for Square, Circle, and Triangle classes
#include "Circle.h"
#include "Triangle.h"
using namespace std;
using namespace shapes;

// Class to calculate the area of different shapes
class Area
{
public:
    // Function to calculate the area of a circle
    static float calculateArea(Circle circle)
    {
        return pow(circle.getRadius(), 2) * M_PI; // Formula: pi * r^2
    }

    // Function to calculate the area of a square
    static float calculateArea(Square square)
    {
        return pow(square.getLength(), 2); // Formula: side^2
    }

    // Function to calculate the area of a triangle
    static float calculateArea(Triangle triangle)
    {
        return triangle.getBase() * triangle.getHeight() * 0.5; // Formula: (base * height) / 2
    }
};

// Function to display the main menu and handle user input
void displayHome()
{
    int choice;
    do
    {
        // Display menu options
        cout << "1. Calculate the area of square\n"
             << "2. Calculate the area of circle\n"
             << "3. Calculate the area of triangle\n"
             << "4. Quit" << endl;
        // Take user input
        cin >> choice;

        switch (choice)
        {
        case 1: // Calculate the area of a square
        {
            float length;
            cout << "Enter the side of the square: ";
            cin >> length;
            Square square(length); // Create a Square object with the provided side length
            cout << "Area of the square is: " << Area::calculateArea(square) << endl; // Call the static function to calculate the area
            break;
        }
        case 2: // Calculate the area of a circle
        {
            float radius;
            cout << "Enter the radius of the circle: ";
            cin >> radius;
            Circle circle(radius); // Create a Circle object with the provided radius
            cout << "Area of the circle is: " << Area::calculateArea(circle) << endl; // Call the static function to calculate the area
            break;
        }
        case 3: // Calculate the area of a triangle
        {
            float base, height;
            cout << "Enter the base of the triangle: ";
            cin >> base;
            cout << "Enter the height of the triangle: ";
            cin >> height;
            Triangle triangle(base, height); // Create a Triangle object with the provided base and height
            cout << "Area of the triangle is: " << Area::calculateArea(triangle) << endl; // Call the static function to calculate the area
            break;
        }
        case 4: // Quit the program
            cout << "Exiting program." << endl;
            return;
        default: // Handle invalid input
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (true); // Repeat until the user chooses to quit
}

// Main function
int main()
{
    displayHome(); // Call the function to display the main menu
    return 0; // Return 0 to indicate successful program execution
}
