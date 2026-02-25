/*
 This program asks the user for their first and last name, then prints the full name.
*/

#include <iostream>
#include <string>

using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please enter your First Name:\n";
    getline(cin, Info.FirstName);

    cout << "Please enter your Last Name:\n";
    getline(cin, Info.LastName);

    return Info;
}

string GetFullName(stInfo Info)
{
    return Info.FirstName + " " + Info.LastName;
}

void PrintFullName(string FullName)
{
    cout << "\n Your name is: " << FullName << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadInfo()));

    return 0;
}