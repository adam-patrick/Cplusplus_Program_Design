/*
To make a profit, a local store marks up the prices of its items by a certain
percentage. Write a C11 program that reads the original price of
the item sold, the percentage of the marked-up price, and the sales tax
rate. The program then outputs the original price of the item, the percentage
of the mark-up, the store’s selling price of the item, the sales tax
rate, the sales tax, and the final price of the item. (The final price of the
item is the selling price plus the sales tax.)
*/

#include <iostream>

using namespace std;

int main()
{
	double sold, percentage,percentDisplay, soldAmount, 
		salesTaxRate, salesTaxRateDisplay, salesTax, 
		finalPrice;

	cout << "Enter price sold: ";
	cin >> sold;
	cout << endl;

	cout << "Enter markup percentage (no symbol or decimal needed): ";
	cin >> percentage;
	cout << endl;

	cout << "Enter sales tax percentage: (no symbol or decimal needed)";
	cin >> salesTaxRate;
	cout << endl;

	soldAmount = (sold * (percentage * 100)) + sold;
	salesTax = soldAmount * (salesTaxRate * 100);
	finalPrice = soldAmount + salesTax;
	percentDisplay = percentage * 100;
	salesTaxRateDisplay = salesTaxRate * 100;

	cout << "Original Price: $" << sold << endl;
	cout << "Percentage Markup: " << percentDisplay
		<< " %" << endl;
	cout << "Selling Price: $" << soldAmount << endl;
	cout << "Sales Tax Rate: " << salesTaxRateDisplay
		<< " %" << endl;
	cout << "Sales Tax: $" << salesTax << endl;
	cout << "Final Price: $" << finalPrice << endl;

	return 0;
}