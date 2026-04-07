#include <iostream>

using namespace std;

struct sDate
{
    short Day = 0;
    short Month = 0;
    short Year = 0;
};

sDate ReadDate();
bool IsDate1LessDate2(sDate Date1, sDate Date2);
void PrintDate(sDate Date);
short GetDayOfWeekIndex(short Day, short Month, short Year);
string GetDayShortName(short DayIndex);
bool IsDate1EqualDate2(sDate Date1, sDate Date2);
bool IsItWeekend(sDate Date);
sDate AddOneDayToDate(sDate Date);

int ActucalVacationDays(sDate VacationStarts, sDate VacationEnds)
{
    int VacationDays = 0;
    while (!IsDate1EqualDate2(VacationStarts, VacationEnds))
    {
        if (!IsItWeekend(VacationStarts))
            VacationDays++;

        VacationStarts = AddOneDayToDate(VacationStarts);
    }
    return VacationDays;
}

void runActucalVacationColculator()
{
    cout << "\nVacation starts:\n";
    sDate VacationStarts = ReadDate();
    cout << "\nVacation ends:\n";
    sDate VacationEnds = ReadDate();

    while (!IsDate1LessDate2(VacationStarts, VacationEnds))
    {
        cout << "\nMust now be vacation starts date merest vacation ends date\n";

        cout << "\nVacation starts:\n";
        VacationStarts = ReadDate();
        cout << "\nVacation ends:\n";
        VacationEnds = ReadDate();
    }

    short IndexDayOfWeekVacationStarts = GetDayOfWeekIndex(VacationStarts.Day, VacationStarts.Month, VacationStarts.Year);
    short IndexDayOfWeekVacationEnds = GetDayOfWeekIndex(VacationEnds.Day, VacationEnds.Month, VacationEnds.Year);

    cout << "\n\nVacation from: " << GetDayShortName(IndexDayOfWeekVacationStarts) << " , "; PrintDate(VacationStarts);
    cout << "\n\nVacation to: " << GetDayShortName(IndexDayOfWeekVacationEnds) << " , "; PrintDate(VacationEnds);

    cout << "\nActucal Vacation Days is: " << ActucalVacationDays(VacationStarts, VacationEnds);
}