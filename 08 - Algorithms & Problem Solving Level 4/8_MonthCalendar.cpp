#include <iostream>
#include <iomanip>
#include <cstdio> // Include cstdio for printf functionality

using namespace std;

short ReadNumber(int From, int To);
short GetDayOfWeekIndex(short Day, short Month, short Year);
short GetNumberOfDaysInAMonth_Optimized(short Year, short Month);

string GetShortMonthName(short Month)
{
	string arrShortMonthNames[]{ "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	return arrShortMonthNames[Month - 1];
}

void ShowAMonth(short Month, short Year)
{
	short positionCounter = 0;

	printf("______________________%s______________________\n", GetShortMonthName(Month).c_str());

	printf("\nSun    Mon    Tue    Wed    Thu    Fri    Sat\n");

	short firstDayIndex = GetDayOfWeekIndex(1, Month, Year);

	for (short i = 0; i < firstDayIndex; i++)
	{
		printf("       ");
		positionCounter++;
	}

	short totalDays = GetNumberOfDaysInAMonth_Optimized(Year, Month);

	for (short i = 1; i <= totalDays; i++)
	{
		cout << setw(3) << i << "    ";

		if (++positionCounter == 7)
		{
			positionCounter = 0;
			cout << "\n";
		}
	}
	printf("\n_______________________________________________\n\n");
}

void runMonthCalendar()
{
	cout << "Please enter a year: ";
	short Year = ReadNumber(1, 9999);
	cout << "Please enter a month: ";
	short Month = ReadNumber(1, 12);

	ShowAMonth(Month, Year);
}