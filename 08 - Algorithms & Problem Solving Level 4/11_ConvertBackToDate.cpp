#include <iostream>
#include <string>
#include <limits>
#include <cstdio> 

using namespace std;

short GetNumberOfDaysInAMonth_Optimized(short Year, short Month);
bool IsLeapYear(short Year);

unsigned int ReadNumber()
{
    unsigned int Number = 0;

    cin >> Number;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        cout << "Invalid Input, please enter a valid one." << endl;

        cin >> Number;
    }

    return Number;
}

string ConvertDayOrderToDate(unsigned int dayOrder, short Year)
{
    short totalDaysInCurrentMonth = 0;
    short currentMonth = 1;

    for (currentMonth = 1; currentMonth <= 12; currentMonth++)
    {
        totalDaysInCurrentMonth = GetNumberOfDaysInAMonth_Optimized(Year, currentMonth);

        if (dayOrder > totalDaysInCurrentMonth)
        {
            dayOrder -= totalDaysInCurrentMonth;
        }
        else
            break;
    }

    if (currentMonth > 12)
        return "Error: Invalid Day Order for year " + to_string(Year);

    return to_string(dayOrder) + "/" + to_string(currentMonth) + "/" + to_string(Year);
}


void runConvertNumberToDate()
{
    cout << "Please enter a year: ";
    short Year = ReadNumber();

    cout << "Please enter the day order (1-366): ";
    unsigned int DayOrder = ReadNumber();

    printf("\nDay Order [%u] corresponds to date: %s\n", DayOrder, ConvertDayOrderToDate(DayOrder, Year).c_str());
}