/*
* This program implements a custom function (MySqrt) to calculate the square root
* of a number using the power function (pow) and compares its result with the
* standard C++ sqrt() function.
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

float MySqrt(float Number)
{
    if (Number < 0)
    {
        cout << "Error: Cannot calculate the square root of a negative number." << endl;
        return 0;
    }

    return pow(Number, 0.5f);
}

int main()
{
    float Number = ReadNumber("Please enter a non-negative number:\n");

    cout << "My sqrt = " << MySqrt(Number) << endl;
    cout << "C++ sqrt = " << sqrt(Number) << endl;

    return 0;
}