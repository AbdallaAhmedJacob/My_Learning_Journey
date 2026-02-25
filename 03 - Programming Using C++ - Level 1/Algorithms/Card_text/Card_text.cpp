/*
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

struct stCom
{
	string Email;
	string Phone;
	string WhetsApp;
	string FaceBook;
	string Instagram;
	string YouTube;
	string LinkedIn;
	string GitHap;
	string SnapChat;
};

struct stSalary
{
	float monthlySalary;
};

struct stInfo
{
	string Name;
	short Age;
	string City;
	string Country;
    stCom Com;
	stSalary Salary;
	short Marred;
	string Gender;
};

enum enMarred { Marred, Singale };
enum enGender { Male, Female };

int ReadRingNumbers(string Message, int From, int To)
{
	int Number = 0;
	do
	{
	cout << Message;
	cin >> Number;
	if (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	} while (Number <From || Number >To);
	return Number;
}

float ReadNumber(string Message)
{
	float Number = 0;

	cout << Message;
	cin >> Number;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		cout << Message;
		cin >> Number;
	}
	return Number;
}

void ReadInfo(vector <stInfo> & Persons)
{
	stInfo& Employee;

	cin.ignore(1,'\n');
	cout << "Pleas enter your Name\n";
	getline(cin, Employee.Name);

	Employee.Age = ReadNumber("Pleas enter your Age \n");
	cin.ignore(1, '\n');

	cout << "Pleas enter your City\n";
	getline(cin, Employee.City);

	cout << "Pleas enter your Country \n";
	getline(cin, Employee.Country);

	Employee.Salary.monthlySalary = ReadNumber("Pleas enter your Monthly Salary\n");
	cin.ignore(1, '\n');

	cout << "Pleas enter your Gender\n";
	getline(cin , Employee.Gender);

	Employee.Marred = ReadRingNumbers("Do you  is Marred enter [1]Marred,or [0]Senegal\n", 0, 1);

	cout << "Pleas enter your Phone\n";
	getline(cin , Employee.Com.Phone);

	cout << "Pleas enter your Email\n";
	getline(cin , Employee.Com.Email);

	cout << "Pleas enter your Face Book\n";
	getline(cin , Employee.Com.FaceBook);

	cout << "Pleas enter your Instagram \n";
	getline(cin , Employee.Com.Instagram);

	cout << "Pleas enter your You Tube \n";
	getline(cin , Employee.Com.YouTube);

	cout << "Pleas enter your Whets App\n";
	getline(cin, Employee.Com.WhetsApp);

	cout << "Pleas enter your LinkedIn\n";
	getline(cin , Employee.Com.LinkedIn);

	cout << "Pleas enter your Git Hap" << endl;
	getline(cin , Employee.Com.GitHap);

	cout << "Pleas enter your Snap chat" << endl;
	getline(cin , Employee.Com.SnapChat);

	Persons.push_back(Employee);
}

void PrintInfo(vector <stInfo> & Persons)
{
	stInfo Employee;

	"\n******************************************************************************************\n";
	cout << setw(25) << "This your Name   :  "<<Employee.Name <<"\n";
	cout << setw(25) << "This your Age      :  " << Employee.Age << "\n";
	cout << setw(25) <<"This your Gender   :  "<<Employee.Gender <<"\n";
	cout << setw(25) <<"This your Country  :  "<<Employee.Country <<"\n";
	cout << setw(25) <<"This your City     :  "<<Employee.City <<"\n";
	cout << setw(25) << "This your Salary Monthly  :" <<Employee.Salary.monthlySalary<< "\n";
	cout << setw(25) << "This your Salary Yearly   :" <<Employee.Salary.monthlySalary * 12 << "\n";
	cout << setw(25) <<"This your Marred   : "<<Employee.Marred <<"\n";
	cout << setw(25) <<"This your Phone    : "<<Employee.Com.Phone <<"\n";
	cout << setw(25) <<"This your Email    : "<<Employee.Com.Email <<"\n";
	cout << setw(25) <<"This your WhetsApp : "<<Employee.Com.WhetsApp <<"\n";
	cout << setw(25) <<"This your FaceBook : "<<Employee.Com.FaceBook <<"\n";
	cout << setw(25) <<"This your You Tube : "<<Employee.Com.YouTube <<"\n";
	cout << setw(25) <<"This your Instagram: "<<Employee.Com.Instagram <<"\n";
	cout << setw(25) <<"This your Linked in: "<<Employee.Com.LinkedIn <<"\n";
	cout << setw(25) <<"This your Git Hap  : "<<Employee.Com.GitHap <<"\n";
	cout << setw(25) <<"This your Snap chat: "<<Employee.Com.SnapChat <<"\n";
	"\n**********************************************************************************************\n";

}
int NumberOfPerson = 0;
void ReadPersonsInfo(vector <stInfo> & Persons)
{
	NumberOfPerson = ReadNumber("How many Persons? ");
	

	for (int i = 0; i <= NumberOfPerson - 1; i++)
	{
		cout << "\nPleas Enter Person's " << i + 1 << " Info\n\n";
		ReadInfo(Persons);
	}
}
void PrintPersonsInfo(vector <stInfo> & Persons)
{
	int Counter = 0;

	for(stInfo & Employee : Persons)
	{
		Counter++;

		cout << "Info Person's " << Counter << " \n";

		cout << "\n**********************************\n";
		PrintInfo(Persons);
	}
}
int main()
{
	vector <stInfo> Persons;

	ReadPersonsInfo(Persons);
	PrintPersonsInfo(Persons);
}*/
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits> // Required for std::numeric_limits

using namespace std;

// Using enums for better readability and type safety
enum enMaritalStatus { Single, Married };
enum enGender { Male, Female };

// Struct to hold contact information
struct stContact
{
	string Email;
	string Phone;
	string WhatsApp;
	string Facebook;
	string Instagram;
	string YouTube;
	string LinkedIn;
	string GitHub;
	string Snapchat;
};

// Struct to hold salary information
struct stSalary
{
	float monthlySalary;
};

// Main struct for a person's information
struct stInfo
{
	string Name;
	short Age;
	string City;
	string Country;
	stContact Contact;
	stSalary Salary;
	enMaritalStatus MaritalStatus;
	enGender Gender;
};

// A single robust function to read a number, handle input errors, and optionally check a range
template <typename T>
T ReadNumber(string message, T min_value = numeric_limits<T>::min(), T max_value = numeric_limits<T>::max())
{
	T number;
	while (true)
	{
		cout << message;
		cin >> number;
		if (cin.fail() || number < min_value || number > max_value)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Please enter a valid number within the range [" << min_value << ", " << max_value << "].\n";
		}
		else
		{
			// Consume the rest of the line to prevent issues with subsequent getline() calls
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			return number;
		}
	}
}

// Function to read information for a single person
void ReadInfo(vector<stInfo>& persons)
{
	stInfo employee; // Create a local stInfo object to store the data

	cout << "Please enter the person's Name: ";
	getline(cin, employee.Name);

	employee.Age = ReadNumber<short>("Please enter the person's Age: ", 1, 120);

	cout << "Please enter the person's City: ";
	getline(cin, employee.City);

	cout << "Please enter the person's Country: ";
	getline(cin, employee.Country);

	employee.Salary.monthlySalary = ReadNumber<float>("Please enter the person's Monthly Salary: ", 0.0f);

	short gender_input = ReadNumber<short>("Please enter the person's Gender [0] for Male, [1] for Female: ", 0, 1);
	employee.Gender = static_cast<enGender>(gender_input);

	short marital_input = ReadNumber<short>("Please enter the person's Marital Status [0] for Single, [1] for Married: ", 0, 1);
	employee.MaritalStatus = static_cast<enMaritalStatus>(marital_input);

	cout << "Please enter the person's Phone: ";
	getline(cin, employee.Contact.Phone);

	cout << "Please enter the person's Email: ";
	getline(cin, employee.Contact.Email);

	cout << "Please enter the person's Facebook: ";
	getline(cin, employee.Contact.Facebook);

	cout << "Please enter the person's Instagram: ";
	getline(cin, employee.Contact.Instagram);

	cout << "Please enter the person's YouTube: ";
	getline(cin, employee.Contact.YouTube);

	cout << "Please enter the person's WhatsApp: ";
	getline(cin, employee.Contact.WhatsApp);

	cout << "Please enter the person's LinkedIn: ";
	getline(cin, employee.Contact.LinkedIn);

	cout << "Please enter the person's GitHub: ";
	getline(cin, employee.Contact.GitHub);

	cout << "Please enter the person's Snapchat: ";
	getline(cin, employee.Contact.Snapchat);

	persons.push_back(employee); // Add the completed struct to the vector
}

// Function to print information for a single person
void PrintInfo(const stInfo& employee)
{
	cout << "\n************************************************************************\n";
	cout << setw(25) << left << "Name:" << ": " << employee.Name << "\n";
	cout << setw(25) << left << "Age:" << ": " << employee.Age << "\n";
	cout << setw(25) << left << "Gender:" << ": " << (employee.Gender == enGender::Male ? "Male" : "Female") << "\n";
	cout << setw(25) << left << "Country:" << ": " << employee.Country << "\n";
	cout << setw(25) << left << "City:" << ": " << employee.City << "\n";
	cout << setw(25) << left << "Monthly Salary:" << ": " << employee.Salary.monthlySalary << "\n";
	cout << setw(25) << left << "Yearly Salary:" << ": " << employee.Salary.monthlySalary * 12 << "\n";
	cout << setw(25) << left << "Marital Status:" << ": " << (employee.MaritalStatus == enMaritalStatus::Married ? "Married" : "Single") << "\n";
	cout << setw(25) << left << "Phone:" << ": " << employee.Contact.Phone << "\n";
	cout << setw(25) << left << "Email:" << ": " << employee.Contact.Email << "\n";
	cout << setw(25) << left << "WhatsApp:" << ": " << employee.Contact.WhatsApp << "\n";
	cout << setw(25) << left << "Facebook:" << ": " << employee.Contact.Facebook << "\n";
	cout << setw(25) << left << "YouTube:" << ": " << employee.Contact.YouTube << "\n";
	cout << setw(25) << left << "Instagram:" << ": " << employee.Contact.Instagram << "\n";
	cout << setw(25) << left << "LinkedIn:" << ": " << employee.Contact.LinkedIn << "\n";
	cout << setw(25) << left << "GitHub:" << ": " << employee.Contact.GitHub << "\n";
	cout << setw(25) << left << "Snapchat:" << ": " << employee.Contact.Snapchat << "\n";
	cout << "************************************************************************\n";
}

// Function to read information for multiple people
void ReadPersonsInfo(vector<stInfo>& persons)
{
	int numberOfPersons = ReadNumber<int>("How many persons do you want to enter? ", 1);

	for (int i = 0; i < numberOfPersons; i++)
	{
		cout << "\nPlease Enter Person " << i + 1 << "'s Info:\n\n";
		ReadInfo(persons);
	}
}

// Function to print information for all people in the vector
void PrintPersonsInfo(const vector<stInfo>& persons)
{
	int counter = 0;
	for (const stInfo& employee : persons)
	{
		counter++;
		cout << "Displaying Info for Person " << counter << ":\n";
		PrintInfo(employee);
	}
}

int main()
{
	vector<stInfo> persons;

	ReadPersonsInfo(persons);
	PrintPersonsInfo(persons);

	return 0;
}
