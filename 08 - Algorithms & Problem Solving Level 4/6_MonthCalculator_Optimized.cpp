#include <iostream>

using namespace std;

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
	unsigned Minutes;
	unsigned Seconds;
};

short ReadNumber(int From, int To);
bool IsLeapYear(short Year);
MonthInfo GetMonthInfo(short Year, short Month);
void PrintMonthInfo(MonthInfo sMonthInfo);

short GetNumberOfDaysInAMonth_Optimized(short Year, short Month)
{
	if (Month < 1 || Month > 12)
		return 0;
	short NumberDaysInMonth[]{ 31,28,31,30,31,31,30,31,30,31,30,31 };
	return (Month == 2) ? (IsLeapYear(Year)) ? 29 : 28 : NumberDaysInMonth[Month -1];
}

short GetNumberOfHorsInMonth_Optimized(short Year, short Month)
{
	return GetNumberOfDaysInAMonth_Optimized(Year, Month) * 24;
}

short GetNumberOfMinutesInMonth_Optimized(short Year, short Month)
{
	return GetNumberOfHorsInMonth_Optimized(Year, Month) * 60;
}

short GetNumberOfSecondsInMonth_Optimized(short Year, short Month)
{
	return GetNumberOfMinutesInMonth_Optimized(Year, Month) * 60;
}

void runMonthCalculator_Optimized()
{
	cout << "Please enter a year to check:\n";
	short Year = ReadNumber(1, 9999);
	cout << "Please enter a month to check:\n";
	short Month = ReadNumber(1, 12);

	PrintMonthInfo(GetMonthInfo(Year, Month));
}