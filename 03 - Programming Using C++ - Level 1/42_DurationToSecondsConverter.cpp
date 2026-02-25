/*
* This program calculates the total duration of a task in seconds.
* It gets the duration in days, hours, minutes, and seconds from the user,
* then converts and prints the total number of seconds.
*/

#include <iostream>
#include <string>

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

strTaskDuration ReadTaskDuration()
{
    strTaskDuration TaskDuration;

    TaskDuration.NumberOfDays = ReadPositiveNumber("Please enter the number of days:\n");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Please enter the number of hours:\n");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please enter the number of minutes:\n");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please enter the number of seconds:\n");

    return TaskDuration;
}

int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
    int DurationInSeconds = 0;

    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
    DurationInSeconds += TaskDuration.NumberOfSeconds;

    return DurationInSeconds;
}

int main()
{
    cout << "\nTask Duration in Seconds: " << TaskDurationInSeconds(ReadTaskDuration()) << endl;
    return 0;
}