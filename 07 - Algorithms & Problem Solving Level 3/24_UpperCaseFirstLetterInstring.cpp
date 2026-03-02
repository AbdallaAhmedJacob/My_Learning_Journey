#include<string>
#include<iostream>
#include<vector>

using namespace std;

string ReadText(string Message);

string UpperFirstLetterInWords(string Text)
{
	bool FirstLetter = true;
	for (short i = 0; i < Text.length(); i++)
	{
		if (FirstLetter && Text[i] != ' ' && (short(Text[i]) >= 97 && short(Text[i]) <= 122))
			Text[i] = short(Text[i]) - 32;

		if (Text[i] == ' ')
			FirstLetter = true;
		else
			FirstLetter = false;
	}
	return Text;
}

void PrintString(string Text)
{
		cout << Text << "\n";
}

void runUpperFirstLetterInWords()
{
	string Text = ReadText("Please enter Text\n");

	string UpText = UpperFirstLetterInWords(Text);
	PrintString(UpText);
}