/*
* This program fills an array with random numbers (including negative ones)
* and counts the total number of negative elements in the array.
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
        arr[i] = RandomNumber(-100, 100);
}

int NegativeCount(int arr[], int arrLength)
{
    int Count = 0;

    for (int i = 0; i < arrLength; i++)
        if (arr[i] < 0)
            Count++;

    return Count;
}

void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrLength = 0;

    FillArrayWithRandomNumbers(arr, arrLength);

    cout << "\nArray 1 Elements :\n";
    PrintArray(arr, arrLength);


    cout << "\nNegative numbers count is: ";
    cout << NegativeCount(arr, arrLength) << endl;

    return 0;
}