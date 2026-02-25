/*
* This program prints the uppercase English alphabet from A to Z.
* It uses a for loop to iterate through the ASCII values of the characters.
*/

#include <iostream>

using namespace std;

// Prints the uppercase letters of the English alphabet from 'A' to 'Z'.
// It iterates through the ASCII values from 65 ('A') to 90 ('Z')
// and casts each integer to a character.
void PrintLettersAtoZ()
{
    for (int i = 65; i <= 90; i++)
    {
        cout << (char)i << endl;
    }
}

void PrintLettersAtoZ_V2()
{
    for (char c = 'A'; c <= 'Z'; c++)
    {
        cout << c << endl;
    }
}


int main()
{
    cout << "Version 1: Using ASCII values\n";
    PrintLettersAtoZ();

    cout << "\nVersion 2: Using characters directly\n";
    PrintLettersAtoZ_V2();

    return 0;
}