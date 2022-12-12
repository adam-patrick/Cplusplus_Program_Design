/*
Write a program that prompts the user to input an integer between
0 and 35. If the number is less than or equal to 9, the program should
output the number; otherwise, it should output A for 10, B for 11, C for
12, . . . , and Z for 35. (Hint: Use the cast operator, static_cast<char>(),
for numbers >= 10.)
*/

#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter a number between 0 and 35: ";
    cin >> number;
    cout << endl;

    switch(number)
    {
    case 0:
        cout << "0";
        break;

    case 1:
        cout << "1";
        break;

    case 2:
        cout << "2";
        break;

    case 3:
        cout << "3";
        break;

    case 4:
        cout << "4";
        break;

    case 5:
        cout << "5";
        break;

    case 6:
        cout << "6";
        break;

    case 7:
        cout << "7";
        break;

    case 8:
        cout << "8";
        break;

    case 9:
        cout << "9";
        break;

    case 10:
        cout << "A";
        break;

    case 11:
        cout << "B";
        break;

    case 12:
        cout << "C";
        break;

    case 13:
        cout << "D";
        break;

    case 14:
        cout << "E";
        break;

    case 15:
        cout << "F";
        break;

    case 16:
        cout << "G";
        break;

    case 17:
        cout << "H";
        break;

    case 18:
        cout << "I";
        break;

    case 19:
        cout << "J";
        break;

    case 20:
        cout << "K";
        break;

    case 21:
        cout << "L";
        break;

    case 22:
        cout << "M";
        break;

    case 23:
        cout << "N";
        break;

    case 24:
        cout << "O";
        break;

    case 25:
        cout << "P";
        break;

    case 26:
        cout << "Q";
        break;

    case 27:
        cout << "R";
        break;

    case 28:
        cout << "S";
        break;

    case 29:
        cout << "T";
        break;

    case 30:
        cout << "U";
        break;

    case 31:
        cout << "V";
        break;

    case 32:
        cout << "W";
        break;

    case 33:
        cout << "X";
        break;

    case 34:
        cout << "Y";
        break;

    case 35:
        cout << "Z";
        break;

    default:
        cout << "Invalid Input";
    }

    return 0;
}
