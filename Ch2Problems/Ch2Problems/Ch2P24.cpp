/*
A piece of wire is to be bent in the form of a rectangle to put around a
picture frame. The length of the picture frame is 1.5 times the width.
Write a program that prompts the user to input the length of the wire
and outputs the length and width of the picture frame.
*/

#include <iostream>

using namespace std;

int main()
{
	double length, width, frame;

	cout << "Enter length of wire: ";
	cin >> length;
	cout << endl;

	width = length * 1.5;
	
	cout << "Frame length: " << length << endl;
	cout << "Frame width: " << width << endl;

	return 0;
}