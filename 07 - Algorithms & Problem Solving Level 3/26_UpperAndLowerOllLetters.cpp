#include<string>
#include<iostream>
#include<vector>

using namespace std;

string ReadText(string Message);
void PrintString(string Text);

string UpperOllLetterInWords(string Text)
{
	for (short i = 0; i < Text.length(); i++)
	{
		if (short(Text[i]) >= 97 && short(Text[i]) <= 122)
			Text[i] = short(Text[i]) - 32;
	}
	return Text;
}

string LowerOllLetterInWords(string Text)
{
	for (short i = 0; i < Text.length(); i++)
	{
		if (short(Text[i]) >= 60 && short(Text[i]) <= 97)
			Text[i] = short(Text[i]) + 32;
	}
	return Text;
}

void runUpperLowerOllLetter()
{
	string Text = ReadText("Please enter Text\n");

	string UpText = UpperOllLetterInWords(Text);

	cout << "\nString after upper\n";
	PrintString(UpText);

	string LoText = LowerOllLetterInWords(Text);

	cout << "\nString after lower\n";
	PrintString(LoText);
}