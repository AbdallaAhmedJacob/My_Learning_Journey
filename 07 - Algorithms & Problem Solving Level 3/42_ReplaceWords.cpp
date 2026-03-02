#include<string>
#include<iostream>
#include<vector>

using namespace std;

string ReadText(string Message);

string ReplaceWords(string S1, string OriginalWords, string ReplaceWord)
{
	short pos = S1.find(OriginalWords);

	while (pos != std::string::npos)
	{
		S1 = S1.replace(pos, OriginalWords.length(), ReplaceWord);
		pos = S1.find(OriginalWords);//find next
	}
	return S1;
}

void runReplaceWords()
{
	string S1 = "Abdalla Ahmed Abdalla";// ReadText("please enter string\n");
	cout << ReplaceWords(S1, "Abdalla", "Mohamed");
}