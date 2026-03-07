#include <iostream>
//#include <limits> 

using namespace std;

short ReadNumber(int From, int To)
{
    short Number = 0;
    do
    {
        if(Number)
        cout << endl << "Please enter a number between " << From << " and " << To << ": ";

        cin >> Number;

        while (cin.fail())
        {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            cout << "Invalid Input, please enter a valid one." << endl;

            cin >> Number;
        }
    } while (Number < From || Number > To);

    return Number;
}

bool IsLeap(short Year)
{
    if (Year % 400 == 0)
        return true;

    else if (Year % 100 == 0)
        return false;

    else if (Year % 4 == 0)
        return true;

    else
        return false;
}

void runLeapYearChecker_Basic()
{
    short Year = ReadNumber(1, 9999);

    if (IsLeap(Year))
        cout << "\nYes, " << Year << " is a leap year.";
    else
        cout << "\nNo, " << Year << " is not a leap year.";
}