/*
* This program reads a positive integer from the user and prints its digits
* from left to right. It first reverses the number and then prints the digits
* of the reversed number one by one.
*/

#include <iostream>
#include <string>

using namespace std;

 
int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << "\n";
		cin >> Number;
	} while (Number < 1);

	return Number;
}

  
int ReverseNumber(int Number)
{
	int Remainder = 0;
	int ReversedNumber = 0;

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		ReversedNumber = ReversedNumber * 10 + Remainder;
	}
	return ReversedNumber;
}

void PrintDigits(int Number)
{
	int Remainder = 0;

	cout << "The digits are:\n";
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number /= 10;
		cout << Remainder << endl;
	}
}

int main()
{
	PrintDigits(ReverseNumber(ReadPositiveNumber("Please enter a positive number: ")));
	return 0;
}