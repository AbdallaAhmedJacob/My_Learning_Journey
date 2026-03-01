#include<iostream>

using namespace std;

void FillArray(int arr[][10][10], int arrLength) {

	
	for (int i = 0; i < arrLength;i++){

		for (int j = 0; j < arrLength; j++) {

			for (int k = 0; k < arrLength; k++) {

				arr[i][j][k] = (i + 1) * (j + 1) * (k + 1);
			}
		}
	}
}

void PrintArray(int arr[][10][10], int arrLength) {
	
	for (int i = 0; i < arrLength; i++) {


		for (int j = 0; j < arrLength; j++) {

			for (int k = 0; k < arrLength; k++) {

				printf("%0*d ", 4, arr[i][j][k]);

			}
			cout << endl;
		}
		cout << endl;
		cout << endl;
		cout << endl;
	}
}

//int main() {
//	int arr[10][10][10];
//
//	int arrLength = 10;
//
//	
//	FillArray(arr, arrLength);
//	PrintArray(arr, arrLength);
//
//	
//
//}