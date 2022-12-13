//*******************************************************
// Author: D.S. Malik
//
// Program: Counts zeros, odds, and evens
// This program counts the number of odd and even numbers.
// The program also counts the number of zeros.
//********************************************************

#include <iostream>
#include <iomanip>

using namespace std;

const int N = 20;

int main()
{
	int counter;
	int number;

	int zeros = 0;
	int odds = 0;
	int evens = 0;

	cout << "Please enter " << N << " integers, "
		<< "pisitive, negative, or zeros."
		<< endl;

	cout << "The numbers you entered are: " << endl;

	for (counter = 1; counter <= N; counter++)
	{
		cin >> number;
		cout << number << " ";

		switch (number % 2)
		{
		case 0:
			evens++;
			if (number == 0)
				zeros++;
			break;
		case 1:
		case -1: 
			odds++;
		}
	}

	cout << endl;

	cout << "there are " << evens << " evens, "
		<< "which includes " << zeros << " zeros."
		<< endl;
	cout << "The number of odd numbers is: " << odds
		<< endl;

	return 0;

}