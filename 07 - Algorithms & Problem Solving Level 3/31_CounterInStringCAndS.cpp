#include<iostream>
#include<string>

using namespace std;

string ReadText(string);
char ReadCharacter();
short LetterCounter(string Text, char Char);
char InvertChar(char Char);

short LetterCounterCOrS(string Text, char Char)
{
	short CounterOriginal = LetterCounter(Text, Char);

	char CharInvert = InvertChar(Char);

	short CounterInvert = 0;
	for (short i = 0; i < Text.length(); i++)
	{
		if (CharInvert == Text[i])
			CounterInvert++;
	}
	return CounterOriginal + CounterInvert;
}

void runCounterInStringCAndS()
{
	string Text = ReadText("Please enter String\n");
	char Char = ReadCharacter();
	cout << "\nLetter '" << Char << "' count = ";
	cout << LetterCounter(Text, Char);

	cout << "\nLetter '" << Char << "' Or '" << InvertChar(Char) << "' count = ";
	cout << LetterCounterCOrS(Text, Char) << endl;
}
