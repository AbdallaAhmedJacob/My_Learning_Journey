#include<iostream>
#include<string>

using namespace std;

string ReadText(string);

void LettersCountSmallAndCapital(string Text, short& Capital, short& Small)
{
	for (short i = 0; i < Text.length(); i++)
	{
		if ((short(Text[i]) >= 60 && short(Text[i]) <= 90))
			Capital++;
		else if ((short(Text[i]) >= 97 && short(Text[i]) <= 122))
			Small++;
	}
}

void runLetterCounter()
{
	string Text = ReadText("Please enter String\n");
	short Capital = 0, Small = 0;
	LettersCountSmallAndCapital(Text, Capital, Small);
	cout << "\nString Length = ";
	cout << Text.length();
	cout << "\nCapital letter = " << Capital;
	cout << "\nSmall letter = " << Small;
}
