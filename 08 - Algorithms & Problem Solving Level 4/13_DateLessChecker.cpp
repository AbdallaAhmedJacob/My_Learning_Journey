#include<iostream>

using namespace std;

short GetNumberOfDaysInAMonth_Optimized(short Year, short Month);
short ReadNumber(int From, int To);
unsigned int ReadNumber();

struct sDate
{
	short Day = 0;
	short Month = 0;
	short Year = 0;
};

sDate ReadDate();

bool IsDate1LessDate2(sDate Date1, sDate Date2)
{
    return (Date1.Year == Date2.Year) ? (Date1.Month == Date2.Month) ? (Date1.Day < Date2.Day) : (Date1.Month < Date2.Month) : (Date1.Year < Date2.Year);
    //return (Date1.Year < Date2.Year) || ((Date1.Year == Date2.Year) && (Date1.Month < Date2.Month)) || ((Date1.Year == Date2.Year) && (Date1.Month == Date2.Month) && (Date1.Day < Date2.Day));
}

void runDateLessChecker()
{
    cout << "Pleas enter date 1\n\n";
    sDate Date1 = ReadDate();
    
    cout << "Pleas enter date 2\n\n";
    sDate Date2 = ReadDate();

    string Result = (IsDate1LessDate2(Date1, Date2)) ? "Yes, Date1 Less Date2." : "No, Date1 Not Less Date2.";
    cout << Result;
}