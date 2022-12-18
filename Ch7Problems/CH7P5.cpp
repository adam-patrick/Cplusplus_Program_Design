/*
Write a program that can be used to calculate the federal tax. The tax is
calculated as follows: For single people, the standard exemption is $4,000;
for married people, the standard exemption is $7,000. A person can also put
up to 6% of his or her gross income in a pension plan. The tax rates are as
follows: If the taxable income is:

Between $0 and $15,000, the tax rate is 15%.

?Between $15,001 and $40,000, the tax is $2,250 plus 25% of the taxable
income over $15,000.

Over $40,000, the tax is $8,460 plus 35% of the taxable income over
$40,000.

Prompt the user to enter the following information:

Marital status

If the marital status is “married,” ask for the number of children under
the age of 14

Gross salary (If the marital status is “married” and both spouses have
income, enter the combined salary.)

Percentage of gross income contributed to a pension fund

Your program must consist of at least the following functions:

a. Function getData: This function asks the user to enter the relevant
data.

b. Function taxAmount: This function computes and returns the tax owed.
*/

#include <iostream>

using namespace std;

double taxAmount (string maritalStatus, double childrenUnder14, double grossSalary, double percentToPension);
void getData();

int main()
{
    getData();

    return 0;
}

double taxAmount (string maritalStatus, double childrenUnder14, double grossSalary, double percentToPension)
{
    double taxableIncome, personalExemption,
            pensionAmount, tax, federalTax;

    // Calculate amount to remove for pension
    if (percentToPension > 0)
        pensionAmount = grossSalary * percentToPension;

    // Calculate exemptions
    if (maritalStatus == "Single")
        personalExemption = 5500;
    else if (maritalStatus == "Married")
        personalExemption = 7000 - (1500 * childrenUnder14);

    // Calculate total taxable amount before tax rate calculations
    taxableIncome = grossSalary - percentToPension - personalExemption;

    // Calculate amount of taxable income
    if (taxableIncome > 0 && taxableIncome < 15000)
        tax = taxableIncome * 0.15;
    else if (taxableIncome> 15001 && taxableIncome < 40000)
        tax = ((taxableIncome - 15000) * 0.25) + 2500;
    else
        tax = ((taxableIncome - 40000) * 0.35 + 8460);

    // Calculate total federal tax amount
    federalTax = taxableIncome - tax;

    return federalTax;
}

void getData()
{
    string maritalStatus;
    double childrenUnder14, grossSalary, percentToPension;

    cout << "Single or Married: ";
    cin >> maritalStatus;
    cout << endl;

    if (maritalStatus == "Married")
    {
        cout << "Number of children under 14: ";
        cin >> childrenUnder14;
        cout << endl;
    }

    cout << "Gross salary (if Married, enter sum of both salaries): ";
    cin >> grossSalary;
    cout << endl;

    cout << "Percent of gross income to contribute to pension (decimal value): ";
    cin >> percentToPension;
    cout << endl;

    cout << "Amount of taxable income: $"
    << taxAmount(maritalStatus, childrenUnder14, grossSalary, percentToPension)
    << endl;
}


