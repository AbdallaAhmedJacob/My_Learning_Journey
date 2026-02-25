/*
* This program asks the user for a number representing a day of the week,
* validates the input, and then prints the corresponding day name.
*/

#include <iostream>
#include <string>

using namespace std;

enum enDayOfWeek {Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

int ReadNumberInRange(string Message, int From, int To)
{
    int Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number < From || Number > To);
    return Number;
}

enDayOfWeek ReadDayOfWeek()
{
    return (enDayOfWeek)ReadNumberInRange("Please enter day number [1 = Sun, 2 = Mon... , 7=Sat]:\n", 1, 7);
}

string GetDayOfWeek(enDayOfWeek Day)
{
    switch (Day)
    {
    case enDayOfWeek::Sat:
        return "Saturday";
    case enDayOfWeek::Sun:
        return "Sunday";
    case enDayOfWeek::Mon:
        return "Monday";
    case enDayOfWeek::Tue:
        return "Tuesday";
    case enDayOfWeek::Wed:
        return "Wednesday";
    case enDayOfWeek::Thu:
        return "Thursday";
    case enDayOfWeek::Fri:
        return "Friday";
    default:
        return "Not a valid Day";
    }
}

int main()
{
    cout << "\n---------------------------\n";
    cout << "Today is " << GetDayOfWeek(ReadDayOfWeek()) << ".\n";
    cout << "---------------------------\n";
    return 0;
}