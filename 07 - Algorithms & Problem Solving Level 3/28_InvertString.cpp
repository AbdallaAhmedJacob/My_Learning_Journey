#include<iostream>
#include<string>

using namespace std;

string ReadText(string);
char InvertChar(char Char);

string InvertString(string Text)
{
	for (short i = 0; i < Text.length(); i++)
	{
		Text[i] = InvertChar(Text[i]);
	}
	return Text;
}

void runInvertString()
{
	string Text = ReadText("Please enter String\n");
	cout << "String after invert oll letters case\n";
	cout << InvertString(Text);
}
