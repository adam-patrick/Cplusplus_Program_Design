/*
Write a program that prompts the user to enter five test scores and then
prints the average test score. (Assume that the test scores are decimal
numbers.)
*/

#include <iostream>

using namespace std;

int main()
{
	double num1, num2, num3, num4, num5, averageScore;

	cout << "Enter 5 test scores: ";
	cin >> num1 >> num2 >> num3 >> num4 >> num5;
	cout << endl;

	averageScore = (num1 + num2 + num3 + num4 + num5) / 5;

	cout << "Average is " << averageScore << endl;

	return 0;
}