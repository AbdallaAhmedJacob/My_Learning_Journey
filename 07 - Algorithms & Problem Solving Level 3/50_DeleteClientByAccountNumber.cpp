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
void PrintRecord(stInfo& Client);

const string ClientsFileName = "Clients.text";

void LoadDataFromFileToVector(string FileName, vector <string>& vFileCounted)
{
	fstream MyFile;

	MyFile.open(FileName, ios::in);
	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile, Line))
		{
			vFileCounted.push_back(Line);
		}
	}

	MyFile.close();
}

void SaveVectorToFile(string FileName, vector <string>& vFileContent)
{
	fstream MyFile;

	MyFile.open(FileName, ios::out); // Writ Logic.

	if (MyFile.is_open())
	{
		for (string& Line : vFileContent)
			if (Line != "")
				MyFile << Line << endl;
		MyFile.close();
	}
}

void DeleteClientByAccountNumber(string AccountNumber)
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
				vector <string> vFileContent;

				string AccountClient = Line;

				LoadDataFromFileToVector(ClientsFileName, vFileContent);

				for (string& Line : vFileContent)
				{
					if (Line == AccountClient)
						Line = "";
				}
				SaveVectorToFile(ClientsFileName, vFileContent);
				
				File.close();
			}
		}
	}
}

void runDeleteClientByAccountNumber()
{
	string AccountNumber = "";

	cout << "Please enter Account number: ";
	getline(cin >> ws, AccountNumber);

	stInfo Client;
	if (FindClientByAccountNumber(AccountNumber, Client))
	{
		PrintRecord(Client);
		char Assert;

		cout << "Are you sure delete this client? Y/N: ";
		cin >> Assert;

		if (toupper(Assert) == 'Y')
		{
			DeleteClientByAccountNumber(AccountNumber);
			cout << "Client deleted successfully.";
		}
		else
			system("exit");
	}
	else
		cout << "Client with Account number (" << AccountNumber << ") not found" << endl;
}