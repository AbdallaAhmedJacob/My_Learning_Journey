#include<iostream>
#include<string>

using namespace std;

string ReadText(string Message);
bool IsVowel(char Letter);


short CounterVowelsInString(string Text)
{
	short Counter = 0;
	for (short i = 0; i <= Text.length(); i++)
	{
		if (IsVowel(Text[i]))
			Counter++;
	}
	return Counter;
}

void runCounterVowelsInString()
{
	string Text = ReadText("Please enter string\n");
	cout << "Number of vowels is: " << CounterVowelsInString(Text) << endl;
}
