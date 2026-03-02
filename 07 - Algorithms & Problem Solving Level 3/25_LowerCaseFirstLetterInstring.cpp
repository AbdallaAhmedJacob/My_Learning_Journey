#include<string>
#include<iostream>
#include<vector>

using namespace std;

string ReadText(string Message);
void PrintString(string Text);

string LowerFirstLetterInWords(string Text)
{
	bool FirstLetter = true;
	for (short i = 0; i < Text.length(); i++)
	{
		if (FirstLetter && Text[i] != ' ' && (short(Text[i]) >= 60 && short(Text[i]) <= 90))
			Text[i] = short(Text[i]) + 32;

		if (Text[i] == ' ')
			FirstLetter = true;
		else
			FirstLetter = false;
	}
	return Text;
}

void runLowerFirstLetterInWords()
{
	string Text = ReadText("Please enter Text\n");

	string UpText = LowerFirstLetterInWords(Text);
	PrintString(UpText);
}