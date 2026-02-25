/*
* This program demonstrates how to swap two numbers.
* It reads two values from the user, swaps them in memory,
* and then prints the new values.
*/

#include <iostream>
#include <string>

using namespace std;

struct stNumbers
{
    int Num1, Num2;
};

void ReadNumbers(stNumbers& Num)
{
    cout << "Please enter two numbers:\n";
    cin >> Num.Num1 >> Num.Num2;
    cout << "Before swap: Num1 = " << Num.Num1 << " _ " << "Num2 = " << Num.Num2 << endl;
}

void Swap(stNumbers& Num)
{
    int Temp;
    Temp = Num.Num1;
    Num.Num1 = Num.Num2;
    Num.Num2 = Temp;
}

void PrintNumbers(stNumbers Num)
{
    cout << "After swap: " << Num.Num1 << " _ " << Num.Num2 << endl;
}

int main()
{
    stNumbers Number;
    ReadNumbers(Number);
    Swap(Number);
    PrintNumbers(Number);

    return 0;
}