/*
Write a value-returning function, isVowel, that returns the value
true if a given character is a vowel and otherwise returns false.
*/

#include <iostream>

using namespace std;

bool isVowel(char letter);

int main()
{
    char letter;

    cout << "Enter a letter: ";
    cin >> letter;
    cout << endl;

    isVowel(letter);

    return 0;
}

bool isVowel(char letter)
{
    switch(letter)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        cout << letter << " is a vowel." << endl;
        return true;
    default:
        cout << letter << " is not a vowel." << endl;
        return false;
    }
}
