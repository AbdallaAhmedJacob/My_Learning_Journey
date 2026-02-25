/*
* This program prints a sequence of numbers from 1 up to a user-defined number.
* It gets a positive integer from the user and then iterates from 1 to that number.
*/

#include <iostream>

using namespace std;

int ReadNum()
{
    int Num;
    cout << "Please enter a number:\n";
    cin >> Num;
    return Num;
}

void PrintRangeFrom1toNum(int Num)
{
    for (int counter = 1; counter <= Num; counter++)
    {
        cout << counter << "\n";
    }
}

int main()
{
    PrintRangeFrom1toNum(ReadNum());
    return 0;
}