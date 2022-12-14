/*
Write a program that prompts the user to input a sequence of characters
and outputs the number of vowels. (Use the function isVowel
written in Programming Exercise 2.)
*/

#include <iostream>
#include <string>

using namespace std;

int hasVowels(string letters);

int main()
{
    string letters;

    cout << "Enter some letters and shit: ";
    cin >> letters;
    cout << endl;

    cout << "Found " << hasVowels(letters) << " vowels.";
}

int hasVowels(string letters)
{
    int count = 0;
    int other = 0;
    for (int i = 0; i < letters.length(); i++)
    {
        if (letters[i] == 'a' || letters[i] == 'A' ||
            letters[i] == 'e' || letters[i] == 'e' ||
            letters[i] == 'i' || letters[i] == 'I' ||
            letters[i] == 'o' || letters[i] == 'O' ||
            letters[i] == 'u' || letters[i] == 'U')
            count++;
        else
            other++;
    }
    return count;
}

