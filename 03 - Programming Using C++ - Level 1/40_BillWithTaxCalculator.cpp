/*
* This program calculates the total bill after adding a service fee and sales tax.
* It asks the user for the initial bill amount, then applies the fees and tax,
* and displays the final total.
*/

#include <iostream>
#include <string>

using namespace std;

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

float TotalBillAfterServiceAndTax(float TotalBill)
{
    TotalBill *= 1.1; // Add 10% service fee (1.0 + 0.10)
    TotalBill *= 1.16; // Add 16% sales tax (1.0 + 0.16)
    return TotalBill;
}

void PrintTotalBillAfterServiceAndTax()
{
    float TotalBill = ReadPositiveNumber("Please enter the total bill amount:\n");
    cout << "\n----------------------------------------\n";
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Bill After service Fee and Sales Tax = "
        << TotalBillAfterServiceAndTax(TotalBill) << endl;
    cout << "----------------------------------------\n";
}

int main()
{
    PrintTotalBillAfterServiceAndTax();
    return 0;
}