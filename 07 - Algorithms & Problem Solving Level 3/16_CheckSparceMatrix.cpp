#include<iostream> // I/O

using namespace std;

void PrintMatrix(int Matrix[3][3], short Rows, short Cols);

bool CheckSparseMatrix(int Matrix[3][3], short Rows, short Cols)
{
    short isSparse = 0;

    for (short Col = 0; Col < Rows; Col++)
        for (short Row = 0; Row < Cols; Row++)
            if (Matrix[Col][Row] == 0)
                isSparse++;
    if (isSparse > Rows * Cols / 2)
        return true;
    else
        return false;
}

void runCheckSparseMatrix()
{
	int Matrix[3][3]{ {9,0,3},{0,0,5},{4,0,3} };

    PrintMatrix(Matrix, 3, 3);

    if (CheckSparseMatrix(Matrix, 3, 3))
        cout << "Yes: It is sparse" << endl;
    else
        cout << "No: It's not sparse" << endl;
}