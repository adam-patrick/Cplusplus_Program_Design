/*
Redo Programming Exercise 18 of Chapter 2, taking into account that
your parents buy additional savings bonds for you as follows:

a. If you do not spend any money to buy savings bonds, then because
you had a summer job, your parents buy savings bonds for you in
an amount equal to 1% of the money you save after paying taxes
and buying clothes, other accessories, and school supplies.

b. If you spend up to 25% of your net income to buy savings bonds,
your parents spend $0.25 for each dollar you spend to buy savings
bonds, plus money equal to 1% of the money you save after paying
taxes and buying clothes, other accessories, and school supplies.

c. If you spend more than 25% of your net income to buy savings
bonds, your parents spend $0.40 for each dollar you spend to buy
savings bonds, plus money equal to 2% of the money you save after
paying taxes and buying clothes, other accessories, and school
supplies.
*/

#include <iostream>
#include <iomanip>

using namespace std;

const double TOTALTAX = 0.14;
const double NETINCOMEPERCENT = 0.10;
const double SCHOOLSUPPLIESPERCENT = 0.01;
const double PARENTSBONDSPENDING = 0.50;

int main()
{
	double payPerHour, hoursWorked,beforeTaxIncome, afterTaxIncome, clothesMoneySpent, schoolSupplyMoneySpent, savingsBondMoneySpent,
		parentsBondMoneySpent, savingsBondPercent;

	cout << "Enter pay per hour: ";
	cin >> payPerHour;
	cout << endl;

	cout << "Enter hours worked: ";
	cin >> hoursWorked;
	cout << endl;

	cout << "Enter percent spent on savings bonds (Ex: 0.25): ";
	cin >> savingsBondPercent;
	cout << endl;

	beforeTaxIncome = payPerHour * hoursWorked;
	afterTaxIncome = payPerHour - (payPerHour * TOTALTAX);
	clothesMoneySpent = payPerHour * NETINCOMEPERCENT;
	schoolSupplyMoneySpent = payPerHour * SCHOOLSUPPLIESPERCENT;
	savingsBondMoneySpent = payPerHour * savingsBondPercent;
	parentsBondMoneySpent = 0;

	cout << "Income Before Taxes: $" << beforeTaxIncome << setprecision(2) << fixed << endl;
	cout << "Income After Taxes: $" << afterTaxIncome << setprecision(2) << fixed << endl;
	cout << "Money Spent on Clothes and Other Accessories: $"
		<< clothesMoneySpent << setprecision(2) << fixed << endl;
	cout << "Money Spent on School Supplies: $" << schoolSupplyMoneySpent << setprecision(2) << fixed << endl;
	cout << "Money Spent on Savings Bonds: $" << savingsBondMoneySpent << setprecision(2) << fixed << endl;

	int parentsSpent = int(savingsBondMoneySpent);

	while (parentsSpent > 0) {
		parentsSpent -= 1;
		parentsBondMoneySpent += 0.5;

		if (savingsBondPercent == 0)
        {
            parentsBondMoneySpent += 0.01;
        }
        else if (savingsBondPercent > 0 && savingsBondPercent < 0.25)
        {
            parentsBondMoneySpent += 0.25;
        }
        else
        {
            parentsBondMoneySpent += 0.40;
        }
	}

	cout << "Money Parents Spent on Savings Bonds: $" << parentsBondMoneySpent << endl;

	return 0;
}
