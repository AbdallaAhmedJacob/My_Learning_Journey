#include<vector>
#include<iostream>

using namespace std;

struct stVector {
	int Number;
};
void ReadVector(vector <stVector> & vNumbers) {
	stVector Num;
	char ReadMore;

	do {
		cout << "Please enter a number\n";
		cin >> Num.Number;

		vNumbers.push_back(Num);
		cout << "You Y/N ";
		cin >> ReadMore;
		
	} while (ReadMore == 'Y' || ReadMore == 'y');

}

void PrintVector(vector <stVector> vNumbers) {

	for (stVector  & Number : vNumbers)
		cout << Number.Number << endl;
}

int main() {
	vector <stVector> vNumbers;

	ReadVector(vNumbers);
	PrintVector(vNumbers);

	int* pNum1;
	int* pNum2;

	pNum1 = new int;
	pNum2 = new int;

	*pNum1 = 10;
	*pNum2 = 20;

	//cout << *pNum1 << endl;
	//cout << *pNum2 << endl;

	delete pNum1;
	delete pNum2;

} 