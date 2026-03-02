#include <iostream>

using namespace std;

void FillArrayWithFibonacciSeries(int Array[10], short Length)
{
	for (short i = 0; i < Length; i++)
	{
		if (i > 1)
			Array[i] = Array[i - 1] + Array[i - 2];
		else
			Array[i] = 1;
	}
}

void PrintArrayLength10(int Array[10])
{
	for (short i = 0; i < 10; i++)
		cout << Array[i] << "\t";
}

void runFibonacciSeries()
{
	int FibonacciSeries[10];

	FillArrayWithFibonacciSeries(FibonacciSeries, 10);
	PrintArrayLength10(FibonacciSeries);
}