/*
A room has one door, two windows, and a built-in bookshelf and it needs
to be painted. Suppose that one gallon of paint can paint 120 square
feet. Write a program that prompts the user to input the lengths and
widths of the door, each window, the bookshelf; and the length, width,
and height of the room (in feet). The program outputs the amount of
paint needed to paint the walls of the room.
*/

#include <iostream>
#include <cmath>

using namespace std;

const double SQUAREFEETPERGALLON = 120;

int main()
{
	double doorL, doorW, window1L, window1W,
		window2L, window2W, bookshelfL,
		bookshelfW, roomL, roomW, roomH,
		roomSquareFeet, gallonsNeeded;

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

	roomSquareFeet = (roomL * roomW * roomH) - ((doorL * doorW) + (window1L * window1W) + (window2L * window2W)
		+ (bookshelfL * bookshelfW));

	gallonsNeeded = roomSquareFeet / SQUAREFEETPERGALLON;

	cout << "Amount of cans of paint needed: " << floor(gallonsNeeded) << endl;

	return 0;
}