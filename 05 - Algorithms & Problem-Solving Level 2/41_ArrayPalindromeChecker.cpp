/*
* This program checks if an array of integers is a palindrome by comparing the original
* array with a reversed copy of itself.
*/

#include <iostream>

using namespace std;


void FillArray(int arr[], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
        cout << "Enter element number " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void ReverseArray(int arrSource[], int arrDestination[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        arrDestination[i] = arrSource[arrLength - 1 - i];
    }
}

bool IsPalindromeNumber(int arr1[], int arr2[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        if (arr1[i] != arr2[i])
            return false;

    return true;
}

void PrintArray(int arr[], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}


int main()
{
    int arr[100];
    int arrReversed[100];
    int arrLength = 0;

    FillArray(arr, arrLength);
    cout << "\nArray Elements :\n";
    PrintArray(arr, arrLength);

    ReverseArray(arr, arrReversed, arrLength);

    if (IsPalindromeNumber(arr, arrReversed, arrLength))
        cout << "\nYes, the array is a palindrome." << endl;
    else
        cout << "\nNo, the array is not a palindrome." << endl;

    return 0;
}