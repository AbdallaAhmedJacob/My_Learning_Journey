#include <iostream>
#include <string>
#include <limits>

using namespace std;

int ReadNumber(string message)
{
	int Number = 0;
	while (true)
	{
		cout << message;
		cin >> Number;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a valid number.\n";
		}
		else
			return Number;
	}
}

/*
string GetTextDigit(int Number)
{
	switch (Number)
	{
	case 1:  return "One";
	case 2:  return "Two";
	case 3:  return "Three";
	case 4:  return "Four";
	case 5:  return "Five";
	case 6:  return "Six";
	case 7:  return "Seven";
	case 8:  return "Eight";
	case 9:  return "Nine";
	case 10: return "Ten";
	case 11: return "Eleven";
	case 12: return "Twelve";
	case 13: return "Thirteen";
	case 14: return "Fourteen";
	case 15: return "Fifteen";
	case 16: return "Sixteen";
	case 17: return "Seventeen";
	case 18: return "Eighteen";
	case 19: return "Nineteen";
	default: return "";
	}
}
*/

string GetTextDigit(int Number)
{
	string arrNumbers[]{ "", "One",	"Two",	"Three",	"Four",
		"Five",	"Six",	"Seven",	"Eight",	"Nine",	"Ten",
		"Eleven",	"Twelve",	"Thirteen",	"Fourteen",	"Fifteen",
		"Sixteen",	"Seventeen",	"Eighteen",	"Nineteen" 
	};

	return (Number < 20) ? arrNumbers[Number] : "";
}

string GetTextForTens(int Number)
{
	switch (Number)
	{
	case 20: return "Twenty";
	case 30: return "Thirty";
	case 40: return "Forty";
	case 50: return "Fifty";
	case 60: return "Sixty";
	case 70: return "Seventy";
	case 80: return "Eighty";
	case 90: return "Ninety";
	default: return "";
	}
}

string GetTextTens(int Number)
{
	if (Number > 0 && Number < 100)
	{
		if (Number < 20)
			return GetTextDigit(Number);
		else
		{
			string NumberText = "";
			short tempNum = 0;

			tempNum = Number / 10;
			tempNum *= 10;

			NumberText = GetTextForTens(tempNum);

			tempNum = Number % 10;

			if (tempNum > 0)
				return NumberText + " " + GetTextDigit(tempNum);
			else
				return NumberText;
		}
	}
	return "";
}

string AddS(string word, short Digit)
{
	if (Digit == 1)
		return word;
	else
		return word + 's';
}

string GetHundreds(int Number)
{
	if (Number < 1 || Number > 999)
		return "";

	string NumberText = "";
	int tempNum = 0;

	if (Number > 99)
	{
		tempNum = Number / 100;
		NumberText = GetTextDigit(tempNum) + " " + AddS("Hundred", tempNum);
	}

	tempNum = Number % 100;
	if (tempNum > 0)
	{
		if (!NumberText.empty())
			NumberText += " and ";
		else
			NumberText += "";

		NumberText += GetTextTens(tempNum);
	}

	return NumberText;
}

string NumberToText_Iterative(int Number)
{
	if (Number < 1)
		return "";
	if (Number == 0)
		return "Zero";

	string NumberText = "";
	int tempNumber = Number;
	int chunk = 0;
	string unit = "";
	int i = 0;

	string Units[] = { "", "Thousand", "Million", "Billion" };

	while (tempNumber > 0)
	{
		chunk = tempNumber % 1000;
		if (chunk != 0)
		{
			string currentText = GetHundreds(chunk);
			if (i > 0)
				currentText += " " + AddS(Units[i], chunk);

			if (!NumberText.empty())
				NumberText = currentText + " " + NumberText;
			else
				NumberText = currentText;
		}

		tempNumber /= 1000;
		i++;
	}

	return NumberText;
}

string GetTextTensUsingArray(int Number)
{
	string Text[]{ "", "", "Twenty", "Thirty", "Forty",
		"Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
	};
	if (Number >= 20 && Number <= 90 && Number % 10 == 0)
		return Text[Number / 10];
	return "";
}

string NumberToText_Recursive(int Number)
{
	if (Number < 0)
		return "";
	if (Number == 0)
		return "Zero";

	if (Number < 20)
		return GetTextDigit(Number);
	if (Number < 100)
	{
		string tens = GetTextTensUsingArray(Number - (Number % 10));
		string ones = GetTextDigit(Number % 10);
		if (!ones.empty())
			return tens + " " + ones;
		return tens;
	}
	if (Number < 1000)
	{
		string hundredPart = GetTextDigit(Number / 100) + " " + AddS("Hundred", Number / 100);
		string remainder = NumberToText_Recursive(Number % 100);
		if (!remainder.empty())
			return hundredPart + " and " + remainder;
		return hundredPart;
	}
	if (Number < 1000000)
		return NumberToText_Recursive(Number / 1000) + " " + AddS("Thousand", Number / 1000) + " " + NumberToText_Recursive(Number % 1000);
	if (Number < 1000000000)
		return NumberToText_Recursive(Number / 1000000) + " " + AddS("Million", Number / 1000000) + " " + NumberToText_Recursive(Number % 1000000);
	if (Number <= 2147483647)
		return NumberToText_Recursive(Number / 1000000000) + " " + AddS("Billion", Number / 1000000000) + " " + NumberToText_Recursive(Number % 1000000000);

	return "";
}

void runNumberToText()
{
	int Number = ReadNumber("Please enter a number (up to 2 billion): ");

	cout << "\nUsing Iterative Approach\n";
	cout << NumberToText_Iterative(Number) << endl;

	cout << "\nUsing Recursive Approach\n";
	cout << NumberToText_Recursive(Number) << endl;
}