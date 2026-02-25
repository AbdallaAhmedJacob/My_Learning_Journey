/*
* This program converts a total number of seconds into days, hours, minutes, and seconds.
* It gets the total number of seconds from the user, then breaks it down into
* its larger time components and displays the result.
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct strTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
    strTaskDuration TaskDuration;

    const int SecondsPerDay = 24 * 60 * 60;
    const int SecondsPerHours = 60 * 60;
    const int SecondsPerMinute = 60;

    int Remainder = TotalSeconds;

    TaskDuration.NumberOfDays = Remainder / SecondsPerDay;
    Remainder = Remainder % SecondsPerDay;

    TaskDuration.NumberOfHours = Remainder / SecondsPerHours;
    Remainder = Remainder % SecondsPerHours;

    TaskDuration.NumberOfMinutes = Remainder / SecondsPerMinute;
    Remainder = Remainder % SecondsPerMinute;

    TaskDuration.NumberOfSeconds = Remainder;

    return TaskDuration;
}

void PrintTaskDurationDetails(strTaskDuration TaskDuration)
{
    cout << "\nDuration: ";
    cout << TaskDuration.NumberOfDays << " days, "
        << TaskDuration.NumberOfHours << " hours, "
        << TaskDuration.NumberOfMinutes << " minutes, "
        << TaskDuration.NumberOfSeconds << " seconds.\n";
}

int main()
{
    int TotalSeconds = ReadPositiveNumber("Please enter the total number of seconds:\n");
    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));
    return 0;
}