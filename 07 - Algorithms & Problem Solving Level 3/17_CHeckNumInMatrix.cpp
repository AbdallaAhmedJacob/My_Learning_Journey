#include <iostream> // I/O

using namespace std;

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols, short From, short To);
void PrintMatrix(int Matrix[3][3], short Rows, short Cols);

bool CheckNumInMatrix(int Matrix[3][3], short NumCheck, short Rows, short Cols)
{
	for (short Col = 0; Col < Rows; Col++)
		for (short Row = 0; Row < Cols; Row++)
			if (Matrix[Col][Row] == NumCheck)
				return true;
	return false;
}
void runCheckNumInMatrix()
{
	int Matrix[3][3];
	FillMatrixWithRandomNumbers(Matrix, 3, 3, 1, 100);

	cout << "The following is a 3x3 random matrix:\n";
	PrintMatrix(Matrix, 3, 3);
	
	short NumCheck = 0;
	cout << "Please enter the number to look in matrix: ";
	cin >> NumCheck;

	if (CheckNumInMatrix(Matrix, NumCheck, 3, 3))
		cout << "Yes it is there.";
	else
		cout << "No it's not there.";
	cout << endl;
}