#include<string>
#include<iostream>
#include<vector>

using namespace std;

string ReadText(string Message)
{
	cout << Message;
	string Text;
	cin.ignore(1, '\n');
	getline(cin,Text);
	return Text;
}

void GetFirstLetterInWords(string Text, vector <char>& vFirstLetters)
{
	bool FirstLetter = true;
	for (short i = 0; i < Text.length(); i++)
	{
		if (FirstLetter && Text[i] != ' ')
			vFirstLetters.push_back(Text[i]);

		if (Text[i] == ' ')
			FirstLetter = true;
		else
			FirstLetter = false;
	}
}

void PrintVector(vector <char>& vFirstLetters)
{
	for (char Letter : vFirstLetters)
		cout << Letter << "\n";
}

void runPrintFirstLetterInWords()
{
	string Text = ReadText("Please enter Text\n");

	vector <char> vFirstLetters;
	GetFirstLetterInWords(Text, vFirstLetters);
	PrintVector(vFirstLetters);
}