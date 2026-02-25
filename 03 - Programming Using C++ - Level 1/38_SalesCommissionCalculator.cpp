/*
* This program calculates a sales commission based on total sales.
* It asks the user for the total sales amount, then applies different
* commission percentages based on sales tiers.
*/

#include <iostream>

using namespace std;

unsigned int ReadTotalSales()
{
    unsigned int Sales;
    cout << "Please enter total sales:\n";
    cin >> Sales;
    return Sales;
}

float GetCommissionPercentage(float Sales)
{
    if (Sales >= 1000000)
    {
        return 0.01; // 1%
    }
    else if (Sales >= 500000)
    {
        return 0.02; // 2%
    }
    else if (Sales >= 100000)
    {
        return 0.03; // 3%
    }
    else if (Sales >= 50000)
    {
        return 0.05; // 5%
    }
    else
    {
        return 0.00; // 0%
    }
}

float CalculateTotalCommission(float TotalSales)
{
    return GetCommissionPercentage(TotalSales) * TotalSales;
}

int main()
{
    float TotalSales = ReadTotalSales();
    cout << "\nCommission Percentage = " << GetCommissionPercentage(TotalSales) * 100 << "%\n";
    cout << "Total Commission = " << CalculateTotalCommission(TotalSales) << "\n";
    return 0;
}