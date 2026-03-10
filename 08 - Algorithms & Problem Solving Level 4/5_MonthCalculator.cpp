#include <iostream>

using namespace std;

short ReadNumber(int From, int To);
bool IsLeapYear(short Year);

struct YearInfo
{
	short Year;
	unsigned short Days;
	unsigned int Hours;
	unsigned Minutes;
	unsigned Seconds;
};

struct MonthInfo
{
	short Month;
	unsigned short Days;
	unsigned int Hours;
	unsigned long Minutes;
	unsigned long Seconds;
};

short GetNumberOfDaysInMonth_Basic(short Year, short Month)
{
	if (Month < 1 || Month > 12)
		return 0;

	if (Month == 2)
		return (IsLeapYear(Year)) ? 29 : 28;

	short arr31Days[]{ 1,3,5,7,8,10,12 };
	for (short M : arr31Days)
		if (M == Month)
			return 31;

	return 30;
}

short GetNumberOfHorsInMonth(short Year, short Month)
{
	return GetNumberOfDaysInMonth_Basic(Year, Month) * 24;
}

unsigned GetNumberOfMinutesInMonth(short Year, short Month)
{
	return GetNumberOfHorsInMonth(Year, Month) * 60;
}

unsigned GetNumberOfSecondsInMonth(short Year, short Month)
{
	return GetNumberOfMinutesInMonth(Year, Month) * 60;
}

MonthInfo GetMonthInfo(short Year, short Month)
{
	MonthInfo sMonthInfo;

	sMonthInfo.Month = Month;
	sMonthInfo.Days = GetNumberOfDaysInMonth_Basic(Year, Month);
	sMonthInfo.Hours = GetNumberOfHorsInMonth(Year, Month);
	sMonthInfo.Minutes = GetNumberOfMinutesInMonth(Year, Month);
	sMonthInfo.Seconds = GetNumberOfSecondsInMonth(Year, Month);

	return sMonthInfo;
}

void PrintMonthInfo(MonthInfo sMonthInfo)
{
	cout << "The number of days in month [" << sMonthInfo.Month << "] is: " << sMonthInfo.Days << "\n";
	cout << "The number of hours in month [" << sMonthInfo.Month << "] is: " << sMonthInfo.Hours << "\n";
	cout << "The number of minutes in month [" << sMonthInfo.Month << "] is: " << sMonthInfo.Minutes << "\n";
	cout << "The number of seconds in month [" << sMonthInfo.Month << "] is: " << sMonthInfo.Seconds << "\n";
}

void runMonthCalculator()
{
	cout << "Please enter a year to check:\n";
	short Year = ReadNumber(1, 9999);
	cout << "Please enter a month to check:\n";
	short Month = ReadNumber(1, 12);

	PrintMonthInfo(GetMonthInfo(Year, Month));
}