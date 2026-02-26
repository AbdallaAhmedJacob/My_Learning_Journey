/*
* This program prints all perfect numbers from 1 up to a user-specified number (N).
* It includes a function to check if a number is perfect and a loop to print the results.
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

bool IsPerfectNumber(unsigned Number)
{
    unsigned Sum = 0;

    for (unsigned Counter = (Number / 2); Counter >= 1; Counter--)
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
    cout << "\nPerfect Numbers up to " << Number << " are:\n";
    for (int i = 1; i <= Number; i++)
    {
        if (IsPerfectNumber(i))
        {
            cout << i << endl;
        }
    }
}

int main()
{
    unsigned Number = ReadPositiveNumber("Please enter a positive number:");
    PrintResult(Number);
    return 0;
}