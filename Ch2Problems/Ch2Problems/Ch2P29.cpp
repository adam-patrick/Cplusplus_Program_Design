/*
A contractor orders, say, 30 cubic yards of premixed concrete to construct
a patio that is to be, say, four inches thick. The length of the patio
is to be, say, twice the width. Write a program that prompts the user
to specify the amount of premixed concrete (in cubic yards) ordered,
the thickness of the patio (in inches), and the ratio of length and width.
The program then outputs the length and width of the patio (in feet).
(1 cubic yard 5 27 cubic feet.) (To find the square root of a decimal
number, include the header file cmath using the statement #include
<cmath>, in your program. The function sqrt, included in this header
file, determines the square root of a decimal number. For example,
sqrt(16.0) = 4.0.)
*/

#include <iostream>
#include <cmath>

using namespace std;

const double feetPerYard = 27;

int main()
{
	double concrete, patioThickness, lwRatio,
		patioFeet, feetConcrete, length, width;

	cout << "Enter cubic yards of concrete: ";
	cin >> concrete;
	cout << endl;

	cout << "Enter patio thickness: ";
	cin >> patioThickness;
	cout << endl;

	cout << "Enter ratio of length and width: ";
	cin >> lwRatio;
	cout << endl;

	patioFeet = patioThickness * 12;
	feetConcrete = sqrt(concrete);
	length = patioFeet * lwRatio;
	width = feetConcrete / lwRatio;

	cout << "Length: " << length << endl;
	cout << "Width: " << width << endl;

	return 0;
}