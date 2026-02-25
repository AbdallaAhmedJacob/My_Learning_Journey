/*
 This program asks the user to enter three grades,
 then calculates their sum and average,
 and checks if the student passed or failed.
 Finally, it prints the result on the screen.
*/

#include <iostream>
using namespace std;

struct stStudentGrade
{
    unsigned short Grade[3];
    unsigned short Sum = 0;
    float Avg = 0;
};

stStudentGrade ReadStudentGrade()
{
    stStudentGrade Read;

    for (int i = 0; i < 3; i++)
    {
        cout << "Please enter your Grade " << i + 1 << endl;
        cin >> Read.Grade[i];
    }

    return Read;
}

unsigned short CalculateTheTotalScore(stStudentGrade Calculate)
{
    for (int i = 0; i < 3; i++)
    {
        Calculate.Sum += Calculate.Grade[i];
    }
    return Calculate.Sum;
}

float CalculatingGradePointAverage(int Sum)
{
    return (float)Sum / 3;
}

bool CalculateResult(float Avg)
{
    return (Avg >= 50);
}

void PrintResult(bool PASSOrFail)
{
    if (PASSOrFail)
        cout << "PASS \n";
    else
        cout << "Fail \n";
}

int main()
{
    stStudentGrade student = ReadStudentGrade();
    float average = CalculatingGradePointAverage(CalculateTheTotalScore(student));
    bool result = CalculateResult(average);

    PrintResult(result);

    return 0;
}