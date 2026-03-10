// Assignment: Function Without Parameter Example
// C++ rectangle area program
#include <iostream>
using namespace std;

// Variables for rectangle dimensions
int length, width;
//function to enter the rectangle dimensions
void input()
{ 
    // Ask user to enter rectangle length
    cout << "Enter length: ";
    cin >> length;
// Ask user to enter rectangle width
    cout << " Enter width: ";
    cin >> width;
}
// Function to calculate rectangle area
int rectangleArea()
{
    return length * width;
}
// Function to display result
void output()
{
    cout << "The area is: " << rectangleArea();
}
// Main function
int main()
{
    input();
    output();

}










