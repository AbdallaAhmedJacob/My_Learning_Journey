/*
* This program calculates the area of a circle using its circumference.
* It gets the circumference from the user, then computes and prints the area.
*/

#include <iostream> 
#include <cmath> // Required for the pow() function.

using namespace std;

struct stCircleArea
{
    float l;
    const float pi = 3.14;
    float Area;
};

stCircleArea ReadNum()
{
    stCircleArea CircleArea;
    cout << "Please enter the circle's circumference (l):\n";
    cin >> CircleArea.l;
    return CircleArea;
}

// Calculates the circle's area from its circumference.
// The formula is: Area = l^2 / (4 * pi).
stCircleArea CalculateCircleArea(stCircleArea CircleArea)
{
    CircleArea.Area = pow(CircleArea.l, 2) / (4 * CircleArea.pi);
    return CircleArea;
}

// Prints the final calculated area.
void PrintCircleArea(stCircleArea CircleArea)
{
    cout << "Circle Area = " << CircleArea.Area << endl;
}

int main()
{
    PrintCircleArea(CalculateCircleArea(ReadNum()));
    return 0;
}