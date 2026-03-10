// Assignment: Function With Parameter Example
// C++ rectangle area and perimeter program

#include <iostream>
using namespace std;

// Function to  calculate rectangle area
int rectangleArea(int length, int width)
{
    return length * width;
}

// Function to calculate rectangle perimeter
int rectanglePerimeter(int length, int width)
{
    return 2 * (length + width);
}

int main()
{
    int length, width;

    // Input from user
    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    // Output results
    cout << "Area: " << rectangleArea(length, width) << endl;
    cout << "Perimeter: " << rectanglePerimeter(length, width);

    return 0;
}
