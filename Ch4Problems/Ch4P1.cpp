#include <iostream>

using namespace std;

int main()
{
    double userNumber;

    cout << "Enter a number: ";
    cin >> userNumber;
    cout << endl;

    if (userNumber < 0)
    {
        cout << "Number is negative.";
    }
    else if (userNumber == 0)
    {
        cout << "Number is zero.";
    }
    else
    {
        cout << "Number is positive.";
    }

    cout << endl;

    return 0;
}
