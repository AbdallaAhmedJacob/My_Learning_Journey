#include<iostream>
#include<string>

using namespace std;

string ReadText(string);
char ReadCharacter();

short LetterCounter(string Text,char Char)
{
	short Count = 0;
	for (short i = 0; i < Text.length(); i++)
	{
		if (Char == Text[i])
			Count++;
	}
	return Count;
}

void runCounterInString()
{
	string Text = ReadText("Please enter String\n");
	char Char = ReadCharacter();
	cout << "Letter '" << Char << "' count = ";
	cout << LetterCounter(Text, Char);
}
