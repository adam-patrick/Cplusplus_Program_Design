/*
Consider the following program segment:
//include statement(s)
//using namespace statement
int main()
{
//variable declaration
//executable statements
//return statement
}
a. Write C11 statements that include the header files iostream and string.
b. Write a C11 statement that allows you to use cin, cout, and endl
without the prefix std::.
c. Write C11 statements that declare and initialize the following
named constants: SECRET of type int initialized to 11 and RATE of
type double initialized to 12.50.
d. Write C11 statements that declare the following variables:
num1, num2, and newNum of type int; name of type string; and
hoursWorked and wages of type double.
e. Write C11 statements that prompt the user to input two integers
and store the first number in num1 and the second number in num2.
f. Write a C11 statement(s) that outputs the values of num1 and num2,
indicating which is num1 and which is num2. For example, if num1 is
8 and num2 is 5, then the output is:
The value of num1 = 8 and the value of num2 = 5.
g. Write a C11 statement that multiplies the value of num1 by 2,
adds the value of num2 to it, and then stores the result in newNum.
Then, write a C11 statement that outputs the value of newNum.
h. Write a C11 statement that updates the value of newNum by adding
the value of the named constant SECRET to it. Then, write a C11 statement
that outputs the value of newNum with an appropriate message.
i. Write C11 statements that prompt the user to enter a person’s last
name and then store the last name into the variable name.
*/

#include <iostream>
#include <string>

using namespace std;

const int SECRET = 11;
const double RATE = 12.50;

int main()
{
	int num1, num2, newNum;
	string name;
	double hoursWorked, wages;

	cout << "Enter two integers: ";
	cin >> num1 >> num2;
	cout << endl;

	cout << "The value of num1 = " << num1
		<< " and the value of num2 = " << num2
		<< "." << endl;

	newNum = (num1 * 2) + num2;
	newNum += SECRET;

	cout << "The value of newNum = " << newNum
		<< "." << endl;

	cout << "Enter your last name: ";
	cin >> name;
	cout << endl;

	cout << "Enter a decimal number between 0 and 70: ";
	cin >> hoursWorked;
	cout << endl;

	wages = RATE * hoursWorked;

	cout << "Name: " << name << endl;
	cout << "Pay Rate: " << RATE << endl;
	cout << "Hours Worked: " << hoursWorked << endl;
	cout << "Salary: $" << wages << endl;

	return 0;
}