#include<iostream>
#include<string>
#include<fstream>
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


bool FindClientByAccountNumber(string AccountNumber, stInfo& Client);
vector <string> FillVectorWithString(string S1, string Separators = "#//#");
stInfo ConvertRecordToStructure(vector <string> vClient, string Separator = "#//#");
void LoadDataFromFileToVector(string FileName, vector <string>& vFileCounted);
void SaveVectorToFile(string FileName, vector <string>& vFileContent);
void PrintRecord(stInfo& Client);
string ConvertRecordToLine(stInfo Client, string Separator = "#//#");
stInfo ReadInfo();

const string ClientsFileName = "Clients.text";

void UpdateClientByAccountNumber(string AccountNumber)
{
	fstream File;
	string Line = "";

	File.open(ClientsFileName, ios::in); // Logic Write.
	if (File.is_open())
	{
		while (getline(File, Line))
		{
			if (Line.substr(0, AccountNumber.length()) == AccountNumber) // Find Account number.
			{
				vector <string> vFileContent;

				string AccountClient = Line;

				LoadDataFromFileToVector(ClientsFileName, vFileContent);

				for (string& Line : vFileContent)
				{
					if (Line == AccountClient)
						Line = ConvertRecordToLine(ReadInfo(), "#//#");
				}
				SaveVectorToFile(ClientsFileName, vFileContent);

				File.close();
			}
		}
	}
}

void runUpdateClientByAccountNumber()
{
	string AccountNumber = "";

	cout << "Please enter Account number: ";
	cin >> AccountNumber;

	stInfo Client;
	if (FindClientByAccountNumber(AccountNumber, Client))
	{
		PrintRecord(Client);
		char Assert;

		cout << "Are you  sure Update this client? Y/N: ";
		cin >> Assert;

		if (toupper(Assert) == 'Y')
		{
			UpdateClientByAccountNumber(AccountNumber);
			cout << "Client deleted successfully.";
		}
		else
			system("exit");
	}
	else
		cout << "Client with Account number (" << AccountNumber << ") not found" << endl;
}