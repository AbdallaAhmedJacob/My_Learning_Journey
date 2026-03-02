#include<string>
#include<iostream>
#include<fstream>

using namespace std;

struct stInfo
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};

stInfo ReadInfo();
string ConvertRecordToLine(stInfo Client, string Separator = "#//#");

const string ClientsFileName = "Clients.text";

void SaveRecordToFile(string &S1)
{
	fstream File;
	
	File.open(ClientsFileName, ios::out | ios::app);

	if (File.is_open())
		File << S1 << endl;
	File.close();
}

void AddClient()
{
	char AddMore = 'Y';
	do
	{
		system("cls");

		cout << "\n\n----------------------------------------------------------\n\n";
		stInfo Client = ReadInfo();
		string S1 = ConvertRecordToLine(Client, "#//#");

		SaveRecordToFile(S1);
		cout << "\n\nClient Added successfully, do you went to add more client? Y/N :";

		cin >> AddMore;

	} while (toupper(AddMore) == 'Y');
}

void runSaveClientDataToFile()
{
	AddClient();
}