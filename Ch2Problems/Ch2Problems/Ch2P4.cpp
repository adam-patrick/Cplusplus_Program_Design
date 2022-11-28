/*
Repeat Programming Exercise 3 by declaring num1, num2, and num3, and
average of type double. Store 75.35 into num1, -35.56 into num2, and
15.76 into num3.
*/

#include <iostream>						// Part A

using namespace std;					// Part B

int main() {

	double num1, num2, num3, average;		// Part C

	num1 = 75.35;
	num2 = -35.56;
	num3 = 15.76;
	average = (num1 + num2 + num3) / 3;

	cout << "num1 is " << num1 << endl;
	cout << "num2 is " << num2 << endl;
	cout << "num3 is " << num3 << endl;
	cout << "average is " << average << endl;

	return 0;
}