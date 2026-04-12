#include <iostream>

using namespace std;

struct sDate
{
    short Day = 0;
    short Month = 0;
    short Year = 0;
};

struct sPeriod
{
    sDate StartDate;
    sDate EndDate;
};

sDate ReadDate();
sPeriod ReadPeriod();
bool IsDate1EqualDate2(sDate Date1, sDate Date2);
sDate AddOneDayToDate(sDate Date);
int GetDefferenceIn2DatesOfDays(sDate Date1, sDate Date2, bool IncludIndDay = false);

int PeriodLingthInDays(sPeriod Period, bool IncludIndDay = false)
{
    return GetDefferenceIn2DatesOfDays(Period.StartDate, Period.EndDate, IncludIndDay);
}

void runPeriodLingthInDaysColculator()
{
    sPeriod Period = ReadPeriod();

    cout << "\nPeriod lingth is " << PeriodLingthInDays(Period);
    cout << "\nPeriod lingth is (including end date) " << PeriodLingthInDays(Period, true);
}