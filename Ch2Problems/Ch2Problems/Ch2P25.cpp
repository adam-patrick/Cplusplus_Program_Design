/*
Repeat Programming Exercise 24, but the wire is to be bent in the form
of a circle. In this case, the user specifies the length of the wire and the
program outputs the radius and area of the circle. (You may assume that
π = 3.1416. Also declare it as a named constant.)
*/

#include <iostream>

using namespace std;

const double PI = 3.1416;

int main() {

	double length, radius, area;

	cout << "Enter length of wire: ";
	cin >> length;
	cout << endl;

	radius = (length / PI) / 2;
	area = 2 * PI * radius;

	cout << "Radius: " << radius << endl;
	cout << "Area: " << area << endl;

	return 0;

}