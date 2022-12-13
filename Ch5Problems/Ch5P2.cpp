/*
The following program uses this series to find the approximate value
of π. However, the statements are in the incorrect order, and there is
also a bug in this program. Rearrange the statements and remove the
bug so that this program can be used to approximate π.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double pi = 0;
    long i;
    long n;

    cout << "Enter the value of n: ";
    cin >> n;
    cout << endl;

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            pi = pi + (1.0 / (2.0 * i + 1));
        }
        else
        {
            pi = pi - (1.0 / (2.0 * i + 1));
        }
    }

    pi = 4 * pi;

    cout << endl << "pi = " << pi << endl;

    return 0;
}
