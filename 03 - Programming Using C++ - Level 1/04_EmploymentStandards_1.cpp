/*
This C++ program determines job eligibility based 
on age and driving license. It reads applicant data,
than checks if the applicant is over 21 years old 
and possesses a driving license. Based on these 
conditions, the program print either "Hired" or "Rejected".
*/
#include <iostream>
using namespace std;
struct stInfo
{
    unsigned short Age;
    bool HasDrivingLicense;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Pleas enter your Age\n ";
    cin >> Info.Age;

    cout << "Do you have a driving license?  0/1\n ";
    cin >> Info.HasDrivingLicense; 

    return Info;
}

bool IsAccepted(stInfo Info)
{
    return ((Info.Age > 21) && (Info.HasDrivingLicense == 1));
}

void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
    {
        cout << "\n Hired"<< endl;
    }
    else
    {
        cout << "\n Rejected" << endl;
    }
}

int main()
{
    PrintResult(ReadInfo());
}