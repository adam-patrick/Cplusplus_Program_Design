/*
Redo Programming Exercise 16 so that the user can also input the cost
of producing one liter of milk and the profit on each carton of milk.
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int amountOfMilk, milkCartonsNeeded;
	double cartonsNeeded, milkCost, milkProfit;

	cout << "Enter amount of milk produced (in liters): ";
	cin >> amountOfMilk;
	cout << endl;

	cartonsNeeded = amountOfMilk / 3.78;

	cout << "Enter the cost of producing 1 liter of milk: ";
	cin >> milkCost;
	cout << endl;

	cout << "Enter the profit per carton of milk: ";
	cin >> milkProfit;
	cout << endl;

	milkCost *= cartonsNeeded;
	milkProfit *= cartonsNeeded;

	cout << "Cartons needed: " << round(cartonsNeeded) << endl;
	cout << "Cost: $" << milkCost << endl;
	cout << "Profit: $" << milkProfit << endl;

	return 0;
}