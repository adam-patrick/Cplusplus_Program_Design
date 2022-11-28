// Given length in inches, this program outputs the equivalent
// length in feet and remaining inch(es).

#include <iostream>

using namespace std;

int main()
{
	int inches; // variable to store total inches
	inches = 100;
	cout << inches << " inch(es) = "; // output the value of
									// inches and the equal sign
	cout << inches / 12 << " feet (foot) and "; // output maximum
											// number of feet (foot)
	cout << inches % 12 << " inch(es)" << endl;

	return 0;
}