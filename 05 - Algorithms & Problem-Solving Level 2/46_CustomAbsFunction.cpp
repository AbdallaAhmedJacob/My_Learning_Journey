/*
* This program implements a custom function to calculate the absolute value (MyAbs)
* of an integer and compares its result with the standard C++ abs() function.
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int ReadNumber(string Message)
{
    int Number = 0;

    cout << Message;
    cin >> Number;

    return Number;
}

int MyAbs(int Number)
{
    if (Number < 0)
        Number = -Number;

    return Number;
}


int main()
{
    int Number = ReadNumber("Please enter an integer:\n");

    cout << "My abs function = " << MyAbs(Number) << endl;
    cout << "C++ abs function = " << abs(Number) << endl;

    return 0;
}