#include <iostream>

using namespace std;

struct YearTimeInfo
{
    short Year;
    unsigned short NumberOfDays;
    unsigned int NumberOfHours;
    unsigned long NumberOfMinutes;
    unsigned long NumberOfSeconds;
};

short ReadNumber(int From, int To);
bool IsLeapYear(short Year);

unsigned short GetYearTotalDays(unsigned short Year)
{
    return (IsLeapYear(Year)) ? 366 : 365;
}

unsigned int GetYearTotalHours(unsigned int Year)
{
    return GetYearTotalDays(Year) * 24;
}
unsigned int GetYearTotalMinutes(unsigned int Year)
{
    return GetYearTotalHours(Year) * 60;
}
unsigned int GetYearTotalSeconds(unsigned int Year)
{
    return GetYearTotalMinutes(Year) * 60;
}

YearTimeInfo CalculateYearInfo(short Year)
{
    YearTimeInfo yearInfo;

    yearInfo.Year = Year;
    yearInfo.NumberOfDays = GetYearTotalDays(Year);
    yearInfo.NumberOfHours = GetYearTotalHours(Year);
    yearInfo.NumberOfMinutes = GetYearTotalMinutes(Year);
    yearInfo.NumberOfSeconds = GetYearTotalSeconds(Year);

    return yearInfo;
}

void PrintYearInfo(YearTimeInfo yearInfo)
{
    cout << "The number of days in year [" << yearInfo.Year << "] is: " << yearInfo.NumberOfDays << "\n";
    cout << "The number of hours in year [" << yearInfo.Year << "] is: " << yearInfo.NumberOfHours << "\n";
    cout << "The number of minutes in year [" << yearInfo.Year << "] is: " << yearInfo.NumberOfMinutes << "\n";
    cout << "The number of seconds in year [" << yearInfo.Year << "] is: " << yearInfo.NumberOfSeconds << "\n";
}

void runTimeCalculator_Basic()
{
    PrintYearInfo(CalculateYearInfo(ReadNumber(1, 9999)));
}