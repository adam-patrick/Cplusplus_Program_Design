/*
In an elementary school, a mixture of equal amounts of nuts and dried
fruit is provided during lunch. Suppose that the number of calories in
each pound of nuts is 0.70 times the number of calories in each pound of
dried fruit. Write a program that prompts the user to input the number
of students in the elementary school, the number of calories required
for each student from the mixture, and the number of calories in each
pound of nuts. The program outputs the amount of nuts and dried
fruit needed for the students. (For simplicity, assume that each student
requires the same amount of calories.)
*/

#include <iostream>

using namespace std;

int main() {
	double numberStudents, caloriesPerStudent,
		caloriesInNuts, caloriesInFruit, 
		totalCalories, totalCaloriesRequired, finalTotal;

	cout << "Enter number of students: ";
	cin >> numberStudents;
	cout << endl;

	cout << "Enter required calories per student: ";
	cin >> caloriesPerStudent;
	cout << endl;

	cout << "Enter calories in nuts per pound: ";
	cin >> caloriesInNuts;
	cout << endl;

	caloriesInFruit = caloriesInNuts / 0.70;
	totalCalories = caloriesInFruit + caloriesInNuts;
	totalCaloriesRequired = numberStudents * caloriesPerStudent;
	finalTotal = totalCaloriesRequired / totalCalories;

	cout << "Pounds of nuts and fruits needed: " << finalTotal << endl;

	return 0;
}