#include<iostream>
#include<string>
#include<vector>

using namespace std;

string ReadText(string Message);
vector <string> GetAllWordsInText(string Text, string Delim = " ");


int GetCountWordsInString(string Text, string Delim = " ")
{
	vector <string> vWords = GetAllWordsInText(Text, Delim);

	return (int)vWords.size();

	/*
	
	int Count = 0;
	string Tamp = "";

	for (short i = 0; i <= Text.length(); i++)
	{
		if (to_string(Text[i]) != Delim)
			Tamp += Text[i];
		if (to_string(Text[i]) == Delim)
		{
			if (Tamp != "" && Tamp != Delim)
				Count++;
			Tamp = "";
		}
	}
	return Count;
	*/
}

void runCountWordsInString()
{
	string Text = ReadText("Please enter string\n");
	cout << "The Number of Words in string = ";
	cout << GetCountWordsInString(Text);
}
