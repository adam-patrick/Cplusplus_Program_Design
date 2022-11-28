/*
One metric ton is approximately 2,205 pounds. Write a program that
prompts the user to input the amount of rice, in pounds, a bag can hold.
The program outputs the number of bags needed to store one metric
ton of rice.
*/

#include <iostream>

using namespace std;

const int TON = 2205;

int main()
{
	double ricePounds, bagsPerMetricTon;

	cout << "Enter pounds of rice 1 bag can hold: ";
	cin >> ricePounds;
	cout << endl;

	bagsPerMetricTon = TON / ricePounds;

	cout << "Bags needed: " << round(bagsPerMetricTon) << endl;

	return 0;

}