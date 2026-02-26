/*
* This program counts the frequency of each digit (0-9) within a positive integer.
* It iterates through each digit and calls a helper function to count its occurrences in the number.
*/

#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int CountDigitFrequency(short DigitToCheck, int Number)
{
    int Freq = 0;
    int Remainder = 0;

 
    int TempNumber = Number;

    while (TempNumber > 0)
    {
        Remainder = TempNumber % 10;
        TempNumber = TempNumber / 10;

        if (DigitToCheck == Remainder)
        {
            Freq++;
        }
    }
    return Freq;
}

 
void PrintAllDigitsFrequency(int Number)
{
    cout << "\nAll digits frequency for number " << Number << " are:\n";

    for (int i = 0; i < 10; i++)
    {
        short DigitFrequency = CountDigitFrequency(i, Number);

        if (DigitFrequency > 0)
        {
            cout << "Digit " << i << " Frequency is "
                << DigitFrequency << " Time(s).\n";
        }
    }
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a positive number:");
    PrintAllDigitsFrequency(Number);
    return 0;
}