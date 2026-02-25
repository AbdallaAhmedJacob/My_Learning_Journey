/*
* This program implements a simple console-based calculator.
* It gets two numbers and an operation type from the user,
* then performs the calculation and prints the result.
*/

#include <iostream>
#include <string>

using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

int ReadNumber(string Message)
{
    int Number = 0;
    cout << Message;
    cin >> Number;
    return Number;
}

enOperationType ReadOpType()
{
    char OT;
    cout << "Please enter the operation type (+, -, *, /):\n";
    cin >> OT;
    return (enOperationType)OT;
}

float Calculate(float Number1, float Number2, enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return Number1 + Number2;
    case enOperationType::Subtract:
        return Number1 - Number2;
    case enOperationType::Multiply:
        return Number1 * Number2;
    case enOperationType::Divide:
        return Number1 / Number2;
    default:
        // Handle invalid operation type. Returning 0 is a common default.
        cout << "Invalid operation type!\n";
        return 0;
    }
}

int main()
{
    float Number1 = ReadNumber("Please enter the first number:\n");
    float Number2 = ReadNumber("Please enter the second number:\n");

    enOperationType OPType = ReadOpType();

    cout << "Result = " << Calculate(Number1, Number2, OPType) << endl;
    return 0;
}