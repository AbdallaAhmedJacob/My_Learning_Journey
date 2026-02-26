/*
* This program calculates and prints the sum of the digits of a number
* entered by the user. It uses a loop and mathematical operations to
* extract and sum each digit.
*/

#include <iostream>
#include <string>

using namespace std;

unsigned ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 1);

    return Number;
}

int SumOfDigits(int Number)
{
    int Sum = 0;
    int Remainder;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Sum += Remainder;
        Number = Number / 10;
    }
    return Sum;
}

void PrintResult(string Message, int Number)
{
    cout << Message << Number << endl;
}

int main()
{
    int Sum = SumOfDigits(ReadPositiveNumber("Please enter a positive number:"));
    PrintResult("\nSum of Digits = ", Sum);
    return 0;
}