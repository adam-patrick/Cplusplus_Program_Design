/*
Write a program that mimics a calculator. The program should take as
input two integers and the operation to be performed. It should then
output the numbers, the operator, and the result. (For division, if the
denominator is zero, output an appropriate message.)
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    double a, b;
    string sign;

    cout << "Enter two integers and a math operation symbol: ";
    cin >> a >> b >> sign;
    cout << endl;

    cout << fixed << showpoint << setprecision(2);

    if (sign == "+")
    {
        cout << a << " " << sign << " " << b <<  " = " << a + b << endl;
    }
    else if (sign == "-")
    {
        cout << a << " " << sign << " " << b <<  " = " << a - b << endl;
    }
    else if (sign == "*")
    {
        cout << a << " " << sign << " " << b <<  " = " << a * b << endl;
    }
    else if (sign == "/")
    {
         if (b == 0)
        {
            cout << "Cannot divide by zero." << endl;
        }
        else
        {
            cout << a << " " << sign << " " << b <<  " = " << a / b << endl;
        }
    }
    else
    {
        cout << "Invalid entry." << endl;
    }

    return 0;
}

