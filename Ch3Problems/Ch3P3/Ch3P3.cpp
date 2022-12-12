#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // 1 kilogram = 2.2 pounds

    double userKilos, userPounds;

    cout << "Enter weight in kilograms: ";
    cin >> userKilos;
    cout << endl;

    userPounds = userKilos * 2.2;

    cout << fixed << showpoint << setprecision(2);
    cout << "Weight in pounds: " << userPounds << " lbs.";

    return 0;
}
