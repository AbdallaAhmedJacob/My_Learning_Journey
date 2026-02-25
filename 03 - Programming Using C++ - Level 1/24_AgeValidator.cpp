/*
* This program validates if a person's age falls within a specified range.
* It asks the user for their age and then prints whether it is valid or not.
*/

#include <iostream>

using namespace std;

struct stPersonInfo
{
    unsigned short Age;
    bool Result;
};

stPersonInfo ReadInfo()
{
    stPersonInfo Info;

    cout << "Please enter your age:\n";
    cin >> Info.Age;

    return Info;
}

// Checks if a number falls within a given range, inclusive.
// Returns 'true' if the number is within the range, otherwise 'false'.
bool ValidateNumberInRange(int Num, int From, int To)
{
    return (Num >= From && Num <= To);
}

void PrintResult(stPersonInfo Info)
{
    if (ValidateNumberInRange(Info.Age, 18, 45))
    {
        cout << Info.Age << " is a valid age.\n";
    }
    else
    {
        cout << Info.Age << " is an invalid age.\n";
    }
}

int main()
{
    PrintResult(ReadInfo());
    return 0;
}