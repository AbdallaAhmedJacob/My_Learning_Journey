/*
* This program fills an array with random numbers and then finds and prints
* the minimum number in that array.
* The logic is a simple variation of the algorithm for finding the maximum number.
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

int MinNumberInArray(int Array[], int arrLength)
{
    int Min = Array[0];
    for (int i = 1; i < arrLength; i++)
    {
        if (Array[i] < Min)
            Min = Array[i];
    }
    return Min;
}

int main()
{
    srand((unsigned)time(NULL));
    int arr[100];
    int arrLength;
    FillArrayWithRandomNumbers(arr, arrLength);
    cout << "\nArray Elements: ";
    PrintArray(arr, arrLength);
    cout << "\nMin number = " << MinNumberInArray(arr, arrLength) << endl;
    return 0;
}