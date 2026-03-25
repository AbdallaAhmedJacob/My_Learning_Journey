#include <iostream>

using namespace std;

short ReadNumber(int From, int To);
bool IsLeapYear(short Year);
short GetNumberOfDaysInAMonth_Optimized(short Year, short Month);

unsigned int GetDayOrderInYear(short Day, short Month, short Year)
{
	unsigned int totalDays = 0;

	for (short i = 1; i < Month; i++)
		totalDays += GetNumberOfDaysInAMonth_Optimized(Year, i);

	return totalDays + Day;
}

void runTotalDaysBeginningOfYear()
{
	cout << "Please enter a year: ";
	short Year = ReadNumber(1, 9999);
	cout << "Please enter a month: ";
	short Month = ReadNumber(1, 12);

	short LastDayOfMonth = 0;
	LastDayOfMonth = GetNumberOfDaysInAMonth_Optimized(Year, Month);
	cout << "Please enter a day: ";
	short Day = ReadNumber(1, LastDayOfMonth);

	cout << "\nThe total number of days since the beginning of the year is: "
		<< GetDayOrderInYear(Day, Month, Year) << endl;
}