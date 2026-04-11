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

enum eDateCompare { Befour = -1, Equal = 0, After = 1 };

sDate ReadDate();
bool IsDate1LessDate2(sDate Date1, sDate Date2);
eDateCompare DateCombarer(sDate Date1, sDate Date2);

sPeriod ReadPeriod()
{
    sPeriod Period;

    do
    {
        if (Period.StartDate.Day)
            cout << "\nError\n";

        cout << "\nEnter Period";
        cout << "\nEnter start date";
        Period.StartDate = ReadDate();

        cout << "\nEnter end date";
        Period.EndDate = ReadDate();
    } while (!IsDate1LessDate2(Period.StartDate, Period.EndDate));
    return Period;
}

bool IsPeriodsOverLap(sPeriod Period1, sPeriod Period2)
{
    /*return (IsDate1LessDate2(Period1.StartDate, Period2.StartDate) && IsDate1LessDate2(Period2.StartDate, Period1.EndDate) ||
        IsDate1LessDate2(Period2.StartDate, Period1.StartDate) && IsDate1LessDate2(Period1.StartDate, Period2.EndDate));*/
    
    return (!(DateCombarer(Period1.StartDate, Period2.EndDate) == eDateCompare::After ||
        DateCombarer(Period1.EndDate, Period2.StartDate) == eDateCompare::Befour));
}

void runPeriodsOverLapChecker()
{
    cout << "\nEnter Period 1\n";
    sPeriod Period1 = ReadPeriod();
    cout << "\nEnter Period 2\n";
    sPeriod Period2 = ReadPeriod();

    if (IsPeriodsOverLap(Period1, Period2))
        cout << "\nYes,Parios Overlap";
    else
        cout << "\nNo,Parios Overlap";
}