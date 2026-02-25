#include <iostream>
#include <string>
#include<vector>
using namespace std;

struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

int ReadNumber(string Message)
{
    int Num = 0;
    cout << Message;
    cin >> Num;
    return Num;
}
void ReadInfo(strInfo& Info)
{
    cout << "Please enter FirstName?\n";
    cin >> Info.FirstName;
    cout << "Please enter LastName?\n";
    cin >> Info.LastName;
    cout << "Please enter Age?\n";
    cin >> Info.Age;
    cout << "Please enter Phone?\n";
    cin >> Info.Phone;
 }
void PrintInfo(strInfo& Info)
{
   cout << "\n**********************************\n";
   cout << "FirstName: " << Info.FirstName << endl;
   cout << "LastName: " << Info.LastName << endl;
   cout << "Age: " << Info.Age << endl;
   cout << "Phone: " << Info.Phone << endl;
   cout << "\n**********************************\n";
}
//void ReadPersonsInfo(void *Persons[])
//{
//    ReadInfo(Persons[0]);
//    ReadInfo(Persons[1]);
//}
//void PrintPersonsInfo(void *Persons[])
//{
//    cout << "\n**********************************\n";
//    PrintInfo(Persons);
//    PrintInfo(*Persons[1]);
//}


int main()
{
    vector<int> num{ 1, 2, 3, 4, 5 }; // declareiterator
    vector<int>::iterator iter; // use iterator with for loop

    for (iter = num.begin(); iter != num.end();iter++){  
        cout << *iter << "  "; 
    }
   
    
    
    /* int* p;
    int Num = ReadNumber("enter num person\n");
    p = new int[Num];
    p = new int[Num];
   
    cout << p ;

    cin >> *p;
    cout << *p ;

    delete[] p;*/

    /*ReadPersonsInfo(&p);
    PrintPersonsInfo(&p);*/
 
    return 0;
}