/*
* This program asks the user for two numbers,
* then finds and prints the maximum of the two.
*/

#include <iostream>

using namespace std;

void ReadNum(int Num[2])
{
    cout << "Please enter number 1:\n";
    cin >> Num[0];
    cout << "Please enter number 2:\n";
    cin >> Num[1];
}

int MaxOf2Numbers(int Num[2])
{
    if (Num[0] > Num[1])
        return Num[0];
    else
        return Num[1];
}

void PrintResult(int Max)
{
    cout << "The Maximum Number is: " << Max << endl;
}

int main()
{
    int Num[2];
    ReadNum(Num);
    PrintResult(MaxOf2Numbers(Num));

    return 0;
}