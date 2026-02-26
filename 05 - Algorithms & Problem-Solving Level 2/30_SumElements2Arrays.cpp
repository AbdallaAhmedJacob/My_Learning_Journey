/*
* This program demonstrates element-wise addition of two arrays of the same length.
* It fills two arrays with random numbers, calculates the sum of corresponding
* elements, and stores the results in a third array.
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do
    {
        cout << Message;
        cin >> Number;
    } while (Number < 1);
    return Number;
}

int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

void FillArrayWithRandomNumbers(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        arr[i] = RandomNumber(1, 100);
}

void PrintArray(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

void SumOf2Arrays(int arrSum[], int arrSource1[], int arrSource2[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arrSum[i] = arrSource1[i] + arrSource2[i];
    }
}

int main()
{
    srand((unsigned)time(NULL));

    int arr1[100];
    int arrLength = ReadPositiveNumber("\nEnter number of elements:\n");
    FillArrayWithRandomNumbers(arr1, arrLength);

    int arr2[100];
    FillArrayWithRandomNumbers(arr2, arrLength);

    int arrSum[100];
    SumOf2Arrays(arrSum, arr1, arr2, arrLength);

    cout << "\nArray 1 elements:\n";
    PrintArray(arr1, arrLength);

    cout << "\nArray 2 elements:\n";
    PrintArray(arr2, arrLength);

    cout << "\nSum of Array 1 and Array 2 elements (Array Sum):\n";
    PrintArray(arrSum, arrLength);
    return 0;
}