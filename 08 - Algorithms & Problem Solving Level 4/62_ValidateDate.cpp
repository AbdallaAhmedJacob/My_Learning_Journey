#include <iostream>

using namespace std;

struct sDate
{
    short Day = 0;
    short Month = 0;
    short Year = 0;
};

unsigned int ReadNumber();
short GetNumberOfDaysInAMonth_Optimized(short Year, short Month);

short RedDay()
{
    cout << "\nPlease entr day: ";
    return (short)ReadNumber();
}

short RedMonth()
{
    cout << "\nPlease entr month: ";
    return (short)ReadNumber();
}

short RedYear()
{
    cout << "\nPlease entr year: ";
    return (short)ReadNumber();
}

sDate Readdate()
{
    sDate Date;

    Date.Day = RedDay();
    Date.Month = RedMonth();
    Date.Year = RedYear();
    
    return Date;
}

bool ValidateDate(sDate Date)
{
    return (Date.Day <= GetNumberOfDaysInAMonth_Optimized(Date.Year, Date.Month));
}

void runValidateDate()
{
    if (ValidateDate(Readdate()))
        cout << "\nYes, is date valide date";
    else
        cout << "\nNo, isn't date valide date";
}