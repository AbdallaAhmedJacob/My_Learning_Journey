/*
* This program calculates the sum of all even numbers from 1 up to a user-defined number.
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
    if (Num % 2 == 0)
        return enOddOrEven::Even;
    else
        return enOddOrEven::Odd;
}

int SumEvenNumbers(int N)
{
    int Sum = 0;
    cout << "Sum of even numbers = ";
    for (int counter = 1; counter <= N; counter++)
    {
        if (CheckOddOrEven(counter) == enOddOrEven::Even)
        {
            Sum += counter;
        }
    }
    return Sum;
}

void swap(int* n1, int* n2)
{
    int t = 0;

    t = *n1;
    *n1 = *n2;
    *n2 = t;
}

int main()
{
    cout << SumEvenNumbers(ReadNum());
    
    return 0;
}