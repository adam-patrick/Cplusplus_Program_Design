/*
Modify Programming Exercise 26 so that the user can also specify the
area that can be painted with one gallon of paint.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double doorL, doorW, window1L, window1W,
		window2L, window2W, bookshelfL,
		bookshelfW, roomL, roomW, roomH,
		roomSquareFeet, gallonsNeeded,
		areaPaintable;

	cout << "Enter door's length and width (seperated by one space): ";
	cin >> doorL >> doorW;
	cout << endl;

	cout << "Enter first window's length and width (seperated by one space): ";
	cin >> window1L >> window1W;
	cout << endl;

	cout << "Enter second window's length and width (seperated by one space): ";
	cin >> window2L >> window2W;
	cout << endl;

	cout << "Enter bookshelf's length and width (seperated by one space): ";
	cin >> bookshelfL >> bookshelfW;
	cout << endl;

	cout << "Enter room's length, width, and height (seperated by one space each): ";
	cin >> roomL >> roomW >> roomH;
	cout << endl;

	cout << "Enter area that can be painted with one gallon: ";
	cin >> areaPaintable;
	cout << endl;

	roomSquareFeet = (roomL * roomW * roomH) - ((doorL * doorW) + (window1L * window1W) + (window2L * window2W)
		+ (bookshelfL * bookshelfW));

	gallonsNeeded = roomSquareFeet / areaPaintable;

	cout << "Amount of cans of paint needed: " << floor(gallonsNeeded) << endl;

	return 0;
}