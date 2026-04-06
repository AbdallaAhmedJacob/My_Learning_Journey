#include <iostream>
#include <string>

using namespace std;

struct sDate
{
    short Day = 0;
    short Month = 0;
    short Year = 0;
};

sDate ReadDate();
void PrintDate(sDate Date);
short GetDayOfWeekIndex(short Day, short Month, short Year);
string GetDayShortName(short DayIndex);
short GetNumberOfDaysInAMonth_Optimized(short Year, short Month);

bool IsItEndOfWeek(short IndexDay = -1)
{
    return (IndexDay == 6);
}

bool IsItWeekend(sDate Date)
{
    short  IndexDay  = GetDayOfWeekIndex(Date.Day, Date.Month, Date.Day);
    return (IndexDay == 5 || IndexDay == 6);
}

bool IsBusinessDay(sDate Date)
{
    return !IsItWeekend(Date);
}

short DaysUntilTheEndOfWeek(sDate Date)
{
    return 6 - GetDayOfWeekIndex(Date.Day, Date.Month, Date.Day);
}

short DaysUntilTheEndOfMonth(sDate Date)
{
    return GetNumberOfDaysInAMonth_Optimized(Date.Year, Date.Month) - Date.Day;
}

short DaysUntilTheEndOfYear(sDate Date)
{
    short Days = DaysUntilTheEndOfMonth(Date);

    while (Date.Month <= 12)
    {
        Days += GetNumberOfDaysInAMonth_Optimized(Date.Year, ++Date.Month);
    }
    return Days;
}

void runProplemsFrom47to53()
{
    sDate Date = ReadDate();
    short IndexDayOfWeek = GetDayOfWeekIndex(Date.Day, Date.Month, Date.Year);

    cout << "\nToday is " << GetDayShortName(IndexDayOfWeek) << " , "; PrintDate(Date);

    cout << "\nIs it end of week?";
    if (IsItEndOfWeek(IndexDayOfWeek))
        cout << "\nYes, is end of week.";
    else
        cout << "\nNo, not end of week.";
    
    cout << "\nIs it weekend";
    if (IsItWeekend(Date))
        cout << "\nYes, is it a weekend.";
    else
        cout << "\nNo, not a weekend.";

    cout << "\nIs it business day";
    if (IsBusinessDay(Date))
        cout << "\nYes, is it a business day.";
    else
        cout << "\nNo, not a business day.";

    cout << "\nDays until the end of week: " << DaysUntilTheEndOfWeek(Date) << " Day(s).";
    cout << "\nDays until the end of month: " << DaysUntilTheEndOfMonth(Date) << " Day(s).";
    cout << "\nDays until the end of year: " << DaysUntilTheEndOfYear(Date) << " Day(s).";
}