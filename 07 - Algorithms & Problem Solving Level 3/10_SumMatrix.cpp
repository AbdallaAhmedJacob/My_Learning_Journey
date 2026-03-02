#include <iostream> // I/O

using namespace std;

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols, short From, short To);
void PrintMatrix(int Matrix[3][3], short Rows, short Cols);

int SumMatrixNumbers(int Matrix[3][3], short Rows, short Cols)
{
	int SumMatrix = 0;

    for (short Col = 0; Col < Rows; Col++)
        for (short Row = 0; Row < Cols; Row++)
            SumMatrix += Matrix[Col][Row];
 
	return SumMatrix;
}


void runSumMatrixRandomNumbers()
{
	int Matrix[3][3];
	FillMatrixWithRandomNumbers(Matrix, 3, 3, 1, 100);

	cout << "The following is a 3x3 random matrix:\n";
	PrintMatrix(Matrix, 3, 3);

	cout << "Sum of Matrix is: ";
	cout << SumMatrixNumbers(Matrix, 3, 3);
	cout << endl;
}