/*
 This program asks the user for three numbers,
 then calculates and prints their sum on the screen.
*/

#include<iostream>

using namespace std;

struct stNumbers
{
	int num[3];
	int sum = 0;
};

stNumbers Read3Numbers()
{
	stNumbers Number;

	for (int i = 0; i <= 3 - 1; i++)
	{
		cout << "Please enter Number " << i + 1 << endl;
		cin >> Number.num[i];
	}

	return Number;
}

int SumOf3Numbers(stNumbers Number)
{
	for (int i = 0; i <= 3 - 1; i++)
	{
		Number.sum += Number.num[i];
	}
	return Number.sum;
}

void PrintResult(int Number)
{
	cout << "The sum of the entered numbers is: " << Number << endl;
}

int main()
{
	PrintResult(SumOf3Numbers(Read3Numbers()));

	return 0;
}