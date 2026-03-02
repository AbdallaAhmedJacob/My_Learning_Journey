#include<iostream>

using namespace std;

char ReadCharacter();


char ToUpper(char Char)
{
	if (short(Char) >= 97 && short(Char) <= 122)
		Char = char(short(Char) - 32);

	return Char;
}

bool IsVowel(char Letter)
{
	Letter = ToUpper(Letter);

	return ((Letter == 'A') || (Letter == 'E') || (Letter == 'I') || (Letter == 'O') || (Letter == 'U'));
}

void runCheckerVowelLetters()
{
	char Letter = ReadCharacter();
	if (IsVowel(Letter))
		cout << "Yes, letter '" << Letter << "' is vowel\n";
	else
		cout << "No, letter '" << Letter << "' is not vowel\n";
}