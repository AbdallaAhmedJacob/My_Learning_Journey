#include <iostream>   // I/O
#include <string>     // printf()
#include <iomanip>    // setw()

using namespace std;

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols, short From, short To);
void PrintMatrix(int Matrix[3][3], short Row, short Cols);

int SumMatrixRow(int Matrix[3][3], short Row, short Cols)
{
    int SumRow = 0;

    for (short i = 0; i < Cols; i++)
    {
            SumRow += Matrix[Row][i];
    }
    return SumRow;
}

void PrintSumRow(int Matrix[3][3], short Rows, short Cols)
{
    for (short Row = 0; Row < Rows; Row++)
    {
        int SumRow = SumMatrixRow(Matrix, Row, Cols);

        printf("Row %0*d sum = %d\n", 2, Row + 1, SumRow);
    }
}

void runSumMatrixRandomDemoRow()
{
    int Matrix[3][3];
    FillMatrixWithRandomNumbers(Matrix, 3, 3, 1, 100);

    cout << "The following is a 3x3 random matrix:\n";
    PrintMatrix(Matrix,3 ,3);

    cout << "The following are the sum of each row in the matrix:\n";
    PrintSumRow(Matrix, 3, 3);
}