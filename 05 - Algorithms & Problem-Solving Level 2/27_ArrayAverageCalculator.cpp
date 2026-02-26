/*
* This program fills an array with random numbers, calculates the sum of its elements,
* and then computes the average of the array.
* It demonstrates function composition for a more complex calculation.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

int SumArray(int Array[], int arrLength)
{
    int Sum = 0;
    for (int i = 0; i < arrLength; i++)
    {
        Sum += Array[i];
    }
    return Sum;
}

float ArrayAvg(int arr[], int arrLength)
{
    return (float)SumArray(arr, arrLength) / arrLength;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLength;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);

    cout << "\nAverage of numbers is : ";
    cout << ArrayAvg(arr, arrLength) << endl;
    return 0;
}