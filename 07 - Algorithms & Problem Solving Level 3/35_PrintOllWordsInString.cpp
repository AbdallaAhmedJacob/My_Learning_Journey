#include<iostream>
#include<string>
#include<vector>

using namespace std;

string ReadText(string Message);

void PrintVector(vector <string>& vWords, string Separators)
{
	for (string Word : vWords)
		cout << Word << Separators;
}

vector <string> GetAllWordsInText(string Text, string Delim = " ")
{
	vector <string> vWords;
	string sWord;
	int pos = 0;

	while ((pos = (int)Text.find(Delim)) != std::string::npos)
	{
		sWord = Text.substr(0, pos);
		if (sWord != "")
			vWords.push_back(sWord);
		Text.erase(0, pos + Delim.length());
	}

	if (Text != "")
		vWords.push_back(Text);

	return vWords;
	//*** solution oldy ***\\
	
	  	  //string Tamp = "";
		  //for (short i = 0; i <= Text.length(); i++)
		  //{
		  //	if (Text[i] != Token)
		  //		Tamp += Text[i];
		  //	if (Text[i] == Token)
		  //	{
		  //		if (Tamp != "" && Tamp != to_string(Token))
		  //			vWords.push_back(Tamp);
		  //		Tamp = "";
		  //	}
		  //}
}

void runPrintWordsInString()
{
	string Text = ReadText("Please enter string\n");
	vector <string> vWords = GetAllWordsInText(Text, " ");
	cout << "Words in string are\n";
	PrintVector(vWords, "\n");
}
