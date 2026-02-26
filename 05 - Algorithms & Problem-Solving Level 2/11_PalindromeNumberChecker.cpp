/*
* This program checks if a number entered by the user is a palindrome number.
* A palindrome number reads the same forwards and backward.
* The program uses a helper function to reverse the number for comparison.
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

int ReverseNumber(int Number)
{
    int Remainder = 0;
    int ReversedNumber = 0;

    while (Number > 0)
    {
        Remainder = Number % 10;
        Number /= 10;
        ReversedNumber = ReversedNumber * 10 + Remainder;
    }
    return ReversedNumber;
}

bool IsPalindromeNumber(int Number)
{
    return Number == ReverseNumber(Number);
}

void PrintResult(int Number)
{
    if (IsPalindromeNumber(Number))
        cout << "Yes, it's a palindrome number." << endl;
    else
        cout << "No, it's not a palindrome number." << endl;
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a positive number: ");
    PrintResult(Number);
    return 0;
}