#include <iostream>

using namespace std;

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols, short From, short To);
void PrintMatrix(int Matrix[3][3], short Rows, short Cols);

int GetMinimumNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
{
	int MinNumber = Matrix[0][0];
	for (short Col = 0; Col < Rows; Col++)
	{
		for (short Row = 0; Row < Cols; Row++)
		{
			if (MinNumber > Matrix[Col][Row])
				MinNumber = Matrix[Col][Row];
		}
	}
	return MinNumber;
}

int GetMaxNumberInMatrix(int Matrix[3][3], short Rows, short Cols)
{
	int MaxNumber = Matrix[0][0];
	for (short Col = 0; Col < Rows; Col++)
	{
		for (short Row = 0; Row < Cols; Row++)
		{
			if (MaxNumber < Matrix[Col][Row])
				MaxNumber = Matrix[Col][Row];
		}
	}
	return MaxNumber;
}

void runMinAndMaxNumbersInMatrix()
{
	int Matrix1[3][3];
	FillMatrixWithRandomNumbers(Matrix1, 3, 3, 1, 100);

	cout << "The following is Matrix1\n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "Minimum Number is: ";
	cout << GetMinimumNumberInMatrix(Matrix1, 3, 3) << "\n";
	cout << endl;
	cout << "Max Number is: ";
	cout << GetMaxNumberInMatrix(Matrix1, 3, 3) << endl;
}