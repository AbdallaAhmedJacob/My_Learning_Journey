/*
* This program calculates the area of a circle inscribed in an isosceles triangle.
* It gets the lengths of the two equal sides and the base from the user,
* then computes and prints the area of the inscribed circle.
*/

#include <iostream>
#include <cmath> // Required for the pow() and floor() functions.

using namespace std; // Using standard namespace to avoid std:: prefix.

struct stData
{
    const float pi = 3.14;
    float a, b;
    float Area;
};

stData ReadTriangleData()
{
    stData TriangleData;

    cout << "Please enter the length of the equal side (A):\n";
    cin >> TriangleData.a;

    cout << "Please enter the length of the base (B):\n";
    cin >> TriangleData.b;

    return TriangleData;
}

// Calculates the area of the inscribed circle using the triangle's dimensions.
// This function applies the geometric formula for this specific case.
stData CircleAreaByITriangle(stData TriangleData)
{
    TriangleData.Area = TriangleData.pi * (pow(TriangleData.b, 2) / 4) *
        (2 * TriangleData.a - TriangleData.b) / (2 * TriangleData.a + TriangleData.b);

    return TriangleData;
}

void PrintResults(stData TriangleData)
{
    cout << "Circle Area = " << floor(TriangleData.Area) << endl;
}

int main()
{
    PrintResults(CircleAreaByITriangle(ReadTriangleData()));
    return 0;
}