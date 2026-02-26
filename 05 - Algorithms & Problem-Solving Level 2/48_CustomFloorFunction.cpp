/*
* This program implements a custom function to calculate the floor (MyFloor)
* of a floating-point number, which should return the largest integer less than
* or equal to the number, and compares its result with the standard C++ floor() function.
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

float MyFloor(float Number)
{
    if (Number >= 0)
        return (float)((int)Number);
    else
        return (float)((int)Number == Number ? (int)Number : (int)Number - 1);
}

int main()
{
    float Number = ReadNumber("Please enter a floating-point number (e.g., 3.6, -2.4):\n");

    cout << "My floor = " << MyFloor(Number) << endl;
    cout << "C++ floor = " << floor(Number) << endl;

    return 0;
}