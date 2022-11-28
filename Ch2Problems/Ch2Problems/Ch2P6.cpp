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
a. Write C11 statements that include the header files iostream and
string.
b. Write a C11 statement that allows you to use cin, cout, and endl
without the prefix std::.
c. Write C11 statements that declare the following variables: name of
type string and studyHours of type double.
d. Write C11 statements that prompt and input a string into name
and a double value into studyHours.
e. Write a C11 statement that outputs the values of name and
studyHours with the appropriate text. For example, if the value of
name is "Donald" and the value of studyHours is 4.5, the output is:
Hello, Donald! on Saturday, you need to study 4.5 hours for the exam.
f. Compile and run your program.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	double studyHours;

	cout << "Enter a name: ";
	cin >> name;
	cout << endl;

	cout << "Enter amount of hours studied: ";
	cin >> studyHours;
	cout << endl;

	cout << "Hello, " << name << "! on Saturday, "
		<< "you need to study " << studyHours
		<< " for the exam."
		<< endl;

	return 0;
}