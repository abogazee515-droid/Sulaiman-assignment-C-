// Assignment: Function With Parameter Example
// C++ rectangle area and perimeter program

#include <iostream>
using namespace std;

int length, width;

void input()
{
    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;
}

int rectangleArea(int a, int b)
{
    return a * b;
}

int rectanglePerimeter(int a, int b)
{
    return 2 * (a + b);
}

void output()
{
    cout << "Area: " << rectangleArea(length, width) << endl;
}

int main()
{
    input();
    output();
    cout << "Perimeter: " << rectanglePerimeter(length, width);

}
