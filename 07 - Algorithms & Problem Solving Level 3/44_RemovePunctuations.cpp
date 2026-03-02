#include<string>
#include<iostream>

using namespace std;

string ReadText(string Message);

bool IsLetter(char C1)
{
	if ((short(C1) >= 97 && short(C1) <= 122) || (short(C1) >= 60 && short(C1) <= 90))
		return true;
	return false;
}
// 48:58
bool IsNumber(char C1)
{
	if ((short(C1) >= 48 && short(C1) <= 58))
		return true;
	return false;
}

string RemovePunctuations(string S1)
{
	/*for (short i = 0; i <= S1.length(); i++)
	{
		if (!(IsLetter(S1[i]) || S1[i] == ' ' || IsNumber(S1[i])))
		{
			S1.erase(S1.find(S1[i]), 1);
			i--;
		}
	}*/
	short i = 0;
	while (true)
	{
		if (!(IsLetter(S1[i]) || S1[i] == ' ' || IsNumber(S1[i])))
		{
			S1.erase(S1.find(S1[i]), 1);
			i--;
		}
		i++;
		if (i == S1.length())
			break;
	}

	return S1;
}

void runRemovePunctuations()
{
	string S1 = ReadText("Please enter string:\n");
	cout << "Punctuations remove:\n";
	cout << RemovePunctuations(S1);
}