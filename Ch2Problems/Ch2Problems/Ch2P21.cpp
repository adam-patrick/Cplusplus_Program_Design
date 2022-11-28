/*
Newton’s law states that the force, F, between two bodies of masses M1
and M2 is given by:

in which k is the gravitational constant and d is the distance between the
bodies. The value of k is approximately 6.67 X 10^-8 dyn. cm^2/g^2. Write
a program that prompts the user to input the masses of the bodies and
the distance between the bodies. The program then outputs the force
between the bodies.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

const double k = 6.67 * pow(10, -8);

using namespace std;

int main()
{
	double mass1, mass2, distance, force;

	cout << "Enter masses 1 and 2 (seperated by one space): ";
	cin >> mass1 >> mass2;
	cout << endl;

	cout << "Enter the distance between the two bodies: ";
	cin >> distance;
	cout << endl;

	force = k * ((mass1 * mass2) / pow(distance, 2));

	cout <<  "Force: " << force <<  endl;

	return 0;
}