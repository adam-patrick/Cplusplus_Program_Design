#include <iostream>

using namespace std;

int main()
{
    double a, b, c, quad;

    cout << "Enter the values of a, b, and c: ";
    cin >> a >> b >> c;
    cout << endl;

    quad = (b*b) - (4 * a * c);

    if (quad == 0)
    {
        cout << "Single (repeated) Root";
    }
    else if (quad < 0)
    {
        cout << "Two Complex Roots";
    }
    else
    {
        cout << "Two Real Roots";
    }
    return 0;
}
