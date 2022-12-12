#include <iomanip>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

    string firstName, lastName, job;

	int salary, travelTime, cupsSold;
	double distanceTraveled, bonusPercent, taxesPercent, cost, paycheck, milesPerHour, salesAmount;

	ifstream inFile;
	ofstream outFile;

	inFile.open("inData.txt");
	outFile.open("outData.txt");
	outFile << fixed << showpoint << setprecision(2);

    cout << "Processing data..." << endl;
	inFile >> firstName >> lastName >> job;
	outFile << "Name: " << firstName << " " << lastName << ", Department: " << job << endl;
	inFile >> salary >> bonusPercent >> taxesPercent;
	paycheck = salary + (salary * (bonusPercent / 100)) - (salary * (taxesPercent /100));
    outFile << "Monthly Gross Salary: $" <<  salary << ", Monthly Bonus: " << bonusPercent << "%, Taxes: " << taxesPercent << endl;
	outFile << "Paycheck: $" << paycheck << endl;
	outFile << "\n";
	inFile >> distanceTraveled >> travelTime;
	milesPerHour = distanceTraveled / travelTime;
    outFile << "Distance Traveled: " << distanceTraveled << " miles, Traveling Time: " << travelTime << " hours" << endl;
	outFile << "Average Speed: " << milesPerHour << " miles per hour" << endl;;
	outFile << "\n";
	inFile >> cupsSold >> cost;
    salesAmount = cost * cupsSold;
	outFile << "Number of Coffee Cups Sold: " << cupsSold << ", Cost: $" << cost << " per cup" << endl;;
	outFile << "Sales Amount = $" << salesAmount;

	inFile.close();
	outFile.close();

	return 0;
}
