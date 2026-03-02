#include<string>
#include<iostream>
#include<vector>

using namespace std;

string ReadText(string Message);
vector <string> FillVectorWithString(string S1, string Separators);
void PrintVector(vector <string>& vWords, string Separators);

vector <string> ReverserWords(vector <string> vS1)
{
	short Counter = -1;
	for (string s1 : vS1)
		Counter++;

	vector <string> vReverseS1;
	for (short i = Counter; i >= 0; i--)
		vReverseS1.push_back(vS1[i]);
	return vReverseS1;
}

void runReverserWords()
{
	string S1 = ReadText("please enter string\n");
	cout << "string after reversing words\n";
	vector <string> vReverseS1 = ReverserWords(FillVectorWithString(S1, " "));
	PrintVector(vReverseS1, " ");
}