/*
* This program counts the frequency of a specific digit within a positive integer.
* It uses a loop and mathematical operations to extract and compare each digit.
*/

#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << "\n";
        cin >> Number;
    } while (Number < 1);

    return Number;
}

short CountDigitFrequency(int Number, short DigitToCheck)
{
    short FreqCount = 0;
    short Remainder = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;

        if (DigitToCheck == Remainder)
            FreqCount++;
    }
    return FreqCount;
}

void PrintResult(short DigitToCheck, short Result)
{
    cout << "\nDigit " << DigitToCheck << " frequency is "
        << Result << " time(s)." << endl;
}

int main()
{
    int Number = ReadPositiveNumber("Please enter the main number:");
    short DigitToCheck = ReadPositiveNumber("Please enter one digit to check:");

    short Result = CountDigitFrequency(Number, DigitToCheck);

    PrintResult(DigitToCheck, Result);

    return 0;
}