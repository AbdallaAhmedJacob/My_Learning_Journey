/*
* This program calculates the area of a triangle given its base and height.
* It asks the user for these two values, then computes and prints the final area.
*/

#include <iostream>

using namespace std;

struct stTriangleArea
{
    float A; // Represents the base of the triangle. We use 'float' for decimal precision.
    float H; // Represents the height of the triangle.
    float Result;
};

stTriangleArea ReadNumbers()
{
    stTriangleArea Num;

    cout << "Please enter the triangle's base (A):\n";
    cin >> Num.A;

    cout << "Please enter the triangle's height (H):\n";
    cin >> Num.H;

    return Num;
}

stTriangleArea CalculateTriangleArea(stTriangleArea TriangleArea)
{
    // A clearer way to write the formula is using 0.5 * A * H.
    // This is more readable and less prone to order of operations issues.
    TriangleArea.Result = 0.5 * TriangleArea.A * TriangleArea.H;
    return TriangleArea;
}

void PrintResult(stTriangleArea Num)
{
    cout << "\nTriangle Area = " << Num.Result << endl;
}

int main()
{
    PrintResult(CalculateTriangleArea(ReadNumbers()));
    return 0;
}