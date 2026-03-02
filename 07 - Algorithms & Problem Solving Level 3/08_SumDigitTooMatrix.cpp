#include <iostream> // I/O

using namespace std;

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols, short From, short To);
void PrintMatrix(int Matrix[3][3], short Rows, short Cols);

void SumTooMatrix(int Matrix1[3][3], int Matrix2[3][3], int SumMatrix[3][3], short Rows, short Cols)
{
	for (short Col = 0; Col < Rows; Col++)
	{
		for (short Row = 0; Row < Cols; Row++)
			SumMatrix[Col][Row] = Matrix1[Col][Row] + Matrix2[Col][Row];
	}
}

void runSumDigitTooMatrix()
{
	int Matrix1[3][3];
	FillMatrixWithRandomNumbers(Matrix1, 3, 3, 1, 100);

	cout << "Matrix1\n";
	PrintMatrix(Matrix1, 3, 3);

	int Matrix2[3][3];
	FillMatrixWithRandomNumbers(Matrix2, 3, 3, 1, 100);
	
	cout << "Matrix2\n";
	PrintMatrix(Matrix2, 3, 3);

	int SumMatrix[3][3];
	SumTooMatrix(Matrix1, Matrix2, SumMatrix, 3, 3);
	
	cout << "Result\n";
	PrintMatrix(SumMatrix, 3, 3);
}