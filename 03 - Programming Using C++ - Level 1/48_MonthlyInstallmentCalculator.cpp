/*
* This program calculates the monthly installment amount for a loan.
* It takes the total loan amount and the number of months to pay,
* then computes and displays the required monthly payment.
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

float MonthlyInstallment(float LoanAmount, float NumberOfMonths)
{
    return LoanAmount / NumberOfMonths;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please enter the total loan amount:\n");
    float NumberOfMonths = ReadPositiveNumber("Please enter the number of months for repayment:\n");

    cout << "\nMonthly Installment = " << MonthlyInstallment(LoanAmount, NumberOfMonths) << " dollars." << endl;

    return 0;
}