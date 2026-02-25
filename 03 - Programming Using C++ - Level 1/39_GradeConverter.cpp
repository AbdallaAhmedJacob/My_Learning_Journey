/*
* This program asks the user for a grade, validates that it is within the range of 0 to 100,
* and then converts the numerical grade into a letter grade (A, B, C, D, E, F).
*/

#include <iostream>

using namespace std;

int ReadNumberInRange(int From, int To)
{
    int Grade;
    do
    {
        cout << "Please enter a grade between " << From << " and " << To << ":\n";
        cin >> Grade;
    } while (Grade < From || Grade > To);

    return Grade;
}

char GetGradeLetter(int Grade)
{
    if (Grade >= 90)
    {
        return 'A';
    }
    else if (Grade >= 80)
    {
        return 'B';
    }
    else if (Grade >= 70)
    {
        return 'C';
    }
    else if (Grade >= 60)
    {
        return 'D';
    }
    else if (Grade >= 50)
    {
        return 'E';
    }
    else
    {
        return 'F';
    }
}

int main()
{
    cout << "The letter grade is: " << GetGradeLetter(ReadNumberInRange(0, 100)) << endl;
    return 0;
}