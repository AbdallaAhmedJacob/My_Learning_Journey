/*
* This program calculates the sum of all odd numbers from 1 up to a user-defined number.
* It uses an enum to classify numbers as Odd or Even for clarity.
*/

#include <iostream>

using namespace std;

enum enOddOrEven { Odd, Even };

int ReadNum()
{
    int Num;
    cout << "Please enter a number:\n";
    cin >> Num;
    return Num;
}

enOddOrEven CheckOddOrEven(int Num)
{
    if (Num % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}

int SumOddNumbers(int N)
{
    int Sum = 0;
    cout << "Sum of odd numbers = ";
    for (int counter = 1; counter <= N; counter++)
    {
        if (CheckOddOrEven(counter) == enOddOrEven::Odd)
        {
            Sum += counter;
        }
    }
    return Sum;
}

int main()
{
    cout << SumOddNumbers(ReadNum());
    return 0;
}