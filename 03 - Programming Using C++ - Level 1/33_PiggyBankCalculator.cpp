/*
* This program calculates the total value of money in a piggy bank.
* It asks the user for the number of different denominations (dollars, quarters, etc.),
* then calculates and prints the total value in both pennies and dollars.
*/

#include <iostream>

using namespace std;

struct stPiggyBankContent
{
    unsigned int penny, nickel, dime, quarter, dollar;
};

stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent PiggyBankContent;
    cout << "Please enter the number of dollars:\n";
    cin >> PiggyBankContent.dollar;
    cout << "Please enter the number of quarters:\n";
    cin >> PiggyBankContent.quarter;
    cout << "Please enter the number of dimes:\n";
    cin >> PiggyBankContent.dime;
    cout << "Please enter the number of nickels:\n";
    cin >> PiggyBankContent.nickel;
    cout << "Please enter the number of pennies:\n";
    cin >> PiggyBankContent.penny;

    return PiggyBankContent;
}

float CalculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
    return  PiggyBankContent.penny * 1 + PiggyBankContent.nickel * 5
        + PiggyBankContent.dime * 10 + PiggyBankContent.quarter * 25
        + PiggyBankContent.dollar * 100;
}

float TotalDollars(float TotalPennies)
{
    return TotalPennies / 100;
}

int main()
{
    float TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());
    cout << "\nTotal Pennies = " << TotalPennies << endl;
    cout << "Total Dollars = " << TotalDollars(TotalPennies) << endl;
    return 0;
}