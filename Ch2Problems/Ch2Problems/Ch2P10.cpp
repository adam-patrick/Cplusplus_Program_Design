/*
Write a program that prompts the user to input five decimal numbers.
The program should then add the five decimal numbers, convert the
sum to the nearest integer, and print the result.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double num1, num2, num3, num4, num5, sum;

	cout << "Enter 5 decimal numbers: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	cout << endl;

	sum = num1 + num2 + num3 + num4 + num5;

	cout << "Rounded result is " << round(sum) << endl;

	return 0;
}