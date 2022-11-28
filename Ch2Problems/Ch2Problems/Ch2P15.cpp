/*
Write a program to implement and test the algorithm that you designed for
Exercise 15 of Chapter 1. (You may assume that the value of p 5 3.141593.
In your program, declare a named constant PI to store this value.)

15. Given the radius, in inches, and price of a pizza, design an algorithm
to find the price of the pizza per square inch.
*/

#include <iostream>

using namespace std;

const double PI = 3.141593;

int main()
{
	double radius, pizzaPrice, pricePerSquareInch;

	cout << "Enter radius in inches: ";
	cin >> radius;
	cout << endl;

	cout << "Enter price: ";
	cin >> pizzaPrice;
	cout << endl;

	pricePerSquareInch = pizzaPrice / (PI * (radius * radius));

	cout << "Price per square inch: $" << pricePerSquareInch << endl;

	return 0;
}