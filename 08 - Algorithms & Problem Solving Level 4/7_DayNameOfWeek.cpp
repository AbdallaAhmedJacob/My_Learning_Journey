#include <iostream>

using namespace std;

short ReadNumber(int From, int To);

struct DateDetails
{
	string Date;
	short DayIndex;
	string DayName;
};

void CalculateAdjustedMonthAndYear(short Month, short Year, short& M, short& Y)
{
	short a = (14 - Month) / 12;
	Y = Year - a;
	M = Month + (12 * a) - 2;
}

short GetDayOfWeekIndex(short Day, short Month, short Year)
{
	short M = 0, Y = 0;

	CalculateAdjustedMonthAndYear(Month, Year, M, Y);

	return (Day + Y + (Y / 4) - (Y / 100) + (Y / 400) + ((31 * M) / 12)) % 7;
}

string GetDayShortName(short DayIndex)
{
	string NameDay[]{ "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat" };

	return NameDay[DayIndex];
}

void runDayNameOfWeek()
{
	cout << "Enter a year: ";
	short Year = ReadNumber(1, 9999);
	cout << "Enter a month: ";
	short Month = ReadNumber(1, 12);
	cout << "Enter a day: ";
	short Day = ReadNumber(1, 31);

	short DayIndex = GetDayOfWeekIndex(Day, Month, Year);

	cout << "\nDate          : " << Day << "/" << Month << "/" << Year;
	cout << "\nDay Index     : " << DayIndex;
	cout << "\nDay Name      : " << GetDayShortName(DayIndex);
}