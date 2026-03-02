#include<string>
#include<iostream>
#include<vector>

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
vector <string> FillVectorWithString(string S1, string Separators);

stInfo ConvertRecordToStructure(vector <string> vClient, string Separator = "#//#")
{
	stInfo Client;

	Client.AccountNumber = vClient[0];
	Client.PinCode = vClient[1];
	Client.Name = vClient[2];
	Client.Phone = vClient[3];
	Client.AccountBalance = stod(vClient[4]);

	return Client;
}

void PrintRecord(stInfo &Client)
{
	cout << "Account Number : " << Client.AccountNumber << "\n";
	cout << "PinCode        : " << Client.PinCode << "\n";
	cout << "Name           : " << Client.Name << "\n";
	cout << "Phone          : " << Client.Phone << "\n";
	printf ("AccountBalance :%.*f\n", 5, Client.AccountBalance);
}

void runPrintClientData()
{
	stInfo Client = ReadInfo();
	string S1 = ConvertRecordToLine(Client);
	cout << "line record is:\n";
	cout << "\n" << S1 << "\n";
	
	vector <string> vClient = FillVectorWithString(S1, "#//#");

	cout << "The folioing is the extracted client record\n";
	stInfo stClient = ConvertRecordToStructure(vClient);

	PrintRecord(stClient);

}
