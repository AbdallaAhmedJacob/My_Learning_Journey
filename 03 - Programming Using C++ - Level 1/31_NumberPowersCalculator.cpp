/*
* This program calculates and prints the powers of a user-defined number.
* It computes the number raised to the powers of 2, 3, and 4,
* and displays each result.
*/

#include <iostream>
#include <cmath>

using namespace std;

struct stNumPower
{
    int Result[3];
    int Num;
};

stNumPower ReadNum()
{
    stNumPower Number;
    cout << "Please enter a number:\n";
    cin >> Number.Num;
    return Number;
}

stNumPower PowerOf2_3_4(stNumPower Number)
{
    for (int i = 0; i < 3; i++)
    {
        Number.Result[i] = pow(Number.Num, i + 2);
    }
    return Number;
}

void PrintPower(stNumPower Number)
{
    for (int i = 0; i < 3; i++)
    {
        cout << Number.Num << " Power " << i + 2 << " = " << Number.Result[i] << "\n";
    }
}

int main()
{
    PrintPower(PowerOf2_3_4(ReadNum()));
    return 0;
}