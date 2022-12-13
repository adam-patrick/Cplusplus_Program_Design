/*
Write a program that prompts the user to input an integer and then
outputs both the individual digits of the number and the sum of the
digits. For example, it should output the individual digits of 3456 as
3 4 5 6, output the individual digits of 8030 as 8 0 3 0, output the
individual digits of 2345526 as 2 3 4 5 5 2 6, output the individual
digits of 4000 as 4 0 0 0, and output the individual digits of -2345
as 2 3 4 5.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userNumber;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> userNumber;
    cout << endl;

    for (int i = 0; i < userNumber.length(); i++)
    {
        cout << userNumber[i] << " ";
        sum += int(userNumber[i] - '0');
    }
    cout << endl;
    cout << "Sum: " << sum << endl;

    return 0;
}
