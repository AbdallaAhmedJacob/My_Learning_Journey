/*
 This program determines if a job applicant is hired or rejected.
 It checks for two main criteria: having a certificate, or a combination of
 being over 21 and possessing a driving license.
*/
#include <iostream>
using namespace std;

struct stInfo
{
    unsigned short Age;
    bool HasDrivingLicense;
    bool HasCertificate;
};

stInfo ReadInfo()
{
    stInfo Info;

    cout << "Please enter your Age \n";
    cin >> Info.Age;

    cout << "Do you have a driving license?  0/1 \n";
    cin >> Info.HasDrivingLicense;

    cout << "Do you have a certificate?  0/1 \n";
    cin >> Info.HasCertificate;

    return Info;
}

bool IsAccepted(stInfo Info)
{
    if (Info.HasCertificate)
        return true;
    else
        return (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
        cout << "\n Hired" << endl;
    else
        cout << "\n Rejected" << endl;
}

int main()
{
    PrintResult(ReadInfo());
    return 0;
}