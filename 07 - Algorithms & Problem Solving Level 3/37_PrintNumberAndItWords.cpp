#include<iostream>
#include<string>
#include<vector>

using namespace std;

string ReadText(string Message);
void PrintVector(vector <string>& vWords, string Separators);
int GetCountWordsInString(string Text, string Delim = " ");
vector <string> GetAllWordsInText(string Text, string Delim);

void runPrintNumberAndItWords()
{
	vector <string> vWords;
	string Text = ReadText("Please enter string\n");

	cout << "\nThe Number of Words in string = ";
	cout << GetCountWordsInString(Text);
	vWords = GetAllWordsInText(Text, " ");
	cout << "\nWords in string are\n";
	PrintVector(vWords, "\n");
}