/*
* This program ensures a user's age is within a specific range.
* It repeatedly prompts for an age until a valid value (between 18 and 45) is entered,
* then prints the valid age.
*/

#include <iostream>

using namespace std;

int ReadAge()
{
    int Age;
    cout << "Please enter your age:\n";
    cin >> Age;
    return Age;
}

// Checks if a number falls within a given range, inclusive.
// Returns 'true' if the number is within the range, otherwise 'false'.
bool ValidateNumberInRange(int Num, int From, int To)
{
    return (Num >= From && Num <= To);
}

int ReadUntilAgeBetween(int From, int To)
{
    int Age;
    do
    {
        Age = ReadAge();
        if (!ValidateNumberInRange(Age, From, To))
        {
            cout << Age << " is an invalid age. Please try again.\n";
        }
    } while (!ValidateNumberInRange(Age, From, To));

    return Age;
}

void PrintResult(int Age)
{
    cout << Age << " is a valid age.\n";
}

int main()
{
    PrintResult(ReadUntilAgeBetween(18, 45));
    return 0;
}