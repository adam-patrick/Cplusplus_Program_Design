/*
Write a program that prompts the user to input a string. The program
then uses the function substr to remove all the vowels from the string.
For example, if str = "There", then after removing all the vowels, str =
"Thr". After removing all the vowels, output the string. Your program must
contain a function to remove all the vowels and a function to determine
whether a character is a vowel.
*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isVowel(char str);
string removeVowels(string str);

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << endl;

    str = removeVowels(str);
    cout << str << endl;
}

bool isVowel(char str)
{
    if (str == 'a' || str == 'A'
        || str == 'e' || str == 'E'
        || str == 'i' || str == 'I'
        || str == 'o' || str == 'O'
        || str == 'u' || str == 'U')
        return true;
    else
        return false;
}

string removeVowels(string str)
{
    str.erase(remove(str.begin(), str.end(), 'a'), str.end());
    str.erase(remove(str.begin(), str.end(), 'A'), str.end());
    str.erase(remove(str.begin(), str.end(), 'e'), str.end());
    str.erase(remove(str.begin(), str.end(), 'E'), str.end());
    str.erase(remove(str.begin(), str.end(), 'i'), str.end());
    str.erase(remove(str.begin(), str.end(), 'I'), str.end());
    str.erase(remove(str.begin(), str.end(), 'o'), str.end());
    str.erase(remove(str.begin(), str.end(), 'O'), str.end());
    str.erase(remove(str.begin(), str.end(), 'u'), str.end());
    str.erase(remove(str.begin(), str.end(), 'U'), str.end());
    return str;
}
