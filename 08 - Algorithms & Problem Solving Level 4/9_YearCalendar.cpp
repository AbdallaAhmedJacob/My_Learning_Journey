#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

short ReadNumber(int From, int To);
void ShowAMonth(short Month, short Year);
void YearCalendar(short Year)
{
	printf("\n\n_______________________________________________\n");
	printf("\t\tCALENDAR FOR THE YEAR %i", Year);
	printf("\n_______________________________________________\n\n");

	for (short i = 1; i <= 12; i++)
		ShowAMonth(i, Year);
}

void runYearCalendar()
{
	cout << "Please enter a year: ";
	short Year = ReadNumber(1, 9999);

	YearCalendar(Year);
}