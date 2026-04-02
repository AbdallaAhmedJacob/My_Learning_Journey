#pragma warning(disable : 4996);
#include <iostream>
#include <ctime>

using namespace std;

struct sDate
{
    short Day = 0;
    short Month = 0;
    short Year = 0;
};

sDate ReadDate();
unsigned int GetDefferenceIn2DatesOfDays(sDate Date1, sDate Date2);

signed int AgeInDaysColculator(sDate Date)
{
    sDate Today;
    time_t t = time(0);
    tm* now = localtime(&t);

    Today.Year = now->tm_year + 1900;
    Today.Month = now->tm_mon + 1;
    Today.Day = now->tm_mday;
    return GetDefferenceIn2DatesOfDays(Date, Today);
}

void runAgeInDaysColculator()
{
    sDate Date = ReadDate();
    cout << "Age your is: " << AgeInDaysColculator(Date);
}