#include<string>
#include<iostream>

using namespace std;

string ReadText(string Message);

string TrimRight(string S1)
{
	for (short i = S1.length() - 1; i >= 0; i--)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(0, i + 1);
		}
	}
	return"";
}

string TrimLeft(string S1)
{
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(i, S1.length() - i);
		}
	}
	return"";
}

string TrimLeftAndRight(string S1)
{
	return TrimLeft(TrimRight(S1));
}

void runTrimLeftAndRight()
{
	string S1 = ReadText("Please enter your string\n");
	cout << "String your: " << S1 << endl;
	cout << "String trim right: " << TrimRight(S1) << endl;
	cout << "String trim left: " << TrimLeft(S1) << endl;
	cout << "String trim left and right: " << TrimLeftAndRight(S1) << endl;
}