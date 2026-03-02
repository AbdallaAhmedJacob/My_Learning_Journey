#include<string>
#include<iostream>
#include<vector>


using namespace std;

string ReadText(string Message);
void PrintVector(vector <string>& vWords, string Separators);


void PrintArrayLength100(string Array[100], short Length)
{
	for (short i = 0; i < Length; i++)
		cout << Array[i] << "\n";
}

vector <string> FillVectorWithString(string S1, string Separators);

void FillArrayWithString(string arrS1[100], string S1, short& NumWords, string Separators = " ")
{
	string sWord;
	int pos = 0;
	short Counter = 0;
	  
	while ((pos = (int)S1.find(Separators)) != std::string::npos && Counter <= 100)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
			arrS1[Counter] = sWord;
		S1.erase(0, pos + Separators.length());
		Counter++;
		NumWords++;
	}

	if (S1 != "")
	{
		arrS1[Counter] = S1;
		NumWords++;
	}
}

void runArrayOfString()
{
	string S1 = ReadText("please enter string\n");
	vector <string> vS1 = FillVectorWithString(S1, " ");
	cout << "\nVector after join\n";
	PrintVector(vS1, " ");

	string arrS1[100];
	short NumWords = 0;
	FillArrayWithString(arrS1, S1, NumWords);
	cout << "\nArray after join\n";
	PrintArrayLength100(arrS1, NumWords);
}