/*
Write a program that prompts the user to input the number of quarters,
dimes, and nickels. The program then outputs the total value of the
coins in pennies.
*/

#include <iostream>

using namespace std;

const double NICKEL = 0.05;
const double DIME = 0.10;
const double QUARTER = 0.25;
const double PENNY = 0.01;

int main()
{
	double userNickels, userDimes, userQuarters, userPennies;

	cout << "Enter amount of nickels: ";
	cin >> userNickels;
	cout << endl;

	cout << "Enter amount of dimes: ";
	cin >> userDimes;
	cout << endl;

	cout << "Enter amount of quarters: ";
	cin >> userQuarters;
	cout << endl;

	userNickels *= NICKEL;
	userDimes *= DIME;
	userQuarters *= QUARTER;
	userPennies = (userNickels + userDimes + userQuarters) / PENNY;

	cout << "Value in Pennies: " << userPennies << endl;

	return 0;
}