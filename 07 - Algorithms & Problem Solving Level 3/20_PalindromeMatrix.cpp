#include <iostream>

using namespace std;

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols, short From, short To);
void PrintMatrix(int Matrix[3][3], short Rows, short Cols);

void ReverseMatrix(int Matrix[3][3], int Reverse[3][3], short Rows, short Cols)
{
	for (short Col = 0; Col < Rows; Col++)
	{
		for (short Row = 0; Row < Cols; Row++)
		{
			Reverse[Col][Rows - 1 - Row] = Matrix[Col][Row];
		}
	}
}
bool IsPalindromeNumber(int Matrix[3][3], short Rows, short Cols)
{
	int Reverse[3][3];
	ReverseMatrix(Matrix, Reverse, 3, 3);

	for (short Col = 0; Col < Rows; Col++)
	{
		for (short Row = 0; Row < Cols; Row++)
		{
			if (Reverse[Col][Row] != Matrix[Col][Row])
				return false;
		}
	}
	return true;
}

void runPalindromeMatrix()
{
	int Matrix1[3][3]{ {1,2,1},{5,5,5},{2,1,2} };
	PrintMatrix(Matrix1, 3, 3);
	if (IsPalindromeNumber(Matrix1, 3, 3))
		cout << "Yes, Matrix is Palindrome\n";
	else
		cout << "No, Matrix is Not Palindrome\n";

	int Matrix2[3][3];
	FillMatrixWithRandomNumbers(Matrix2, 3, 3, 0, 10);
	PrintMatrix(Matrix2, 3, 3);
	if (IsPalindromeNumber(Matrix2, 3, 3))
		cout << "Yes, Matrix is Palindrome\n";
	else
		cout << "No, Matrix is Not Palindrome\n";
}