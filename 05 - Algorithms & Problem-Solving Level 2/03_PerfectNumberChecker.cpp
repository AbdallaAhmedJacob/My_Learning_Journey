/*
* This program checks if a number entered by the user is a perfect number.
* A perfect number is a positive integer that is equal to the sum of its proper positive divisors.
*/

#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 1);

    return Number;
}

bool IsPerfectNumber(int Number)
{
    int Sum = 0;

    for (int Counter = Number / 2; Counter >= 1; Counter--)
    {
        if (Number % Counter == 0)
        {
            Sum += Counter;
        }
    }

    return (Number == Sum);
}

void PrintResult(int Number)
{
    if (IsPerfectNumber(Number))
    {
        cout << Number << " is a perfect number." << endl;
    }
    else
    {
        cout << Number << " is not a perfect number." << endl;
    }
}

int main()
{
    int Number = ReadPositiveNumber("Please enter a positive number:");
    PrintResult(Number);
    return 0;
}