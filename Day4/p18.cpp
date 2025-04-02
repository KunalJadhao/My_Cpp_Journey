// Password Validation
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string Password;
    const string CorrectPassword = "Secure123";
    while (true)
    {
        cout << "Enter your Password: ";
        cin >> Password;

        if (Password == CorrectPassword)
        {
            cout << "Acess Granted!" << endl;
            break; // exit the loop
        }else
    {
        cout << "Incorrect password! Try again" << endl;
    }
    return 0;
}
}