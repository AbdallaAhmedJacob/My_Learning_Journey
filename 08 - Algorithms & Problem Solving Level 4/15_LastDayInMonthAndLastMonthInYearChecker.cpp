#include<iostream>

using namespace std;

struct sDate
{
	short Day = 0;
	short Month = 0;
	short Year = 0;
};

short GetNumberOfDaysInAMonth_Optimized(short Year, short Month);
sDate ReadDate();

bool IsLastDayInAMonth(sDate Date)
{
	return (GetNumberOfDaysInAMonth_Optimized(Date.Year, Date.Month) == Date.Day);
}

bool IsLastAMonthInAYear(short Month)
{
	return (Month == 12);
}

void runLastDayInMonthAndLastMonthInYearChecker()
{
	cout << "Pleas enter date 1\n\n";
	sDate Date = ReadDate();

	string Result = (IsLastDayInAMonth(Date)) ? "Yes, Day is last day in month.\n" : "No, Day is not last day in month.\n";
	cout << Result;
	Result = (IsLastAMonthInAYear(Date.Month)) ? "Yes, Month is last Month in yaer.\n" : "No, Month is not last Month in yaer\n";
	cout << Result;
}