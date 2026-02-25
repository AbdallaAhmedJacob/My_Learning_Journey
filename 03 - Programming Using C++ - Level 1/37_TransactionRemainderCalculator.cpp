/*
* This program calculates the remainder of a payment transaction.
* It asks the user for the total bill amount and the total cash paid,
* then computes and displays the change.
*/

#include <iostream>
#include <string>

using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber(string Message)
{
    float Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

float CalculateRemainder(float TotalBill, float TotalCashPaid)
{
    return TotalCashPaid - TotalBill;
}

void PrintRemainder()
{
    float TotalBill = ReadPositiveNumber("Please enter the total bill amount:\n");
    float TotalCashPaid = ReadPositiveNumber("Please enter the total cash paid:\n");

    cout << "\n---------------------------\n";
    cout << "Total Bill      = " << TotalBill << endl;
    cout << "Total Cash Paid = " << TotalCashPaid << endl;
    cout << "---------------------------\n";
    cout << "Remainder       = " << CalculateRemainder(TotalBill, TotalCashPaid) << endl;
    cout << "---------------------------\n";
}

int main()
{
    PrintRemainder();
    return 0;
}