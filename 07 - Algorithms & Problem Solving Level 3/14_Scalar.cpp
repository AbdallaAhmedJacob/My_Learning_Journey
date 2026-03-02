#include<iostream> // I/O

using namespace std;

int RandomNumber(int From, int To);
void PrintMatrix(int Matrix[3][3], short Rows, short Cols);

void FillMatrixWithScalar(int Matrix[3][3], short Rows, short Cols)
{
	short RandNum = RandomNumber(1, 100);

	for (short Col = 0; Col < Rows; Col++)
		for (short Row = 0; Row < Cols; Row++)
		{
			if (Col == Row)
				Matrix[Col][Row] = RandNum;
			else
				Matrix[Col][Row] = RandomNumber(1, 100);
		}
}

bool CheckScalar(int Matrix[3][3], short Rows, short Cols)
{
	int FirstDiagElemement = Matrix[0][0];
	for (short i = 0; i < Rows; i++) 
	{
		for (short j = 0; j < Cols; j++) 
		{ //check for diagonals element
			if (i == j && Matrix[i][j] != FirstDiagElemement)
			{
				return false;
			} 
			//check for rest elementselse
			if (i != j && Matrix[i][j] != 0)    
			{
				return false;
			}
		}
	}
				return true;
}

void runScalar()
{
	int Matrix[3][3];

	FillMatrixWithScalar(Matrix, 3, 3);

	PrintMatrix(Matrix, 3, 3);

	if (CheckScalar(Matrix, 3, 3))
		cout << "Is Scalar\n";
	else
		cout << "Is not Scalar\n";
}