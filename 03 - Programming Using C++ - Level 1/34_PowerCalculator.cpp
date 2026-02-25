/*
* This program calculates and prints the result of a number raised to a given power.
* It gets both the number (base) and the power (exponent) from the user,
* then computes and displays the final result.
*/

#include <iostream>
#include <cmath>

using namespace std;

struct stNumPower
{
    int Num;
    int Power;
    int Result;
};

stNumPower ReadNum()
{
    stNumPower Number;

    cout << "Please enter the base number:\n";
    cin >> Number.Num;

    cout << "Please enter the exponent:\n";
    cin >> Number.Power;

    return Number;
}

stNumPower CalculatePower(stNumPower Number)
{
    Number.Result = pow(Number.Num, Number.Power);
    return Number;
}

void PrintPower(stNumPower Number)
{
    cout << Number.Num << " raised to the power of " << Number.Power << " is: " << Number.Result << "\n";
}

int main()
{
    PrintPower(CalculatePower(ReadNum()));
    return 0;
}