/*
* This program calculates the area of a circle.
* It asks the user for the radius, then computes and prints the final area.
*/

#include <iostream>
#include <cmath> // We include <cmath> for the pow() function, which calculates exponents.

using namespace std;

struct stCircleArea
{
    const float pi = 3.14;

    float Radius;
    float Area;
};

stCircleArea ReadNum()
{
    stCircleArea CircleArea;
    cout << "Please enter the circle's radius (R):\n";
    cin >> CircleArea.Radius;
    return CircleArea;
}

stCircleArea CalculateCircleArea(stCircleArea CircleArea)
{
    CircleArea.Area = CircleArea.pi * pow(CircleArea.Radius, 2);
    return CircleArea;
}

void PrintResult(stCircleArea CircleArea)
{
    cout << "Circle Area = " << CircleArea.Area << endl;
}

int main()
{
    PrintResult(CalculateCircleArea(ReadNum()));
    return 0;
}