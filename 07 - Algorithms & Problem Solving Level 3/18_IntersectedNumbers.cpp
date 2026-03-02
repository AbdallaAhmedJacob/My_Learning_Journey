#include <iostream>
#include <vector>

using namespace std;

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols, short From, short To);
void PrintMatrix(int Matrix[3][3], short Rows, short Cols);
bool CheckNumInMatrix(int Matrix[3][3], short NumCheck, short Rows, short Cols);

void getIntersectedNumbers(int Matrix1[3][3], int Matrix2[3][3], vector <int>& Container, short Rows, short Cols)
{
	for (short Col1 = 0; Col1 < Rows; Col1++)
	{
		for (short Row1 = 0; Row1 < Cols; Row1++)
		{
			if (CheckNumInMatrix(Matrix2, Matrix1[Col1][Row1], 3, 3))
				Container.push_back(Matrix1[Col1][Row1]);
		}
	}
}

void PrintVector(vector <int>& Container)
{
	for (int Element : Container)
		cout << Element << "\t";
}

void IntersectedNumbers()
{
	int Matrix1[3][3];
	FillMatrixWithRandomNumbers(Matrix1, 3, 3, 1, 10);

	int Matrix2[3][3];
	FillMatrixWithRandomNumbers(Matrix2, 3, 3, 1, 10);


	cout << "The following is Matrix1\n";
	PrintMatrix(Matrix1, 3, 3);

	cout << "The following is Matrix2\n";
	PrintMatrix(Matrix2, 3, 3);

	vector <int> IntersectedNumbers;
	getIntersectedNumbers(Matrix1, Matrix2, IntersectedNumbers, 3, 3);

	PrintVector(IntersectedNumbers);
}