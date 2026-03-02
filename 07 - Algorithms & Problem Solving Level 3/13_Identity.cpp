#include<iostream> // I/O

using namespace std;

void PrintMatrix(int Matrix[3][3], short Rows, short Cols);

void FillMatrixWithIdentity(int Matrix[3][3], short Rows, short Cols)
{
	for (short Col = 0; Col < Rows; Col++)
		for (short Row = 0; Row < Cols; Row++)
		{
			if (Col == Row)
				Matrix[Col][Row] = 1;
			else
				Matrix[Col][Row] = 0;
		}
}

bool CheckIdentity(int Matrix[3][3], short Rows, short Cols)
{
		for (short Col = 0; Col < Rows; Col++)
			for (short Row = 0; Row < Cols; Row++)
			{
				if (Col == Row && Matrix[Col][Row] != 1)
					return false;
				else if (Col != Row && Matrix[Col][Row] != 0)
					return false;
			}
			return true;
}

void runIdentity()
{
	int Matrix[3][3];

	FillMatrixWithIdentity(Matrix, 3, 3);

	PrintMatrix(Matrix, 3, 3);

	if (CheckIdentity(Matrix, 3, 3))
		cout << "\nYES: Matrix is identity."; 
	else
		cout << "\nNo: Matrix is NOT identity.";
}