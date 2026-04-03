#include <iostream>
#include <string>

using namespace std;

struct sDate
{
    short Day = 0;
    short Month = 0;
    short Year = 0;
};

sDate ReadDate();
short GetNumberOfDaysInAMonth_Optimized(short Year, short Month);
bool IsDate1LessDate2(sDate Date1, sDate Date2);
bool IsLeapYear(short Year);

int GetDefferenceIn2DatesOfDays(sDate Date1, sDate Date2, bool IncludIndDay = false)
{
    bool IsDateOneLessDateTwo = false;
    if (!IsDate1LessDate2(Date1, Date2))
    {
        IsDateOneLessDateTwo = true;
        sDate Tump = Date1;
        Date1 = Date2;
        Date2 = Tump;
    }

    int Defference = 0;

    while (Date1.Year != Date2.Year)
    {
        Defference += (IsLeapYear(++Date1.Year)) ? 366 : 365;
    }

    if (Date1.Year == Date2.Year)
    {
        if (Date1.Month == Date2.Month)
            Defference = (Date1.Day == Date2.Day) ? Defference : Date2.Day - Date1.Day;
        else
        {
            short OrderMonth = Date1.Month;
            while (OrderMonth != Date2.Month)
            {
                Defference += GetNumberOfDaysInAMonth_Optimized(Date1.Year, OrderMonth++);
            }
            Defference += Date2.Day - Date1.Day;
        }
    }
    return (IncludIndDay) ? Defference * -1 : Defference;
}

void runDefferenceInDatesTwo_Way()
{
    cout << "Pleas enter date 1\n\n";
    sDate Date1 = ReadDate();
    cout << "\nPleas enter date 2\n\n";
    sDate Date2 = ReadDate();

    int Defference = GetDefferenceIn2DatesOfDays(Date1, Date2);
    cout << "Defferences is: " << Defference << " Day(s).\n";
    cout << "Defferences (Including end day) is: " << Defference + 1 << " Day(s).\n";
}