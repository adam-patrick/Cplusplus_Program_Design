/*
A milk carton can hold 3.78 liters of milk. Each morning, a dairy farm
ships cartons of milk to a local grocery store. The cost of producing one
liter of milk is $0.38, and the profit of each carton of milk is $0.27. Write
a program that does the following:
a. Prompts the user to enter the total amount of milk produced in the
morning.
b. Outputs the number of milk cartons needed to hold milk. (Round
your answer to the nearest integer.)
c. Outputs the cost of producing milk.
d. Outputs the profit for producing milk.
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
	milkCost = cartonsNeeded * 0.38;
	milkProfit = cartonsNeeded * 0.27;

	cout << "Cartons needed: " << round(cartonsNeeded) << endl;
	cout << "Cost: $" << milkCost << endl;
	cout << "Profit: $" << milkProfit << endl;

	return 0;
}