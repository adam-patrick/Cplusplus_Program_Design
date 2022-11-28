/*
Write a program that prompts the capacity, in gallons, of an automobile
fuel tank and the miles per gallon the automobile can be driven.
The program outputs the number of miles the automobile can be driven
without refueling.
*/

#include <iostream>

using namespace std;

int main()
{
	int gallons;
	double milesPerGallon, milesDriven;

	cout << "Enter automobile fuel tank gallons: ";
	cin >> gallons;
	cout << endl;

	cout << "Enter miles per gallon the automobile"
		" can be driven: ";
	cin >> milesPerGallon;
	cout << endl;

	milesDriven = gallons * milesPerGallon;

	cout << "The automobile can drive " << milesDriven 
		<< " miles without needing to be refueled." << endl;

	return 0;
}