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
short GetNumberOfDaysInAMonth_Optimized(short Year, short Month);

sDate DecreaseDateBayOneDayToDate(sDate Date)
{
    (Date.Month == 1) ? Date.Year -= 1, Date.Month = 12, Date.Day = 31 :
        (Date.Day == 1) ? Date.Month -= 1, Date.Day = GetNumberOfDaysInAMonth_Optimized(Date.Year, Date.Month) : Date.Day -= 1;
    return Date;
}

sDate DecreaseDateBayXDays(int Adding, sDate Date)
{
    for (int i = 1; i <= Adding; i++)
    {
        Date = DecreaseDateBayOneDayToDate(Date);
    }
    return Date;
}

sDate DecreaseDateBayOneWeekDays(sDate Date)
{
    for (int i = 1; i <= 7; i++)
    {
        Date = DecreaseDateBayOneDayToDate(Date);
    }
    return Date;
}

sDate DecreaseDateBayXWeeks(int Adding, sDate Date)
{
    for (int i = 1; i <= Adding * 7; i++)
    {
        Date = DecreaseDateBayOneDayToDate(Date);
    }
    return Date;
}

sDate DecreaseDateBayOneMonth(sDate Date)
{
    short NumberDecreasengOfDays = 0;
    (Date.Month == 1) ? Date.Year--, Date.Month = 12 :
        (Date.Day > 28) ? Date.Day = GetNumberOfDaysInAMonth_Optimized(Date.Year, Date.Month), Date.Month-- : Date.Month--;    

    return Date;
}

sDate DecreaseDateBayXMonths(short Adding, sDate Date)
{
    for (short i = 1; i <= Adding; i++)
    {
        Date = DecreaseDateBayOneMonth(Date);
    }
    return Date;
}

sDate DecreaseDateBayOneYear(sDate Date)
{
    Date.Year--;
    return Date;
}

sDate DecreaseDateBayXYears(short Adding, sDate Date)
{
    for (short i = 1; i <= Adding; i++)
    {
        Date = DecreaseDateBayOneYear(Date);
    }
    return Date;
}

sDate DecreaseDateBayXYearsFaster(short Adding, sDate Date)
{
    Date.Year -= Adding;
    return Date;
}

sDate DecreaseDateBayOneDecaet(sDate Date)
{
    Date.Year -= 10;
    return Date;
}

sDate DecreaseDateBayXDecaets(short Adding, sDate Date)
{
    for (short i = 1; i <= Adding; i++)
    {
        Date = DecreaseDateBayOneDecaet(Date);
    }
    return Date;
}

sDate DecreaseDateBayXDecaetsFaster(short Adding, sDate Date)
{
    Date.Year -= (10 * Adding);
    return Date;
}

sDate DecreaseDateBayCentury(sDate Date)
{
    Date.Year -= 100;
    return Date;
}

sDate DecreaseDateBayMillennium(sDate Date)
{
    Date.Year -= 1000;
    return Date;
}

void runProplemsFrom33To46()
{
    sDate Date = ReadDate();

    cout << "\nDate after:";

    cout << "\n01-Substracting one day is           :";    PrintDate(Date = DecreaseDateBayOneDayToDate(Date));
    cout << "\n02-Substracting 10 days is           :";    PrintDate(Date = DecreaseDateBayXDays(10, Date));
    cout << "\n03-Substracting one week is          :";    PrintDate(Date = DecreaseDateBayOneWeekDays(Date));
    cout << "\n04-Substracting 10 weeks is          :";    PrintDate(Date = DecreaseDateBayXWeeks(10, Date));
    cout << "\n05-Substracting one month is         :";    PrintDate(Date = DecreaseDateBayOneMonth(Date));
    cout << "\n06-Substracting 5 month is           :";    PrintDate(Date = DecreaseDateBayXMonths(5, Date));
    cout << "\n07-Substracting one years is         :";    PrintDate(Date = DecreaseDateBayOneYear(Date));
    cout << "\n08-Substracting 10 years is          :";    PrintDate(Date = DecreaseDateBayXYears(10, Date));
    cout << "\n09-Substracting 10 years (faster) is :";    PrintDate(Date = DecreaseDateBayXYearsFaster(10, Date));
    cout << "\n10-Substracting one decade is        :";    PrintDate(Date = DecreaseDateBayOneDecaet(Date));
    cout << "\n11-Substracting 10 decade is         :";    PrintDate(Date = DecreaseDateBayXDecaets(10, Date));
    cout << "\n12-Substracting 10 decade (faster) is:";    PrintDate(Date = DecreaseDateBayXDecaetsFaster(10, Date));
    cout << "\n13-Substracting Century is           :";    PrintDate(Date = DecreaseDateBayCentury(Date));
    cout << "\n14-Substracting Millennium is        :";    PrintDate(Date = DecreaseDateBayMillennium(Date));
}