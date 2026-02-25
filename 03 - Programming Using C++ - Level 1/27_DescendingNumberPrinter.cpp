/*
* This program prints a sequence of numbers in descending order,
* starting from a user-defined number down to 1.
*
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

void PrintRangeFromNumTo1(int Num)
{
    for (int counter = Num; counter >= 1; counter--)
    {
        cout << counter << "\n";
    }
}

int main()
{
    PrintRangeFromNumTo1(ReadNum());
    return 0;
}