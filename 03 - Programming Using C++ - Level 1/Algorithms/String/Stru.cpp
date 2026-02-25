// String   xxxxxxxxxxxxxx !!!!!!

#include <iostream>
#include<string>

using namespace std;

void x()
{
    string FullName;
    cout << "Pleas enter String ? \n";
    getline(cin, FullName);
    cout << FullName << "\n";
}

void string5()
{
    string Num1;
    cout << "Pleas enter String 5 ? \n";
    getline(cin, Num1);
    cout << Num1 << "\n\n";
}

void string10()
{
    string Num2;
    cout << "Pleas enter String 10 ? \n";
    getline(cin, Num2);
    cout << Num2 << "\n\n";
}

void y()
{
   
    cout << "******************************************************" << "\n";
    cout << "the length of String is " << FullName.length() << "\n";
    cout << "Characters at 0,2,4,7 are: " << FullName[0, 4] << "\n";


int main()
{
     x();
   // string5();
    //string10();
    y();

   /* string Num1;
    cout << "Pleas enter String 5 ? \n";
    getline(cin, Num1);
    cout << Num1 << "\n\n";*/
    
   /* string Num2;
    cout << "Pleas enter String 10 ? \n";
    getline(cin, Num2);
    cout << Num2 << "\n\n";*/
    
    //cout << "******************************************************" << "\n";
    //cout << "the length of String is "<< FullName.length() << "\n";
    //cout << "Characters at 0,2,4,7 are: " << FullName[0,4] << "\n";//
   
    cout << "Concatenating String 5 and String 10 = " << Num1+Num2 << "\n";
    int Sum = (stoi(Num1) * stoi(Num2));
    cout << Num1 << " * " << Num2 << " = " << Sum << endl;*/
}