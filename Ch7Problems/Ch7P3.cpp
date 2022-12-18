/*
The Programming Example: Pig Latin Strings converts a string into the pig Latin
form, but it processes only one word. Rewrite the program so that it can be used
to process a text of an unspecified length. If a word ends with a punctuation
mark, in the pig Latin form, put the punctuation at the end of the string. For
example, the pig Latin form of Hello! is ello-Hay!. Assume that the text contains
the following punctuation marks: , (comma), . (period), ? (question mark),
; (semicolon), and : (colon). (Your program may store the output in a file.)
*/

//*************************************************************
// Author: D.S. Malik
//
// Program: Pig Latin Strings
// This program reads a string and outputs the pig latin form
// of the string.
//*************************************************************

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isVowel(char ch);
string rotate(string pStr);
string pigLatinString(string pStr);
string findPunctuation (string pStr);

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << endl;

    cout << "The pig Latin form of " << str << " is: "
        << pigLatinString(str) << endl;

    return 0;
}

bool isVowel(char ch)
{
    switch (ch)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'Y':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
        return true;
    default:
        return false;
    }
}

string rotate(string pStr)
{
string::size_type len = pStr.length();
string rStr;
rStr = pStr.substr(1, len - 1) + pStr[0];
return rStr;
}

string pigLatinString(string pStr)
{
    string::size_type len;

    bool foundVowel;

    string::size_type counter;

    if (isVowel(pStr[0]))
        pStr = pStr + "-way";
    else
    {
        pStr = pStr + "-";
        pStr = rotate(pStr);

        len = pStr.length();
        foundVowel = false;

        for (counter = 1; counter < len - 1; counter ++)
        {
            if (isVowel(pStr[0]))
            {
                foundVowel = true;
                break;
            }
            else
                pStr = rotate(pStr);
        }
        if (!foundVowel)
            pStr = pStr.substr(1, len) + "-way";
        else
            pStr = pStr + "ay";
    }
    pStr = findPunctuation(pStr);
    return pStr;
}

string findPunctuation (string pStr)
{
    string::size_type len;
    string rStr;
    len = pStr.length();
    for (int i = 0; i < len - 1; i++)
    {
        if (pStr[i] == '.' || pStr[i] == '?' || pStr[i] == '!' || pStr[i] == ':')
        {
            rStr = pStr[i];
            pStr.erase(remove(pStr.begin(), pStr.end(), pStr[i]), pStr.end());
            pStr = pStr + rStr;
        }
    }
    return pStr;
}

