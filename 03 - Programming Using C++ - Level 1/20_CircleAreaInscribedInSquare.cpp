
/*
* This program calculates the area of a circle inscribed in a square.
* It asks the user for the side length of the square, then calculates
* and prints the circle's area, rounded up to the nearest integer.
*/

#include <iostream>
#include <cmath>

using namespace std;

struct stCircleArea
{
    float A; // Represents the side length of the square.
    const float pi = 3.14; // pi is defined as a constant because its value does not change.
    float Area;
};

stCircleArea ReadSquareSide()
{
    stCircleArea CircleArea;

    cout << "Please enter the side length of the square (A):\n";
    cin >> CircleArea.A;

    return CircleArea;
}

stCircleArea CalculateAreaInscribedInSquare(stCircleArea CircleArea)
{
    // Formula: Area = (pi * D^2) / 4. Since D (diameter) = A (side length),
    // the formula becomes: Area = (pi * A^2) / 4.

    CircleArea.Area = (CircleArea.pi * pow(CircleArea.A, 2) / 4);
    return CircleArea;
}

void PrintResult(stCircleArea CircleArea)
{
    cout << "\nCircle Area = " << ceil(CircleArea.Area) << endl;
}

int main()
{
    PrintResult(CalculateAreaInscribedInSquare(ReadSquareSide()));
    return 0;
}