#include <iostream>

using namespace std;

struct sDate
{
    short Day = 0;
    short Month = 0;
    short Year = 0;
};

sDate ReadDate();
unsigned int ReadNumber();
bool IsItWeekend(sDate Date);
sDate AddOneDayToDate(sDate Date);
void PrintDate(sDate Date);
short GetDayOfWeekIndex(short Day, short Month, short Year);
string GetDayShortName(short DayIndex);

sDate ActucalVacationDays(sDate VacationStarts, int VacationDays)
{
    sDate VacationEnds = VacationStarts;
    while (VacationDays != 0)
    {
        if (!IsItWeekend(VacationEnds))
            VacationDays--;

        VacationEnds = AddOneDayToDate(VacationEnds);
    }
    return VacationEnds;
}


void runColculateTheVacationReturnDate()
{
    cout << "\nVacation starts:\n";
    sDate VacationStarts = ReadDate();

    cout << "\nPlease enter vacation days: ";
    short VacationDays = (short)ReadNumber();

    sDate VacationEnd = ActucalVacationDays(VacationStarts, VacationDays);
    short IndexDayOfWeekVacationEnds = GetDayOfWeekIndex(VacationEnd.Day, VacationEnd.Month, VacationEnd.Year);
    cout << "\n\nReturn Date: " << GetDayShortName(IndexDayOfWeekVacationEnds) << " , "; PrintDate(VacationEnd);
}