// Continue and break  

#include <iostream>
using namespace std;
int ReadNumber(int& Num)
{
    cout << "Pleas enter number \n";
    cin >> Num;
    return Num;
}

int Sum(int& Num)
{
    int sum = 0;
    for (int i = 1; i <= 5; i++)
    {
        ReadNumber(Num);
        if (Num > 50)
        {
            continue;
        }
        sum += Num;
    }
    return sum;
}
void Search(int& S)
{
    ReadNumber(S);
    for (int i = 1;;i++)
    {
        if (S == i)
        {
            cout << "S = " << S << endl;
            break;
        }
        cout << i << "\n";
    }
}
int main()
{
    int Num;
    //Search(Num);
    //Sum(0);
}