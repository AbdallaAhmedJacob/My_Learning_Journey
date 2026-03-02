#include<string>
#include<vector>
#include<fstream>
#include<iostream>
#include<iomanip>


using namespace std;

struct stInfo
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};

const string ClientsFileName = "Clients.text";
vector <string> FillVectorWithString(string S1, string Separators = "#//#");
stInfo ConvertRecordToStructure(vector <string> vClient, string Separator = "#//#");

vector <stInfo> GitRecordInFile()
{
	fstream File;
	vector <stInfo> vClients;
	string Line = "";

	File.open(ClientsFileName, ios::in);

	if (File.is_open())
		while (getline(File, Line))
		{
			stInfo stClient = ConvertRecordToStructure(FillVectorWithString(Line));
			vClients.push_back(stClient);
		}
	File.close();

	return vClients;
}

void PrintClientRecord(stInfo stClient)
{
	cout << "|" << left << setw(20) << stClient.AccountNumber;
	cout << "|" << left << setw(10) << stClient.PinCode;
	cout << "|" << left << setw(30) << stClient.Name;
	cout << "|" << left << setw(15) << stClient.Phone;
	cout << "|" << left << setw(20) << stClient.AccountBalance;
}

void ShowRecordClients(vector <stInfo> vClients)
{

	cout << "\n\t\t\t\t\t\tClient list (" << vClients.size() << ") Client(s).\n\n";
	cout << "\n\n_________________________________________________________________";
	cout << "_____________________________________________________________________\n\n";
	cout << "|" << left << setw(20) << "Account Number";
	cout << "|" << left << setw(10) << "Pin code";
	cout << "|" << left << setw(30) << "Client Name";
	cout << "|" << left << setw(15) << "Pone";
	cout << "|" << left << setw(20) << "Balance";
	cout << "\n\n_________________________________________________________________";
	cout << "_____________________________________________________________________\n\n";

	for (stInfo Client : vClients)
	{
		PrintClientRecord(Client);
		cout << endl;
	}
}

void runShowData()
{
	
	vector <stInfo> vClients = GitRecordInFile();
		
	ShowRecordClients(vClients);
	
}