/*
 This program asks the user for a number,
 then calculates and prints half of that number.
*/

#include <iostream>
#include <string>       

using namespace std;

int ReadNumber()
{
    int Number; 

    cout << "Please enter a number:\n"; 
    cin >> Number; 

    return Number; 
}

float CalculateHalfNumber(int Num)
{
    return (float)Num / 2;
}

void PrintResult(int Num)
{
    // 'to_string' converts a number to text, so we can combine it with other text.
    string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));

    cout << endl << Result << endl;
}

int main()
{
    PrintResult(ReadNumber());

    return 0;
}