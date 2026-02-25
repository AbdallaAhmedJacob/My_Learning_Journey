/*
 This program asks the user for three numbers,
 then calculates their sum and average, and prints the results on the screen.
*/

#include<iostream>

using namespace std;

struct stNumbers
{
	int num[3];
	int sum = 0;
	float Avg = 0;
};

stNumbers Read3Numbers()
{
	stNumbers Numbers; 
	for (int i = 0; i < 3; i++) 
	{
		cout << "Please enter Number " << i + 1 << endl;
		cin >> Numbers.num[i];
	}

	return Numbers;
}

int SumOf3Numbers(stNumbers Numbers)
{
	for (int i = 0; i < 3; i++)
	{
		Numbers.sum += Numbers.num[i];
	}
	return Numbers.sum;
}

float CalculateAvg(stNumbers Numbers)
{
	return (float)SumOf3Numbers(Numbers) / 3;
}

void PrintResult(stNumbers Numbers)
{
	cout << "\n The sum is: " << SumOf3Numbers(Numbers) << endl;
	cout << "\n The average is: " << CalculateAvg(Numbers) << endl;
}

int main()
{
	PrintResult(Read3Numbers());

	return 0;
}