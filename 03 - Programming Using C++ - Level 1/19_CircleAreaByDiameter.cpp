
/*
* This program calculates the area of a circle using its diameter.
* It asks the user for the diameter, then computes and prints the final area.
*
*/

#include <iostream>
#include <cmath>

using namespace std;

struct stCircleArea
{
    const float pi = 3.14; // We use 'const float' because the value of pi is constant.
    float Diameter;
    float Area;
};

stCircleArea ReadDiameter()
{
    stCircleArea CircleArea;
    cout << "Please enter the circle's diameter (D):\n";
    cin >> CircleArea.Diameter;

    return CircleArea;
}

// This function performs the core calculation of the circle's area using the diameter.
// It applies the formula: Area = (pi * D^2) / 4.

stCircleArea CalculateAreaByDiameter(stCircleArea CircleArea)
{
    CircleArea.Area = (CircleArea.pi * pow(CircleArea.Diameter, 2) / 4);
    return CircleArea;
}

void PrintResult(stCircleArea CircleArea)
{
    cout << "\nCircle Area = " << CircleArea.Area << endl;
}

int main()
{
    PrintResult(CalculateAreaByDiameter(ReadDiameter()));
    return 0;
}