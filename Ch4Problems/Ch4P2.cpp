/*
Write a program that prompts the user to input three numbers. The
program should then output the numbers in ascending order.
*/

#include <iostream>

using namespace std;

int main()
{
    double num1, num2, num3;

    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << endl;

    if (num1 > num2 && num2 > num3)
    {
        cout << "Ascending Order: " << num3 << " " << num2 << " " << num1;
    }
    else if (num1 > num3 && num3 > num2)
    {
        cout << "Ascending Order: " << num2 << " " << num3 << " " << num1;
    }
    else if (num2 > num3 && num3 > num1)
    {
        cout << "Ascending Order: " << num1 << " " << num3 << " " << num2;
    }
    else if (num2 > num1 && num1 > num3)
    {
        cout << "Ascending Order: " << num3 << " " << num1 << " " << num2;
    }
    else if (num3 > num2 && num2 > num1)
    {
        cout << "Ascending Order: " << num1 << " " << num2 << " " << num3;
    }
    else
    {
        cout << "Ascending Order: " << num2 << " " << num1 << " " << num3;
    }
    cout << endl;

    return 0;
}
