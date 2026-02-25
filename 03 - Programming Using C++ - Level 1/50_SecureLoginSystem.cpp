/*
* This program simulates a secure login process with a limited number of attempts.
* It prompts the user for a PIN code and allows only three tries.
* If the user enters the correct PIN, access is granted. Otherwise, the account is blocked.
*/

#include <iostream>
#include <string>

using namespace std;

string ReadPinCode()
{
    string PinCode;
    cout << "Please enter the PIN code:\n";
    cin >> PinCode;
    return PinCode;
}

bool Login()
{
    string PinCode;
    int TriesCounter = 3;

    do
    {
        PinCode = ReadPinCode();

        if (PinCode == "1234")
        {
            return true; // Successful login
        }

        TriesCounter--;
        cout << "\nWrong PIN. You have " << TriesCounter << " more tries.\n";

        // This is a Windows-specific command for terminal color.
        system("color 4F");
    } while (TriesCounter > 0);

    // If the loop finishes without a successful login, the function returns false.
    return false;
}

int main()
{
    if (Login())
    {
        // This is a Windows-specific command for terminal color.
        system("color 2F"); // turn screen to green on Windows
        cout << "\nAccess granted. Welcome!\n";
        cout << "Your account balance is " << 7500 << '\n';
    }
    else
    {
        cout << "\nYour card is blocked. Please contact the bank for help.\n";
    }
    return 0;
}