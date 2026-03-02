#include <iostream> // I/O

using namespace std;

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols, short From, short To);
void PrintMatrix(int Matrix[3][3], short Rows, short Cols);

bool CheckTooMatrix(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
	for (short Col = 0; Col < Rows; Col++)
		for (short Row = 0; Row < Cols; Row++)
			if (Matrix1[Col][Row] != Matrix2[Col][Row])
				return false;

	return true;
}

void FillMatrixWithOrderedNumbers(int Matrix[3][3], short Rows, short Cols);


void runCheckCompareTooMatrix()
{
	int Matrix1[3][3];
	FillMatrixWithRandomNumbers(Matrix1, 3, 3, 1, 100);

	cout << "Matrix1\n";
	PrintMatrix(Matrix1, 3, 3);

	int Matrix2[3][3];
	FillMatrixWithRandomNumbers(Matrix2, 3, 3, 1, 100);

	cout << "Matrix2\n";
	PrintMatrix(Matrix2, 3, 3);

	
	int Matrix3[3][3], Matrix4[3][3];

	FillMatrixWithOrderedNumbers(Matrix3, 3, 3);
	cout << "Matrix3\n";
	PrintMatrix(Matrix3, 3, 3);

	FillMatrixWithOrderedNumbers(Matrix4, 3, 3);
	cout << "Matrix4\n";
	PrintMatrix(Matrix4, 3, 3);

	if (CheckTooMatrix(Matrix1, Matrix2, 3, 3))
		cout << "Matrix1 = Matrix2\n";
	else
		cout << "Matrix1 != Matrix2\n";

	if (CheckTooMatrix(Matrix3, Matrix4, 3, 3))
		cout << "Matrix3 = Matrix4\n";
	else
		cout << "Matrix3 != Matrix4\n";
}