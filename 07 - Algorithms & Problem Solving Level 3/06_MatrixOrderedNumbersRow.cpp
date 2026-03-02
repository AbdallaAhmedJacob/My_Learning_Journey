#include<iostream> // I/O

using namespace std;

void PrintMatrix(int Matrix[3][3], short Rows, short Cols);

void FillMatrixWithOrderedNumbers(int Matrix[3][3], short Rows, short Cols)
{
	int Counter = 1;

	for (short Col = 0; Col < Rows; Col++)
	{
		for (short Row = 0; Row < Cols; Row++)
		{
			Matrix[Col][Row] = Counter;
			Counter++;
		}
	}
}

void runMatrixOrderedDemo()
{
	int Matrix[3][3];

	FillMatrixWithOrderedNumbers(Matrix, 3, 3);

	cout << "The following is a 3x3 ordered matrix:\n";
	PrintMatrix(Matrix, 3, 3);
}