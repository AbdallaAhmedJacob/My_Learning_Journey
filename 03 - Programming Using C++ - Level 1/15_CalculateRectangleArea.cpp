/*
* This program calculates the area of a rectangle.
* It asks the user for the width and length, then computes and prints the area.
*/

#include<iostream>

using namespace std;

struct stRectangleAre
{
	unsigned a; // 'unsigned' is used because width cannot be a negative value.
	unsigned b; // Same reason for the length.
};

stRectangleAre ReadNum()
{
	stRectangleAre Num;
	cout << "Please enter the rectangle's width (A):\n";
	cin >> Num.a;
	cout << "Please enter the rectangle's length (B):\n";
	cin >> Num.b;

	return Num;
}

unsigned int CalculateRectangleAre(stRectangleAre Num)
{
	return Num.a * Num.b;
}

void PrintResult(int RectangleAre)
{
	cout << "The rectangle's area is: " << RectangleAre << endl;
}

int main()
{
	PrintResult(CalculateRectangleAre(ReadNum()));
	return 0;
}