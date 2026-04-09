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
bool IsDate1EqualDate2(sDate Date1, sDate Date2);


bool IsDate1AfterDate2(sDate Date1, sDate Date2)
{
    return (!IsDate1LessDate2(Date1, Date2) && !IsDate1EqualDate2(Date1, Date2));
}



void runDate1AfterDate2Colculate()
{
    cout << "\nPlease enter date1 ";
    sDate Date1 = ReadDate();
    cout << "\nPlease enter date2 ";
    sDate Date2 = ReadDate();

    if (IsDate1AfterDate2(Date1, Date2))
        cout << "\nYes, date1 is after date2.";
    else
        cout << "\nNo, date1 not is after date2.";
}