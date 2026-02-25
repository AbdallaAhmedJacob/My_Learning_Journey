/*
* This program determines if a positive number entered by the user is a prime number.
* It asks for a positive number, validates it, and then checks its primality.
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber(string Message)
{
    float Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

enPrimNotPrime CheckPrime(int Number)
{
    // We only need to check for divisors up to the square root of the number.
    // However, checking up to half the number is also a valid and common approach.
    int M = round(Number / 2);
    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
            return enPrimNotPrime::NotPrime;
    }
    return enPrimNotPrime::Prime;
}

void PrintNumberType(int Number)
{
    switch (CheckPrime(Number))
    {
    case enPrimNotPrime::Prime:
        cout << "The number " << Number << " is a prime number.\n";
        break;
    case enPrimNotPrime::NotPrime:
        cout << "The number " << Number << " is not a prime number.\n";
        break;
    }
}

int main()
{
    PrintNumberType(ReadPositiveNumber("Please enter a positive number:"));
    return 0;
}