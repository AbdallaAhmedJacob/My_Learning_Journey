#include<iostream>

using namespace std;

short ReadNumber(int From, int To);

bool IsLeapYear(short Year)
{
    return (Year % 400 == 0 || (Year % 100 != 0 && Year % 4 == 0));
}

void runLeapYearChecker_Optimized()
{
    cout << "\nPleas enter Year: ";
    short Year = ReadNumber(1, 9999);

    if (IsLeapYear(Year))
        cout << "\nYes, " << Year << " is a leap year.";
    else
        cout << "\nNo, " << Year << " is not a leap year.";
}