/*
* This program fills an array with random numbers and calculates the total count
* of even numbers present in the array using a simple iteration and modulo check.
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

int EvenCount(int arr[], int arrLength)
{
    int Count = 0;

    for (int i = 0; i < arrLength; i++)
        if (arr[i] % 2 == 0)
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

    cout << "\nArray Elements :\n";
    PrintArray(arr, arrLength);


    cout << "\nEven numbers count is: ";
    cout << EvenCount(arr, arrLength) << endl;

    return 0;
}