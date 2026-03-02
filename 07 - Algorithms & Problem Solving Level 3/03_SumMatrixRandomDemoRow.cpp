/*
* This program print matrix of numbers and
* fill sum rows in array then print it 
*/
#include<iostream> // I/O
#include<string>   // printf()

using namespace std;

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols, short From, short To);
void PrintMatrix(int Matrix[3][3], short Row, short Cols);
int SumMatrixRow(int Matrix[3][3], short Row, short Cols);

void SumMatrixRowsInArray(int Matrix[3][3], int SumArray[3], short Rows, short Cols)
{
    for (short Row = 0; Row < Rows; Row++)
        SumArray[Row] = SumMatrixRow(Matrix, Row, Cols);
}

void PrintSumRowsInArray(int SumArray[3], short Rows, short Cols)
{
    for (short Row = 0; Row < Rows; Row++)
        printf("Row %d = %d\n", Row + 1, SumArray[Row]);
}

void runSumMatrixRandomDemoRowWithArray()
{
    int Matrix[3][3];
    FillMatrixWithRandomNumbers(Matrix, 3, 3, 1, 100);

    cout << "The following is a 3x3 random matrix:\n";
    PrintMatrix(Matrix, 3, 3);

    int SumArray[3];
    SumMatrixRowsInArray(Matrix, SumArray, 3, 3);

    cout << "The following are the sum of each row in the matrix in array:\n";
    PrintSumRowsInArray(SumArray, 3, 3);
}