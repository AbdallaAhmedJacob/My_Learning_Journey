/*
* This program converts a given number of hours into days and weeks.
* It asks the user for a positive number of hours, then calculates
* and displays the equivalent number of days and weeks.
*/

#include <iostream>
#include <string>

using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

float HoursToDays(float NumberOfHours)
{
    return NumberOfHours / 24;
}

float HoursToWeeks(float NumberOfHours)
{
    return HoursToDays(NumberOfHours) / 7;
}

float DaysToWeeks(float NumberOfDays)
{
    return NumberOfDays / 7;
}

void PrintConvertHoursIntoDaysAndWeeks()
{
    float NumberOfHours = ReadPositiveNumber("Please enter the number of hours:\n");
    float NumberOfDays = HoursToDays(NumberOfHours);
    float NumberOfWeeks = HoursToWeeks(NumberOfHours);

    cout << "\n---------------------------\n";
    cout << "Total Hours = " << NumberOfHours << endl;
    cout << "Total Days  = " << NumberOfDays << endl;
    cout << "Total Weeks = " << NumberOfWeeks << endl;
    cout << "---------------------------\n";
}

int main()
{
    PrintConvertHoursIntoDaysAndWeeks();
    return 0;
}