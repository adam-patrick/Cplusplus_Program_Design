/*
You found an exciting summer job for five weeks. It pays, say, $15.50 per
hour. Suppose that the total tax you pay on your summer job income is
14%. After paying the taxes, you spend 10% of your net income to buy
new clothes and other accessories for the next school year and 1% to buy
school supplies. After buying clothes and school supplies, you use 25%
of the remaining money to buy savings bonds. For each dollar you spend
to buy savings bonds, your parents spend $0.50 to buy additional savings
bonds for you. Write a program that prompts the user to enter the pay
rate for an hour and the number of hours you worked each week. The
program then outputs the following:
a. Your income before and after taxes from your summer job.
b. The money you spend on clothes and other accessories.
c. The money you spend on school supplies.
d. The money you spend to buy savings bonds.
e. The money your parents spend to buy additional savings bonds for
you.
*/

#include <iostream>
#include <iomanip>

using namespace std;

const double TOTALTAX = 0.14;
const double NETINCOMEPERCENT = 0.10;
const double SCHOOLSUPPLIESPERCENT = 0.01;
const double SAVINGSBONDPERCENT = 0.25;
const double PARENTSBONDSPENDING = 0.50;

int main()
{
	double payPerHour, hoursWorked,beforeTaxIncome,
		afterTaxIncome, clothesMoneySpent,
		schoolSupplyMoneySpent, savingsBondMoneySpent,
		parentsBondMoneySpent;

	cout << "Enter pay per hour: ";
	cin >> payPerHour;
	cout << endl;

	cout << "Enter hours worked: ";
	cin >> hoursWorked;
	cout << endl;

	beforeTaxIncome = payPerHour * hoursWorked;
	afterTaxIncome = payPerHour - (payPerHour * TOTALTAX);
	clothesMoneySpent = payPerHour * NETINCOMEPERCENT;
	schoolSupplyMoneySpent = payPerHour * SCHOOLSUPPLIESPERCENT;
	savingsBondMoneySpent = payPerHour * SAVINGSBONDPERCENT;
	parentsBondMoneySpent = 0;

	cout << "Income Before Taxes: $" << beforeTaxIncome << setprecision(2) << fixed << endl;
	cout << "Income After Taxes: $" << afterTaxIncome << setprecision(2) << fixed << endl;
	cout << "Money Spent on Clothes and Other Accessories: $"
		<< clothesMoneySpent << setprecision(2) << fixed << endl;
	cout << "Money Spent on School Supplies: $" << schoolSupplyMoneySpent << setprecision(2) << fixed << endl;
	cout << "Money Spent on Savings Bonds: $" << savingsBondMoneySpent << setprecision(2) << fixed << endl;

	int parentsSpent = int(savingsBondMoneySpent); // created for while loop purposes

	while (parentsSpent > 0) {						// calculate money parents spent
		parentsSpent -= 1;
		parentsBondMoneySpent += 0.5;
	}

	cout << "Money Parents Spent on Savings Bonds: $" << parentsBondMoneySpent << endl;

	return 0;
}

