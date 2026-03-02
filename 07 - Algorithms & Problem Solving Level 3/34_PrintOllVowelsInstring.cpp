#include<iostream>
#include<string>
#include<vector>

using namespace std;

string ReadText(string Message);
bool IsVowel(char Letter);
void PrintVector(vector <char>&);

void GetVowelsInString(string Text, vector <char>& vContainer)
{
	for (short i = 0; i <= Text.length(); i++)
	{
		if (IsVowel(Text[i]))
			vContainer.push_back(Text[i]);
	}
}

void runPrintVowelsInString()
{
	string Text = ReadText("Please enter string\n");
	vector <char> vContainer;
	GetVowelsInString(Text, vContainer);
	cout << "Vowels in string are\n";
	PrintVector(vContainer);
}
