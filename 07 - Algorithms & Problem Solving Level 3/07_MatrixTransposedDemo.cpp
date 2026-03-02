#include<iostream>
#include<iomanip>

using namespace std;

void FillMatrixWithOrderedNumbers(int Matrix[3][3], short Rows, short Cols);
void PrintMatrix(int Matrix[3][3], short Rows, short Cols);

void PrintMatrixTransposed(int Matrix[3][3], short Rows, short Cols)
{
    for (short Row = 0; Row < Cols; Row++)
    {
        for (short Col = 0; Col < Rows; Col++)
            cout << setw(3) << Matrix[Col][Row] << "\t";

        cout << "\n";
    }
    cout << endl;
}

void runMatrixTransposedDemo()
{
	int Matrix[3][3];

	FillMatrixWithOrderedNumbers(Matrix, 3, 3);

    cout << "The following is a 3x3 ordered matrix:\n";
    PrintMatrix(Matrix, 3, 3);

	cout << "The following is a 3x3 transposed matrix:\n";
	PrintMatrixTransposed(Matrix, 3, 3);
}