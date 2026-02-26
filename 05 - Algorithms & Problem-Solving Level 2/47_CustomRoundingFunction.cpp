/*
* This program implements a custom rounding function (MyRound) that rounds a floating-point number
* to the nearest integer, using the traditional rule (0.5 rounds away from zero), and compares
* the result with the standard C++ round() function.
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

float GetFractionPart(float Num)
{
    return Num - int(Num);
}

float MyRound(float Number)
{
    if (Number < 0) {
        return (int)(Number - GetFractionPart(Number) + (abs(GetFractionPart(Number)) >= 0.5f ? -1.0f : 0.0f));
    }

    return (int)(Number + (GetFractionPart(Number) >= 0.5f ? 1.0f : 0.0f));
}

float SimpleRound(float Number)
{
    return floor(Number + 0.5f);
}

int main()
{
    float Number = ReadNumber("Please enter a number (e.g., 3.6, -2.4, 1.5):\n");

    cout << "My Simple Round = " << SimpleRound(Number) << endl;
    cout << "C++ Round = " << round(Number) << endl;

    return 0;
}