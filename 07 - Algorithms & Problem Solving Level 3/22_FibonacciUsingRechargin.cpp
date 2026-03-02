#include <iostream>

using namespace std;

void PrintArrayLength10(int Array[10]);

void FillArrayWithFibonacciSeriesUsingRecharging(int Array[10], short Length, short i)
{
	short Rote = Length;
	if (i > 1)
	{
		Array[i] = Array[i - 1] + Array[i - 2];
	}
	else
	{
		Array[i] = 1;
	}
	i++;
	Rote -= i;
	if (Rote)
	{
		FillArrayWithFibonacciSeriesUsingRecharging(Array, Length, i);
	}
}

void runFibonacciSeriesUsingRecharging()
{
	int FibonacciSeries[10];

	FillArrayWithFibonacciSeriesUsingRecharging(FibonacciSeries, 10, 0);
	PrintArrayLength10(FibonacciSeries);
}