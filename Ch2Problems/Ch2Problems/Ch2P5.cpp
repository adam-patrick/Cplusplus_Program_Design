/*
Consider the following C11 program in which the statements are in
the incorrect order. Rearrange the statements so that it prompts the user
to input the radius of a circle and outputs the area and circumference of
the circle.
*/

// Below code is already rearranged into correct order

#include <iostream>

using namespace std;

const double PI = 3.14;

int main()
{
	double radius;
	double area;
	double circumference;

	cout << "Enter the radius: ";
	cin >> radius;
	cout << endl;

	area = PI * radius * radius;

	cout << "Area = " << area << endl;
	circumference = 2 * PI * radius;
	cout << "Circumference = " << circumference << endl;
	
	return 0;
}