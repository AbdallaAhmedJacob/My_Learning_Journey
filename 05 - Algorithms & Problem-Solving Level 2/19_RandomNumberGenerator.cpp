/*
* This program generates and prints random numbers within a user-defined range.
* It demonstrates the use of the `rand()` and `srand()` functions for number generation.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int RandomNumber(int From, int To)
{
    if (From > To)
    {
        return 0;
    }

    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

int main()
{
    srand((unsigned)time(NULL));

    cout << "Random numbers in different ranges:\n";
    cout << "Range [5, 10]    : " << RandomNumber(5, 10) << endl;
    cout << "Range [1, 100]   : " << RandomNumber(1, 100) << endl;
    cout << "Range [1, 1000]  : " << RandomNumber(1, 1000) << endl;
    cout << "Range [10k, 1B]  : " << RandomNumber(10000, 1000000000) << endl;

    return 0;
}