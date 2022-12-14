/*
Write a program that defines the named constant PI, const double
PI = 3.14159;, which stores the value of π. The program should use
PI and the functions listed in Table 6-1 to accomplish the following:
a. Output the value of .
b. Prompt the user to input the value of a double variable r, which stores
the radius of a sphere. The program then outputs the following:
i. The value of 4.0r2, which is the surface area of the sphere.
ii. The value of (4.0/3.0)r3, which is the volume of the sphere.
*/
#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14159;

int main()
{
    double radius, answeri, answerii;

    cout << "The value of the square root of PI is " << sqrt(PI) << endl;

    cout << "Enter the radius of a sphere: ";
    cin >> radius;
    cout << endl;

    answeri = 4.0 * PI * pow(radius, 2);
    answerii = (4.0 / 3.0) * PI * pow(radius, 3);

    cout << "Surface area of sphere: " << answeri << endl;
    cout << "Volume of sphere: " << answerii << endl;

    return 0;
}


