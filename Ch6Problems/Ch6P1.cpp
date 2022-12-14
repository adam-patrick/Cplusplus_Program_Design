
/*
a. Write a program that uses the function isPalindrome given in Example
6-6 (Palindrome). Test your program on the following strings:
"madam", "abba", "22", "67876", "444244", and "trymeuemyrt"

b. Modify the function isPalindrome of Example 6-6 so that when
determining whether a string is a palindrome, cases are ignored,
that is, uppercase and lowercase letters are considered the same.
*/

#include <iostream>

using namespace std;

bool isPalindrome(string str);

int main()
{
	string str;

	cout << "Enter a word: ";
	cin >> str;
	cout << endl;

	isPalindrome(str);

	return 0;
}

bool isPalindrome(string str)
{
	int length = str.length(); //Step 1
	for (int i = 0; i < length / 2; i++) //Step 2
		if (str[i] != str[length - 1 - i])
		{
			cout << "Not a Palindrome!";
			return false;
		}
		else if (str[i] == str[length - 1 - i] && toupper(str[i]) != islower(str[i]))
		{
			cout << "Is a Palindrome!" << endl;
			return true;
		}
	return false;
}
