/*
* This program calculates the sum of a sequence of numbers entered by the user.
* The loop continues until the user enters the sentinel value -99.
*/

#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string Message)
{
    int Num;
    cout << Message;
    cin >> Num;
    return Num;
}

bool IsSentinel(int Number)
{
    return Number == -99;
}

int SumNumbers()
{
    int Number;
    int Counter = 1;
    int Sum = 0;

    do
    {
        Number = ReadNumber("Please enter number " + to_string(Counter) + " (or -99 to stop):\n");

        if (IsSentinel(Number))
        {
            break;
        }

        Sum += Number;
        Counter++;

    } while (true); // The loop is controlled by the 'break' statement.

    return Sum;
}

void PrintSum(int Number)
{
    cout << "\nSum = " << Number << endl;
}

int main()
{
    PrintSum(SumNumbers());
    return 0;
}