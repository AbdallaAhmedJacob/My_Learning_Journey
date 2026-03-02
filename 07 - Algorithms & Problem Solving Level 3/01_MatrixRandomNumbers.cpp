#include <iostream>
#include <cstdlib>
#include <iomanip>  // setw()

using namespace std;

int RandomNumber(int From, int To)
{
    // Generates a random number in the range [from, to]
    if (From > To)
        return 0;    // Return 0 if invalid range

    return rand() % (To - From + 1) + From;
}

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols, short From, short To)
{
    for (short Col = 0; Col < Rows; Col++)
        for (short Row = 0; Row < Cols; Row++)
            Matrix[Col][Row] = RandomNumber(From, To);
}

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{

    for (short Col = 0; Col < Rows; Col++)
    {
        for (short Row = 0; Row < Cols; Row++)
            cout << setw(3) << Matrix[Col][Row] << "\t";

        cout << "\n";
    }
    cout << endl;
}

void runMatrixRandomDemo()
{
    int Matrix[3][3];

    FillMatrixWithRandomNumbers(Matrix, 3, 3, 1, 100);
    cout << "The following is a 3x3 random matrix:\n";
    PrintMatrix(Matrix, 3, 3);
}