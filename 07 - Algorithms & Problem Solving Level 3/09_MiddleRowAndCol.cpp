#include<iostream>
#include<cmath>

using namespace std;

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols, short From, short To);
void PrintMatrix(int Matrix[3][3], short Rows, short Cols);

void GetMiddleRow(int MiddleRows[1][3], int Matrix[3][3], short Cols)
{
	short MiddleRow = (short)ceil( Cols / 2);

	for (short Row = 0; Row < Cols; Row++)
		MiddleRows[0][Row] = Matrix[MiddleRow][Row];
}

void GetMiddleCol(int MiddleCols[1][3], int Matrix[3][3], short Rows)
{
	short MiddleCol = (short)ceil(Rows / 2);

	for (short Col = 0; Col < Rows; Col++)
		MiddleCols[0][Col] = Matrix[Col][MiddleCol];
}

void runMiddleRowAndCol()
{
	int Matrix[3][3];

	FillMatrixWithRandomNumbers(Matrix, 3, 3, 1, 100);
	
	cout << "The following is a 3x3 ordered matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	int MiddleRows[1][3];
	GetMiddleRow(MiddleRows, Matrix, 3);

	cout << "Middle Row of Matrix is\n";
	PrintMatrix(MiddleRows, 1, 3);

	int MiddleCols[1][3];
	GetMiddleCol(MiddleCols, Matrix, 3);

	cout << "Middle Col of Matrix is\n";
	PrintMatrix(MiddleCols, 1, 3);

}