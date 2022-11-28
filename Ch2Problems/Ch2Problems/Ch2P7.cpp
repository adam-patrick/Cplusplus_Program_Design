/*
Write a program that prompts the user to input a decimal number and
outputs the number rounded to the nearest integer.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double userNumber;

	cout << "Enter a decimal number: ";
	cin >> userNumber;
	cout << endl;

	int roundedNumber = round(userNumber);

	cout << "Your number rounded is: "
		<< roundedNumber << endl;

	return 0;
}