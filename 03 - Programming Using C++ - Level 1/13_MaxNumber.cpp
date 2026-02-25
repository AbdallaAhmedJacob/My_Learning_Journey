/*
* This program asks the user for three numbers,
* then finds and prints the maximum of the three numbers.
*/

#include <iostream>
using namespace std;

void Read3Num(int Num[3])
{
    cout << "Please enter three numbers:\n";
    cin >> Num[0] >> Num[1] >> Num[2];
}

int MaxOf3Numbers(int Num[3])
{
    int max = Num[0];

    if (Num[1] > max)
    {
        max = Num[1];
    }
    if (Num[2] > max)
    {
        max = Num[2];
    }

    return max;
}

void PrintResult(int Max)
{
    cout << "The Maximum Number is: " << Max << endl;
}

int main()
{
    int N[3];
    Read3Num(N);
    PrintResult(MaxOf3Numbers(N));

    return 0;
}