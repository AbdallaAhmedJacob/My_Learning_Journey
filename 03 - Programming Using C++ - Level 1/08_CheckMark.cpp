/*
 This program asks the user to enter a mark, then checks if it is
 a passing grade (50 or more) or a failing grade (less than 50).

*/

#include <iostream>

using namespace std;

enum enPassFail{Pass = 1,Fail = 2};

unsigned short ReadMark()
{
    unsigned short Mark; // We use 'unsigned short' because a mark cannot be negative.

    cout << "Please enter your Mark: \n"; // 'cout' is used to print a message to the user.
    cin >> Mark; 

    return Mark; 
}

enPassFail CheckMark(unsigned short Mark)
{
    if (Mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResult(unsigned short Mark)
{
    if (CheckMark(Mark) == enPassFail::Pass)
        cout << "\n You PASS\n";
    else
        cout << "\n You FAIL\n";
}

int main()
{
    PrintResult(ReadMark());

    return 0;
}