/*
* This program reads a positive integer from the user and prints its digits
* in reverse order. It demonstrates how to extract digits from a number
* using a while loop and the modulo operator.
*/

#include <iostream>
#include <string>

using namespace std;

unsigned ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 1);

    return Number;
}

void PrintDigits(int Number)
{
    int Remainder;

    cout << "The digits in reverse order are:\n";
    while (Number > 0)
    {
        Remainder = Number % 10;
        cout << Remainder << endl;
        Number = Number / 10;
    }
}

int main()
{
    PrintDigits(ReadPositiveNumber("Please enter a positive number:"));
    return 0;
}