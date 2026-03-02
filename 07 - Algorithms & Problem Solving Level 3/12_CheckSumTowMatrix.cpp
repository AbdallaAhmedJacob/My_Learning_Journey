#include<iostream>
using namespace std;

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols, short From, short To);
void PrintMatrix(int Matrix[3][3], short Rows, short Cols);
int SumMatrixNumbers(int Matrix[3][3], short Rows, short Cols);

bool CheckTowNumber(short Num1, short Num2)
{
	return (Num1 == Num2);
}

void runCheckSumTowMatrix()
{
	int Matrix1[3][3];
	FillMatrixWithRandomNumbers(Matrix1, 3, 3, 1, 100);

	int Matrix2[3][3];
	FillMatrixWithRandomNumbers(Matrix1, 3, 3, 1, 100);

	cout << "The following is Matrix1\n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "The following is Matrix2\n";
	PrintMatrix(Matrix2, 3, 3);

	short SumMatrix1 = SumMatrixNumbers(Matrix1, 3, 3);
	short SumMatrix2 = SumMatrixNumbers(Matrix2, 3, 3);

	if (CheckTowNumber(SumMatrix1, SumMatrix2))
		cout << "Yes,\n";
	else
		cout << "No,\n";
}
