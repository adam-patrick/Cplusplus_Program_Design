/*
a. Define an enumeration type triangleType that has the values scalene,
isosceles, equilateral, and noTriangle.

b. Write a function triangleShape that takes as parameters three numbers,
each of which represents the length of a side of the triangle. The function
should return the shape of the triangle. (Note: In a triangle, the sum of the
lengths of any two sides is greater than the length of the third side.)

c. Write a program that prompts the user to input the length of the sides
of a triangle and outputs the shape of the triangle.
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

enum triangleType {scalene, isosceles, equilateral, noTriangle};

triangleType triangleShape (int length1, int length2, int length3);
string convertTriangle(triangleType triangle);

int main()
{
    int length1, length2, length3;
    triangleType triangle;

    cout << "Enter three integers for triangle sides: ";
    cin >> length1 >> length2 >> length3;
    cout << endl;

    triangle = triangleShape(length1, length2, length3);

    cout << convertTriangle(triangle) << endl;
}

triangleType triangleShape(int length1, int length2, int length3)
{
    triangleType triangle;

    if (length1 == length2 && length2 == length3 && length1 == length3)
    {
        triangle = equilateral;
    }
    else if ((length1 == length2 && length1 != length3) ||
             (length1 == length3 && length1 != length2) ||
             (length2 == length3 && length2 != length1))
    {
        triangle = isosceles;
    }
    else if (length1 != length2 && length1 != length3 && length2 != length3)
    {
        triangle = scalene;
    }
    else
    {
        triangle = noTriangle;
    }
    return triangle;
}


string convertTriangle(triangleType triangle)
{
    string userTriangle;
    switch (triangle)
    {
    case scalene:
        userTriangle = "Scalene Triangle";
        break;
    case isosceles:
        userTriangle = "Isosceles Triangle";
        break;
    case equilateral:
        userTriangle = "Equilateral Triangle";
        break;
    case noTriangle:
        userTriangle = "No Triangle";
        break;
    }
    return userTriangle;
}
