/*
* This program calculates the factorial of a positive number entered by the user.
* It ensures the number is positive through a validation loop,
* then computes and prints the result.
*/

#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Num;
    do
    {
        cout << Message;
        cin >> Num;
    } while (Num < 0);

    return Num;
}

int Factorial(int N)
{
    if (N <= 1) {
        return 1;
    }

    int result = 1;
    for (int counter = 2; counter <= N; counter++)
    {
        result *= counter;
    }

    return result;
}

void PrintFactorial(int factorial)
{
    cout << "Factorial = " << factorial << endl;
}

int main()
{
    PrintFactorial(Factorial(ReadPositiveNumber("Please enter a positive number:\n")));
}