#include <iostream> // I/O
#include <string>   // printf()

using namespace std;

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols, short From, short To);
void PrintMatrix(int Matrix[3][3], short Rows, short Cols);

int SumMatrixCol(int Matrix[3][3], short Rows, short Col)
{
    int SumCol = 0;

    for (short i = 0; i < Rows; i++)
    {
        SumCol += Matrix[i][Col];
    }
    return SumCol;
}


void PrintSumCols(int Matrix[3][3], short Rows, short Cols)
{
    for (short Col = 0; Col < Cols; Col++)
    {
        int SumCol = SumMatrixCol(Matrix, Rows, Col);

        printf("Col %0*d sum = %d\n", 2, Col + 1, SumCol);
    }
}

void runSumMatrixRandomDemoCol()
{
    int Matrix[3][3];
    
    FillMatrixWithRandomNumbers(Matrix, 3, 3, 1, 100);

    cout << "The following is a 3x3 random matrix:\n";
    PrintMatrix(Matrix, 3, 3);

    cout << "The following are the sum of each col in the matrix:\n";
    PrintSumCols(Matrix, 3, 3);
}