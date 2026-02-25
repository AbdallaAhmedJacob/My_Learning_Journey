/*
* This program calculates the area of a rectangle given one side and the diagonal.
* It asks the user for these two values, then uses the Pythagorean theorem
* to find the missing side and computes the total area.
*/

#include <iostream>
#include <cmath> // The <cmath> header is included because we need math functions like 'sqrt' and 'pow'.
using namespace std;

struct stRectangleArea
{
    double A; // Represents one side of the rectangle.
    double D; // Represents the diagonal of the rectangle.
    double Result;
};

stRectangleArea ReadNum()
{
    stRectangleArea Num;
    cout << "Please enter rectangle side A:\n";
    cin >> Num.A;
    cout << "Please enter rectangle diagonal D:\n";
    cin >> Num.D;
    
    return Num;
}

stRectangleArea CalculateRectangleArea(stRectangleArea RectangleArea)
{
    // The formula for the other side (B) is: B = sqrt(D^2 - A^2).
    // Area = A * B. This line combines these two steps.
    RectangleArea.Result = (sqrt(pow(RectangleArea.D, 2) - pow(RectangleArea.A, 2)) * RectangleArea.A);
    return RectangleArea;
}

void PrintRectangleArea(stRectangleArea RectangleArea)
{
    cout << "Rectangle Area = " << RectangleArea.Result << endl;
}

int main()
{
    PrintRectangleArea(CalculateRectangleArea(ReadNum()));
    
    return 0;
}