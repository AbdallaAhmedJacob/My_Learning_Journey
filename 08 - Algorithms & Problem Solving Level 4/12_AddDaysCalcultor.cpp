#include <iostream>
#include <string>

using namespace std;

struct sDate
{
    short Day = 0;
    short Month = 0;
    short Year = 0;
};

short GetNumberOfDaysInAMonth_Optimized(short Year, short Month);
bool IsLeapYear(short Year);
short ReadNumber(int From, int To);
unsigned int ReadNumber();

sDate ReadDate()
{
    sDate Date;
    cout << "Please enter a year: ";
    Date.Year = ReadNumber();

    cout << "Please enter a month: ";
    Date.Month = ReadNumber(1, 12);

    short NumberDaysOfMonth = GetNumberOfDaysInAMonth_Optimized(Date.Year, Date.Month);
    cout << "Please enter a day: ";
    Date.Day = ReadNumber(1, NumberDaysOfMonth);

    return Date;
}

sDate GetDateAfterAdding(unsigned int AddingDay, sDate Date)
{
    short NumberDaysInMonth = 0;
    short TumpDays = 0;

    while (true)
    {
        NumberDaysInMonth = GetNumberOfDaysInAMonth_Optimized(Date.Year, Date.Month);
        TumpDays = NumberDaysInMonth - Date.Day;

        if (TumpDays >= AddingDay)
        {
            Date.Day += AddingDay;
            break;
        }
        else
        {
            AddingDay -= TumpDays;
            if (Date.Month < 12)
            {
                Date.Month++;
                Date.Day = 0;
            }
            else
            {
                Date.Month = 1;
                Date.Year++;
            }
        }
    }
    return Date;
}

void runAddDaysCalcultor()
{
    sDate Date = ReadDate();
    cout << "How many days to add?";
    unsigned int AddingDay = ReadNumber();
    Date = GetDateAfterAdding(AddingDay, Date);
    cout << "Date after adding [" + to_string(AddingDay) + "] days is " + to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
}