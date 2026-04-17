#include <iostream>
#include <string>

using namespace std;

struct sDate
{
    short Day = 0;
    short Month = 0;
    short Year = 0;
};
sDate ContertStringToDate(string stDate);

string FormatDate(sDate Date, string Format = "dd/mm/yyyy")
{
    string Formated;
    short pos = 0;

    pos = Format.find("dd");
    Format.erase(pos, 2);
    Formated = Format.insert(pos, to_string(Date.Day));

    pos = Format.find("mm");
    Format.erase(pos, 2);
    Formated = Format.insert(pos, to_string(Date.Month));

    pos = Format.find("yyyy");
    Format.erase(pos, 4);
    Formated = Format.insert(pos, to_string(Date.Year));

    return Formated;
}

void runFormatDate()
{
    string stDate;

    cout << "\nPlease enter date dd/mm/yyyy: ";
    cin >> ws >> stDate;

    sDate Date = ContertStringToDate(stDate);
    cout << "\n\n" << FormatDate(Date);
    cout << "\n\n" << FormatDate(Date, "yyyy/mm/dd");
    cout << "\n\n" << FormatDate(Date, "mm/dd/yyyy");
    cout << "\n\n" << FormatDate(Date, "mm-dd-yyyy");
    cout << "\n\n" << FormatDate(Date, "dd-mm-yyyy");
}