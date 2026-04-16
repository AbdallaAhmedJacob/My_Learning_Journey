#include <iostream>
#include <string>

using namespace std;

struct sDate
{
    short Day = 0;
    short Month = 0;
    short Year = 0;
};

sDate ContertStringToDate(string stDate)
{
    sDate Date;
    string Tump;
    short pos = 0;

    short i = 0;
    while(stDate[i] != '/')
    {
        Tump += stDate[i];
        i++;
    }

    pos = stDate.find("/");
    Date.Day = stoi(Tump);
    stDate.erase(0, pos + 1);
    Tump = "";
    i = 0;

    while (stDate[i] != '/')
    {
        Tump += stDate[i];
        i++;
    }
    pos = stDate.find("/");
    Date.Month = stoi(Tump);
    stDate.erase(0, pos + 1);

    //stDate.erase(0, pos + 1);
    Date.Year = stoi(stDate);
    
    return Date;
}

string ContertDateToString(sDate Date)
{
    return to_string(Date.Day) + "/" + to_string(Date.Month) + "/" + to_string(Date.Year);
}

void runConvertDate()
{
    string stDate;
    sDate Date;

    cout << "\nPlease enter date dd/mm/yyyy: ";
    cin >> ws >> stDate;

    Date = ContertStringToDate(stDate);

    cout << "\n\nDay: " << Date.Day;
    cout << "\nMonth: " << Date.Month;
    cout << "\nYear: " << Date.Year;

    cout << "\n\n\nYour enterd " << ContertDateToString(Date);
}