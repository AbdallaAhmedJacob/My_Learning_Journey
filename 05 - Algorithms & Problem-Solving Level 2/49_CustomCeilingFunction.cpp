/*
* This program implements a custom function to calculate the ceiling (MyCeil)
* of a floating-point number, which should return the smallest integer greater than
* or equal to the number, and compares its result with the standard C++ ceil() function.
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

float ReadNumber(string Message)
{
    float Number = 0;

    cout << Message;
    cin >> Number;

    return Number;
}

float GetFractionPart(float Number)
{
    return Number - int(Number);
}

float MyCeil(float Number)
{
    if (GetFractionPart(Number) == 0)
        return Number;

    if (Number > 0)
        return (float)((int)Number + 1);
    else
        return (float)((int)Number);
}

int main()
{
    float Number = ReadNumber("Please enter a floating-point number (e.g., 3.6, -2.4, 4.0):\n");

    cout << "My ceil = " << MyCeil(Number) << endl;
    cout << "C++ ceil = " << ceil(Number) << endl;

    return 0;
}