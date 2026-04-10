#include <iostream>

using namespace std;

struct sDate
{
    short Day = 0;
    short Month = 0;
    short Year = 0;
};

enum eDateCompare { Befour = -1, Equal = 0, After = 1 };

sDate ReadDate();
bool IsDate1LessDate2(sDate Date1, sDate Date2);
bool IsDate1EqualDate2(sDate Date1, sDate Date2);
bool IsDate1AfterDate2(sDate Date1, sDate Date2);


eDateCompare DateCombarer(sDate Date1, sDate Date2)
{
    if (IsDate1LessDate2(Date1, Date2))
        return eDateCompare::Befour;
    if (IsDate1EqualDate2(Date1, Date2))
        return eDateCompare::Equal;
   /* if (IsDate1AfterDate2(Date1, Date2))
        return eDateCompare::After;*/

    return eDateCompare::After;
}

void runDateCombarer()
{
    cout << "\nPlease enter date1 ";
    sDate Date1 = ReadDate();
    cout << "\nPlease enter date2 ";
    sDate Date2 = ReadDate();

    cout << "\nCompare result = " << DateCombarer(Date1, Date2);
}