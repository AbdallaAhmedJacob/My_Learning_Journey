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

double ReadNumber(string message)
{
	double Number = 0;
	while (true)
	{
		cout << message;
		cin >> Number;
		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a valid number.\n";
		}
		else
			return Number;
	}
}

stInfo ReadInfo()
{
	stInfo Client;

	cin.ignore(1, '\n');
	cout << "Please enter account number: ";
	getline(cin >> ws, Client.AccountNumber);

	cout << "Please enter the pin code: ";
	getline(cin, Client.PinCode);

	cout << "Please enter name: ";
	getline(cin, Client.Name);

	cout << "Please enter Phone: ";
	getline(cin, Client.Phone);

	Client.AccountBalance = double(ReadNumber("Please enter account balance: "));

	return Client;
}

string ConvertRecordToLine(stInfo Client, string Separator = "#//#")
{
	string S1 = "";

	S1 += Client.AccountNumber + Separator;
	S1 += Client.PinCode + Separator;
	S1 += Client.Name + Separator;
	S1 += Client.Phone + Separator;
	S1 += to_string(Client.AccountBalance);

	return S1;
}

void runReadClintData()
{
	cout << "Please enter client data\n\n";

	stInfo Client;
	Client = ReadInfo();

	cout << "\n\nClient record for saving is:\n";

	cout << ConvertRecordToLine(Client, "#//#");
}
