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

bool PeriodLingthInDays(sPeriod Period, sDate Date)
{
    int PeriodLingth = 0;
    while (!IsDate1EqualDate2(Period.StartDate, Period.EndDate))
    {
        if (IsDate1EqualDate2(Period.StartDate, Date))
            return true;
        Period.StartDate = AddOneDayToDate(Period.StartDate);
    }
    return false;
}

void runDateInAPeriodChecker()
{
    sPeriod Period = ReadPeriod();
    sDate Date;

    cout << "\n\nEnter Date";
    Date = ReadDate();

    if (PeriodLingthInDays(Period, Date))
        cout << "Yes, Date is within period";
    else
        cout << "No, Date is not within period";
}