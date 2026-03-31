#include<iostream>

using namespace std;

struct sDate
{
	short Day = 0;
	short Month = 0;
	short Year = 0;
};

bool IsLastDayInAMonth(sDate Date);
bool IsLastAMonthInAYear(short Month);
sDate ReadDate();

sDate AddOneDayToDate(sDate Date)
{
	(IsLastAMonthInAYear(Date.Month)) ? Date.Year += 1, Date.Month = 1, Date.Day = 1:
		(IsLastDayInAMonth(Date)) ? Date.Month += 1, Date.Day = 1 : Date.Day += 1;
	return Date;
}

void PrintDate(sDate Date)
{
	printf("%i/%i/%i", Date.Day, Date.Month, Date.Year);
}

void runAddOneDayToDate()
{
	cout << "Pleas enter date 1\n\n";
	sDate Date = ReadDate();
	Date = AddOneDayToDate(Date);
	PrintDate(Date);
}