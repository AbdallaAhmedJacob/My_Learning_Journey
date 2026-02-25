/*
* This program calculates the total number of months required to pay off a loan.
* It asks the user for the loan amount and the monthly installment,
* then computes and displays the result.
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

float TotalMonths(float LoanAmount, float MonthlyInstallment)
{
    return LoanAmount / MonthlyInstallment;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please enter the total loan amount:\n");
    float MonthlyInstallment = ReadPositiveNumber("Please enter the monthly installment amount:\n");

    cout << "\nTotal Months to pay = " << TotalMonths(LoanAmount, MonthlyInstallment) << " months." << endl;

    return 0;
}