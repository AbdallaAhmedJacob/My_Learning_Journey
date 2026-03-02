#include<iostream> // I/O

using namespace std;

int RandomNumber(int From, int To);
void PrintMatrix(int Matrix[3][3], short Rows, short Cols);
void FillMatrixWithScalar(int Matrix[3][3], short Rows, short Cols);



short ReadNumberToCheck()
{
	short Number = 0;
	do
	{
		cin >> Number;

		while (cin.fail())
		{
			// user didn't input a number
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			cout << "Invalid Number, enter valid one" << endl;
			cin >> Number;
		}
	} while (Number < 0 || Number > 101);
	return Number;
}

short HowNumberAging(short NumberCheck,  int Matrix[3][3], short Rows, short Cols)
{
	short Counter = 0;

	for (short Col = 0; Col < Rows; Col++)
	{
		for (short Row = 0; Row < Cols; Row++)
			if (Matrix[Col][Row] == NumberCheck)
				Counter++;
	}
	return Counter;
}

void runCheckNumberInMatrix()
{
	int Matrix[3][3];

	FillMatrixWithScalar(Matrix, 3, 3);

	PrintMatrix(Matrix, 3, 3);
	cout << "Enter Number to check: ";

	short NumberCheck = ReadNumberToCheck();
	cout << "Number " << NumberCheck << " is " << 
	HowNumberAging(NumberCheck, Matrix, 3, 3);

}