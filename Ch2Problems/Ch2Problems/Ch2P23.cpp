/*
Cindy uses the services of a brokerage firm to buy and sell stocks. The
firm charges 1.5% service charges on the total amount for each transaction,
buy or sell. When Cindy sells stocks, she would like to know if she gained or lost on a particular investment. Write a program that
allows Cindy to input the number of shares sold, the purchase price of
each share, and the selling price of each share. The program outputs the
amount invested, the total service charges, amount gained or lost, and
the amount received after selling the stock.
*/

#include <iostream>

using namespace std;

const double SERVICECHARGE = 0.15;

int main()
{
	double sharesSold, purchasePricePerShare,
		sellingPricePerShare, amountInvested,
		totalCharges, amountGained, amountLost,
		amountReceived;

	cout << "Enter number of shares sold: ";
	cin >> sharesSold;
	cout << endl;

	cout << "Enter purchase price per share: ";
	cin >> purchasePricePerShare;
	cout << endl;

	cout << "Enter selling price per share: ";
	cin >> sellingPricePerShare;
	cout << endl;

	amountInvested = sharesSold * purchasePricePerShare;
	totalCharges = amountInvested * SERVICECHARGE;

	cout << "Amount invested: $" << amountInvested << endl;
	cout << "Total service charges: $" << totalCharges << endl;

	amountGained = 0;
	amountLost = 0;

	if (purchasePricePerShare > sellingPricePerShare) {
		amountLost = (purchasePricePerShare - sellingPricePerShare) * sharesSold;
		amountReceived = amountInvested - amountLost - totalCharges;
		cout << "Amount lost after selling stock: $" << amountLost << endl;
	}
	else if (purchasePricePerShare < sellingPricePerShare) {
		amountGained = (sellingPricePerShare - purchasePricePerShare) * sharesSold;
		amountReceived = amountInvested + amountGained - totalCharges;
		cout << "Amount gained after selling stock: $" << amountGained << endl;
	}
	
	cout << "Amount received: $" << amountReceived << endl;

	return 0;
}