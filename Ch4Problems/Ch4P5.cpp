/*
In a right triangle, the square of the length of one side is equal to the
sum of the squares of the lengths of the other two sides. Write a program
that prompts the user to enter the lengths of three sides of a
triangle and then outputs a message indicating whether the triangle is
a right triangle.
*/

#include <iostream>

using namespace std;

int main()
{
    double side1, side2, side3, multipliedSides, oneSide;

    cout << "Enter 3 sides of a triangle: ";
    cin >> side1 >> side2 >> side3;
    cout << endl;

    multipliedSides = (side2 * side2) + (side3 * side3);
    oneSide = side1 * side1;

    if (oneSide == multipliedSides)
    {
        cout << "This IS a right triangle.";
    }
    else
    {
        cout << "This is NOT a right triangle.";
    }
    return 0;
}
