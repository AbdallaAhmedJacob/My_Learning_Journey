/*
* This program prints all prime numbers from 1 up to a user-specified number (N).
* It includes a function to check if a number is prime and a loop to print the results.
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << "\n";
        cin >> Number;
    } while (Number < 1);

    return Number;
}

bool IsPrimeNumber(int Number)
{
    if (Number <= 1)
        return false;


    for (int i = 2; i <= round(sqrt(Number)); i++)
    {
        if (Number % i == 0)
        {
            return false;
        }
    }

    return true;
}

void PrintResult(int Number)
{
    cout << "\nPrime Numbers from 1 to " << Number << " are:\n";
    for (int i = 1; i <= Number; i++)
    {
        if (IsPrimeNumber(i))
            cout << i << "   ";
    }
    cout << endl;
}

int main()
{
    PrintResult(ReadNumber("Please enter a positive number:"));
    return 0;
}