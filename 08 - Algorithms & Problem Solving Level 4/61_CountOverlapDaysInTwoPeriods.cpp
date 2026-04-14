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
int PeriodLingthInDays(sPeriod Period, bool IncludIndDay = false);
bool PeriodLingthInDays(sPeriod Period, sDate Date);
bool IsPeriodsOverLap(sPeriod Period1, sPeriod Period2);
sDate AddOneDayToDate(sDate Date);
bool IsDate1EqualDate2(sDate Date1, sDate Date2);

int GetOverlapDaysInTwoPeriods(sPeriod Period1, sPeriod Period2)
{
    if (!IsPeriodsOverLap(Period1, Period2))
        return 0;

    int CountOverLapDays = 0;

    if (PeriodLingthInDays(Period1) < PeriodLingthInDays(Period2))
    {
        while (!IsDate1EqualDate2(Period1.StartDate, Period1.EndDate))
        {
            if (PeriodLingthInDays(Period2, Period1.StartDate))
                CountOverLapDays++;
            Period1.StartDate = AddOneDayToDate(Period1.StartDate);
        }
    }
    else
    {
        while (!IsDate1EqualDate2(Period2.StartDate, Period2.EndDate))
        {
            if (PeriodLingthInDays(Period1, Period2.StartDate))
                CountOverLapDays++;
            Period2.StartDate = AddOneDayToDate(Period2.StartDate);
        }
    }
    return CountOverLapDays;
}

void runCountOverlapDaysInTwoPeriods()
{
    cout << "\nEnter Period 1\n";
    sPeriod Period1 = ReadPeriod();
    cout << "\nEnter Period 2\n";
    sPeriod Period2 = ReadPeriod();

    cout << "\nOverlap days count is: " << GetOverlapDaysInTwoPeriods(Period1, Period2);
}