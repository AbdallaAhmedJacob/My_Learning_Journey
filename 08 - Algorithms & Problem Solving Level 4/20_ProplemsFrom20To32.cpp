#include <iostream>

using namespace std;

struct sDate
{
    short Day = 0;
    short Month = 0;
    short Year = 0;
};

sDate ReadDate();
void PrintDate(sDate Date);
sDate AddOneDayToDate(sDate Date);
bool IsLastAMonthInAYear(short Month);
short GetNumberOfDaysInAMonth_Optimized(short Year, short Month);


sDate AddXDays(int Adding, sDate Date)
{
    for (int i = 1; i <= Adding; i++)
    {
        Date = AddOneDayToDate(Date);
    }
    return Date;
}

sDate AddOneWeek(sDate Date)
{
    for (int i = 1; i <= 7; i++)
    {
        Date = AddOneDayToDate(Date);
    }
    return Date;
}

sDate AddXWeeks(int Adding, sDate Date)
{
    for (int i = 1; i <= Adding * 7; i++)
    {
        Date = AddOneDayToDate(Date);
    }
    return Date;
}

sDate AddOneMonth(sDate Date)
{
    short NumberAddingOfDays = 0;
    (IsLastAMonthInAYear(Date.Month)) ? Date.Year++,Date.Month=1 : NumberAddingOfDays = GetNumberOfDaysInAMonth_Optimized(Date.Year, Date.Month);
    
    for (int i = 1; i <= NumberAddingOfDays; i++)
    {
        Date = AddOneDayToDate(Date);
    }
    return Date;
}

sDate AddXMonths(short Adding, sDate Date)
{
    for (short i = 1; i <= Adding; i++)
    {
        Date = AddOneMonth(Date);
    }
    return Date;
}

sDate AddOneYear(sDate Date)
{
    Date.Year++;
    return Date;
}

sDate AddXYears(short Adding, sDate Date)
{
    for (short i = 1; i <= Adding; i++)
    {
        Date = AddOneYear(Date);
    }
    return Date;
}

sDate AddXYearsFaster(short Adding, sDate Date)
{
    Date.Year += Adding;
    return Date;
}

sDate AddOneDecaet(sDate Date)
{
    Date.Year += 10;
    return Date;
}

sDate AddXDecaets(short Adding, sDate Date)
{
    for (short i = 1; i <= Adding; i++)
    {
        Date = AddOneDecaet(Date);
    }
    return Date;
}

sDate AddXDecaetsFaster(short Adding, sDate Date)
{
    Date.Year += (10 * Adding);
    return Date;
}

sDate AddCentury(sDate Date)
{
    Date.Year += 100;
    return Date;
}

sDate AddMillennium(sDate Date)
{
    Date.Year += 1000;
    return Date;
}


void runProplemsFrom20To32()
{
    sDate Date = ReadDate();

    cout << "\nDate after:";
    cout << "\n01-Ading  one day is          :";    PrintDate(Date = AddOneDayToDate(Date));
    cout << "\n02-Ading 10 days is           :";    PrintDate(Date = AddXDays(10, Date));
    cout << "\n03-Ading one week is          :";    PrintDate(Date = AddOneWeek(Date));
    cout << "\n04-Ading 10 weeks is          :";    PrintDate(Date = AddXWeeks(10, Date));
    cout << "\n05-Ading one month is         :";    PrintDate(Date = AddOneMonth(Date));
    cout << "\n06-Ading 5 month is           :";    PrintDate(Date = AddXMonths(5, Date));
    cout << "\n07-Ading one years is         :";    PrintDate(Date = AddOneYear(Date));
    cout << "\n08-Ading 10 years is          :";    PrintDate(Date = AddXYears(10, Date));
    cout << "\n09-Ading 10 years (faster) is :";    PrintDate(Date = AddXYearsFaster(10, Date));
    cout << "\n10-Ading one decade is        :";    PrintDate(Date = AddOneDecaet(Date));
    cout << "\n11-Ading 10 decade is         :";    PrintDate(Date = AddXDecaets(10, Date));
    cout << "\n12-Ading 10 decade (faster) is:";    PrintDate(Date = AddXDecaetsFaster(10, Date));
    cout << "\n13-Ading Century is           :";    PrintDate(Date = AddCentury(Date));
    cout << "\n14-Ading Millennium is        :";    PrintDate(Date = AddMillennium(Date));
}