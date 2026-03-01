#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;


void CreateFile(string FileName)
{
	fstream MyFile;

	MyFile.open(FileName, ios::out);       // Write mode.

	if (MyFile.is_open())
	{
		MyFile << "This first file creat first\n";
		MyFile << "Abdalla Ahmed Jacob\n";
		MyFile << "I love programing \n";
		MyFile << "Programing is easy \n";
		MyFile << "I love learn advans programing\n";

		MyFile.close();
	}

}

void WriteFile(string FileName)
{
	fstream MyFile;

	MyFile.open("FileName", ios::out);       // Write mode.

	if (MyFile.is_open())
	{
		MyFile << "This first file creat first\n";
		MyFile << "Abdalla Ahmed Jacob\n";
		MyFile << "I love programing \n";
		MyFile << "Programing is easy \n";
		MyFile << "I love learn advance programing\n";

		MyFile.close();
	}

}

void PrintFileContinent(string FileName)
{
	fstream MyFile;

	MyFile.open("MyFile.text", ios::in);       //Read mode.

	if (MyFile.is_open())
	{
		string Line;

		while (getline(MyFile, Line))
		{
			cout << Line << endl;
		}

		MyFile.close();
	}
}

void LoadDataFromFileToVector(string FileName, vector <string>& vFileCounted)
{
	
	fstream MyFile;

	MyFile.open(FileName,ios::in);
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

void SaveVectorToFile(string FileName, vector <string>& vFileCountent)
{
	fstream MyFile;
	

	MyFile.open(FileName, ios::out); // Writ Logec.

	if (MyFile.is_open())
	{
		for (string& Line : vFileCountent)
			if (Line != "")
				MyFile << Line << endl;
	MyFile.close();
	}
}

void DeleteRecordFromFile(string FileName, string Record)
{
	vector <string> vFileCountenet;

	LoadDataFromFileToVector(FileName, vFileCountenet);

	for (string& Line : vFileCountenet)
	{
		if (Line == Record)
			Line = "";
	}
	SaveVectorToFile(FileName, vFileCountenet);
}

void UpdateRecordInFile(string FileName, string Record, string Update)
{
	vector <string> vFileCountenet;

	LoadDataFromFileToVector(FileName, vFileCountenet);

	for (string& Line : vFileCountenet)
	{
		if (Line == Record)
			Line = Update;
	}
	SaveVectorToFile(FileName, vFileCountenet);
}

int main()
{
	fstream MyFile;
	vector <string> vFileCountet;
	vector <string> vFileCountet2{ "aaaaaa","b","c","d" };
	
	CreateFile("MyFile.text");

	PrintFileContinent("MyFile.text");

	LoadDataFromFileToVector("MyFile.text", vFileCountet);

	for (string& Line : vFileCountet)
	{
		cout << Line << endl;
	}
	SaveVectorToFile("MyFileNumberTow.txt", vFileCountet2);
	DeleteRecordFromFile("MyFileNumberTow.txt", "c");
	
	UpdateRecordInFile("MyFileNumberTow.txt", "a", "Xx");

}