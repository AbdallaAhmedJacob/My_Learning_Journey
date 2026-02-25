/*
* This program calculates the area of a circle that circumscribes a triangle.
* It gets the lengths of the three sides of the triangle from the user,
* then computes and prints the circle's area, rounded to the nearest integer.
*/

#include <iostream>
#include <cmath>

using namespace std;

struct stData
{
    float A, B, C;
    const float pi = 3.14;
    float Area;
};

stData ReadTriangleData()
{
    stData TriangleData;

    cout << "Please enter the length of side A:\n";
    cin >> TriangleData.A;

    cout << "Please enter the length of side B:\n";
    cin >> TriangleData.B;

    cout << "Please enter the length of side C:\n";
    cin >> TriangleData.C;

    return TriangleData;
}

stData CircleAreaByTriangle(stData Data)
{
    // P is the semi-perimeter of the triangle.
    float P = (Data.A + Data.B + Data.C) / 2;

    // T is the radius of the circumscribed circle.
    float T = (Data.A * Data.B * Data.C) /
        (4 * sqrt(P * (P - Data.A) * (P - Data.B) * (P - Data.C)));

    Data.Area = Data.pi * pow(T, 2);

    return Data;
}

void PrintResults(stData Data)
{
    cout << "\nCircle Area = " << round(Data.Area) << endl;
}

int main()
{
    PrintResults(CircleAreaByTriangle(ReadTriangleData()));
    return 0;
}