#include<string>
#include<vector>

using namespace std;

string ReadText(string Message);
void PrintString(string Text);

vector <string> FillVectorWithString(string S1, string Separators = "#//#")
{
	vector <string> vS1;
	string sWord;
	short pos = 0;

	while ((pos = S1.find(Separators)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
			vS1.push_back(sWord);
		S1.erase(0, pos + Separators.length());
	}

	if (S1 != "")
		vS1.push_back(S1);

	return vS1;
}

string JoinString(vector <string> vString, string Delim)
{
	string S1 = "";
	for (string& s : vString)
	{
		S1 = S1 + s + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}

void runVectorOfString()
{
	string S1 = ReadText("please enter string\n");
	vector <string> vS1 = FillVectorWithString(S1, " ");
	PrintString(JoinString(vS1, "#//#"));
}