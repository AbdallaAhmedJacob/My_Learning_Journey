#include<iostream>
#include<string>
#include<vector>
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

vector <string> FillVectorWithString(string S1, string Separators = "#//#");
stInfo ConvertRecordToStructure(vector <string> vClient, string Separator = "#//#");
void PrintRecord(stInfo& Client);

const string ClientsFileName = "Clients.text";

bool FindClientByAccountNumber(string AccountNumber, stInfo &Client)
{
	fstream File;
	string Line = "";

	File.open(ClientsFileName, ios::in);
	if (File.is_open())
	{
		while (getline(File, Line))
		{
			if (Line.substr(0, AccountNumber.length()) == AccountNumber)
			{
				File.close();
				Client = ConvertRecordToStructure(FillVectorWithString(Line));
				return true;
			}
		}
	}
	return false;
}

void runFindClientByAccountNumber()
{
	string AccountNumber = "";

	cout << "Please enter Account number: ";
	getline(cin >> ws, AccountNumber);

	stInfo Client;
	if (FindClientByAccountNumber(AccountNumber, Client))
		PrintRecord(Client);
	else
		cout << "Client with Account number (" << AccountNumber << ") not found" << endl;
}