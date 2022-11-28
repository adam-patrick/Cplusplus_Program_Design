/*
For each used car a salesperson sells, the commission is paid as follows:
$20 plus 30% of the selling price in excess of the cost of the car. Typically,
the minimum selling price of the car is the cost of the car plus $200 and the
maximum selling price is the cost of the car and $2,000. Write a program
that prompts the user to enter the salesperson’s fixed commission, the percentage
of the commission, the purchasing cost of the car, the minimum
and maximum amount to be added to the purchasing cost to determine
the minimum and maximum selling price, and outputs minimum and
maximum selling price of the car and the salesperson’s commission range.
*/

#include <iostream>

using namespace std;

int main()
{
	double commissionAmount, commissionPercent,
		purchaseCost, minimumAmount, maximumAmount,
		minimumSalePrice, maximumSalePrice,
		minimumCommission, maximumCommission;

	cout << "Enter fixed commission amount: ";
	cin >> commissionAmount;
	cout << endl;

	cout << "Enter percent commission (decimal value): ";
	cin >> commissionPercent;
	cout << endl;

	cout << "Enter purchasing cost of the car: ";
	cin >> purchaseCost;
	cout << endl;

	cout << "Enter minimum and maximum amount"
		" added to selling price (seperated by one space): ";
	cin >> minimumAmount >> maximumAmount;
	cout << endl;

	minimumSalePrice = purchaseCost + minimumAmount;
	maximumSalePrice = purchaseCost + maximumAmount;
	minimumCommission = (minimumSalePrice * commissionPercent) + commissionAmount;
	maximumCommission = (maximumSalePrice * commissionPercent) + commissionAmount;

	cout << "Minimum Sale Price: $" << minimumSalePrice << endl;
	cout << "Maximum Sale Price: $" << maximumSalePrice << endl;
	cout << "Commission Range: $" << minimumCommission <<
		" - $" << maximumCommission << endl;

	return 0;
}