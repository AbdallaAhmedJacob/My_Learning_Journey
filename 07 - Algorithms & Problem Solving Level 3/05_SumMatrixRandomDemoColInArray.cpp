// 05
#include <iostream> // I/O
#include <string>   // printf()

using namespace std;

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols, short From, short To);
void PrintMatrix(int Matrix[3][3], short Row, short Cols);
int SumMatrixCol(int Matrix[3][3], short Rows, short Col);

void SumMatrixColsInArray(int Matrix[3][3], int SumArray[3], short Rows, short Cols)
{
    for (short Col = 0; Col < Rows; Col++)
        SumArray[Col] = SumMatrixCol(Matrix, Rows, Col);
}

void PrintSumColsInArray(int SumArray[3], short Rows, short Cols)
{
    for (short Col = 0; Col < Rows; Col++)
        printf("Col %d = %d\n", Col + 1, SumArray[Col]);
}

void runSumMatrixRandomDemoColInArray()
{
    int Matrix[3][3];
    FillMatrixWithRandomNumbers(Matrix, 3, 3, 1, 100);

    cout << "The following is a 3x3 random matrix:\n";
    PrintMatrix(Matrix, 3, 3);

    int SumArray[3];
    SumMatrixColsInArray(Matrix, SumArray, 3, 3);

    cout << "The following are the sum of each col in the matrix in array:\n";
    PrintSumColsInArray(SumArray, 3, 3);
}

