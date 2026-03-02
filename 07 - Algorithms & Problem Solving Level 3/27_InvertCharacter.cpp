#include<iostream>

using namespace std;

char ReadCharacter()
{
	char Char;
	cout << "Please enter character\n";
	cin >> Char;
	return Char;
}

char InvertChar(char Char)
{
	if ((short(Char) >= 60 && short(Char) <= 90))
		return short(Char) + 32;
	else if ((short(Char) >= 97 && short(Char) <= 122))
		return short(Char) - 32;
	else
		return Char;
}

void runInvertCharacter()
{
	cout << InvertChar(ReadCharacter());
}
