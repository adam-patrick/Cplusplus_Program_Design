/*
Write a C11 program that prompts the user to input the elapsed time
for an event in seconds. The program then outputs the elapsed time in
hours, minutes, and seconds. (For example, if the elapsed time is 9,630
seconds, then the output is 2:40:30.)
*/

#include <iostream>

using namespace std;

int main()
{
	int seconds, minutes, hours, minutesLeft;

	cout << "Enter event time in seconds: ";
	cin >> seconds;
	cout << endl;

	hours = seconds / 3600;
	minutesLeft = seconds % 3600;
	minutes = minutesLeft / 60;
	seconds = minutesLeft % 60;

	cout << hours << "\:" << minutes << "\:" << seconds << endl;

	return 0;
}