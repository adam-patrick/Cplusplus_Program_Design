/*
Redo Programming Exercise 16 of Chapter 4 so that all of the named constants
are defined in a namespace.

Ch4P16:

A new author is in the process of negotiating a contract for a new
romance novel. The publisher is offering three options. In the first
option, the author is paid $5,000 upon delivery of the final manuscript
and $20,000 when the novel is published. In the second option, the
author is paid 12.5% of the net price of the novel for each copy of the
novel sold. In the third option, the author is paid 10% of the net price
for the first 4,000 copies sold, and 14% of the net price for the copies
sold over 4,000. The author has some idea about the number of copies
that will be sold and would like to have an estimate of the royalties
generated under each option. Write a program that prompts the
author to enter the net price of each copy of the novel and the estimated
number of copies that will be sold. The program then outputs the royalties under each
option and the best option the author could choose. (Use appropriate named constants to
store the special values such as royalty rates and fixed royalties.)
*/

#include <iostream>

namespace royalties
{
    const int deliveryPay = 5000;
    const int publishingPay = 20000;
    const double netPricePercentagePerCopy = 0.125;
    const double netPricePercentage4k = 0.10;
    const double netPricePercentage4kPlus = 0.14;
}

using namespace std;

int main()
{
    int priceOfNovel;
    int numberSold;
    int authorPayAmount;
    int optionC1, optionC2, optionC3;

    double optionA, optionB, optionC;

    cout << "Enter price per novel and amount sold: ";
    cin >> priceOfNovel >> numberSold;
    cout << endl;

    optionA = royalties::deliveryPay + royalties::publishingPay;

    optionB = (priceOfNovel * royalties::netPricePercentagePerCopy) * numberSold;

    if (numberSold > 4000)
    {
        optionC1 = numberSold - 4000;
        optionC2 = (priceOfNovel * royalties::netPricePercentage4k) * 4000;
        optionC3 = (priceOfNovel * royalties::netPricePercentage4kPlus) * optionC1;
        optionC = optionC2 + optionC3;
    }
    else
    {
        optionC = (priceOfNovel * royalties::netPricePercentage4k) * numberSold;
    }

    cout << "Option A Payout: $" << optionA << endl;
    cout << "Option B Payout: $" << optionB << endl;
    cout << "Option C Payout: $" << optionC << endl;

    cout << "Recommended Option: ";
    if (optionA > optionB && optionB > optionC)
        cout << "Option A" << endl;
    else if (optionB > optionA && optionA > optionC)
        cout << "Option B" << endl;
    else
        cout << "Option C" << endl;

    return 0;
}
