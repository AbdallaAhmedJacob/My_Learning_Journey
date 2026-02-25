/*
* This program simulates a login process that requires a valid PIN code.
* It prompts the user for a PIN and keeps asking until the correct one is entered.
* Upon successful login, it displays a welcome message and account details.
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
    do
    {
        PinCode = ReadPinCode();
        if (PinCode == "1234")
        {
            return true;
        }
        else
        {
            cout << "\nWrong PIN. Please try again.\n";
            // The system() call is specific to certain operating systems and can have security risks.
            // A more robust solution would be to use libraries that handle terminal output.
            system("color 4F");
        }
    } while (true); // Loop indefinitely until the 'return true' statement is reached.
}

int main()
{
    if (Login())
    {
        // The system() call is specific to certain operating systems and can have security risks.
        system("color 2F"); // turn screen to green on Windows
        cout << "\nAccess granted. Welcome!\n";
        cout << "Your account balance is " << 7500 << '\n';
    }
    return 0;
}